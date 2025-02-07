#pragma once
#include <stdint.h>
#include <thread>
#include <atomic>
#include <string>
#include "imgui_internal.h"
#include "extern/zip/src/zip.h"
#include "jobSystem.h"


class SndhArchivePlayer;
struct zip_t;

class SndhArchive
{
public:
	SndhArchive();
	~SndhArchive();

	struct zip_t* GetZipArchiveHandle() { return m_zipArchive; }

	bool	Open(const char* sFilename);
	void	Close();
	int		GetFilteredSize() const { return m_filterdSize; }
	int		GetUnFilteredSize() const { return m_size; }
	void	ImGuiDraw(SndhArchivePlayer& player);
	bool	IsOpen() const { return m_zipArchive != NULL; }
	bool	IsOpening() const { return m_asyncBrowse; }
	std::string GetFilename() const { return IsOpen() ? m_filename : std::string(""); }

private:
	struct PlayListItem
	{
		int zipIndex;
		const char* title;
		const char* author;
		const char* year;
		int	duration;
		int subsongCount;
	};

	void			RebuildFilterList()
	{
		m_filterdSize = 0;
		for (int i = 0; i < m_size; i++)
		{
			bool bFilter = m_ImGuiFilter.PassFilter(m_list[i].author);
			if ( !bFilter )
				bFilter = m_ImGuiFilter.PassFilter(m_list[i].title);
			if (bFilter)
			{
				m_filteredList[m_filterdSize] = m_list[i];
				m_filterdSize++;
			}
		}
	}

	PlayListItem*	m_list;
	int				m_size;
	PlayListItem*	m_filteredList;
	int				m_filterdSize;
	ImGuiTextFilter m_ImGuiFilter;
	struct zip_t*	m_zipArchive;
	static int fEntrySort(const void *arg1, const void *arg2)
	{
		const PlayListItem* a = (const PlayListItem*)arg1;
		const PlayListItem* b = (const PlayListItem*)arg2;
		int r = _stricmp(a->author, b->author);
		if ( 0 == r )
			r = _stricmp(a->title, b->title);
		return r;
	}

	static const int kMaxZipWorkers = 16;

	// job system large SNDH zip archive reader
	struct zip_t* m_zipPerWorker[kMaxZipWorkers];
	JobSystem m_jsBrowse;
	static bool JobZipItemProcessing(void* user, int itemId, int workerId);
	static bool JobZipItemComplete(void* user, int workerId);
	bool LoadZipEntry(int itemId, int workerId);
	bool LoadZipEnd();
	int m_zipWorkersCount;
	bool m_asyncBrowse;
	std::string m_filename;
	std::atomic<int> m_progress;
	bool m_firstSearchFocus;

};
