/*--------------------------------------------------------------------
	Atari Audio Library
	Small & accurate ATARI-ST audio emulation
	Arnaud Carré aka Leonard/Oxygene
	@leonard_coder
--------------------------------------------------------------------*/
#pragma once

static const uint8_t s_envData[10 * 64] =
{
	// Env00xx
	0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	// Env01xx
	0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	// Env1000
	0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,
	0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,
	// Env1001
	0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	// Env1010
	0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,
	0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,
	// Env1011
	0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
	0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
	// Env1100
	0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,
	0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,
	// Env1101
	0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
	0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
	// Env1110
	0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,
	0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0xf,0xe,0xd,0xc,0xb,0xa,0x9,0x8,0x7,0x6,0x5,0x4,0x3,0x2,0x1,0x0,
	// Env1111
	0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

// All possible volume mixing combine, in ST-Replay mode (ie when all voices ON)
// Data measured on real hardware by Paulo Simoes in 2012
static const uint16_t sSTReplayTable[816] =
{
	0xfe5f,0xec59,0xdea7,0xd9d3,0xd86f,0xd859,0xd857,0xd856,0xd855,0xd854,0xd853,0xd853,0xd852,0xd852,0xd851,0xd851,
	0xd89c,0xc956,0xc245,0xbe54,0xbd41,0xbce1,0xbcdc,0xbcd8,0xbcd6,0xbcd5,0xbcd4,0xbcd3,0xbcd2,0xbcd1,0xbcd0,0xb81e,
	0xb019,0xaa76,0xa83b,0xa714,0xa6c7,0xa6a6,0xa697,0xa693,0xa691,0xa68f,0xa68d,0xa68c,0xa68b,0xa6d6,0xa021,0x9d40,
	0x9b82,0x9ae1,0x9a8f,0x9a6f,0x9a5d,0x9a59,0x9a4f,0x9a4d,0x9a4c,0x9a4b,0x98cb,0x9556,0x930f,0x922a,0x919e,0x9160,
	0x913f,0x912e,0x9125,0x911f,0x9118,0x9117,0x91c9,0x8f40,0x8e47,0x8dae,0x8d79,0x8d4e,0x8d3a,0x8d2e,0x8d26,0x8d1e,
	0x8d17,0x8d03,0x8bd3,0x8b07,0x8ab0,0x8a71,0x8a56,0x8a40,0x8a35,0x8a26,0x8a1b,0x8a9a,0x89ba,0x895a,0x8912,0x88f4,
	0x88da,0x88cc,0x88bf,0x88b0,0x88de,0x8874,0x882a,0x8807,0x87ee,0x87dd,0x87d3,0x87c2,0x8814,0x87c6,0x87a0,0x8784,
	0x8773,0x8766,0x8756,0x8780,0x8759,0x873c,0x8729,0x8719,0x870a,0x8735,0x871b,0x8708,0x86fc,0x86ea,0x8701,0x86ed,
	0x86de,0x86cd,0x86dc,0x86cd,0x86bd,0x86c4,0x86b0,0x86a5,0xc333,0xb18a,0xa937,0xa32f,0xa0ab,0x9f36,0x9eba,0x9e7f,
	0x9e69,0x9e5c,0x9e59,0x9e56,0x9e51,0x9e4f,0x9e4c,0x9ef8,0x9501,0x8dea,0x8aab,0x8819,0x86f0,0x8629,0x85d2,0x8591,
	0x8574,0x855b,0x854d,0x853c,0x8531,0x8b00,0x82c7,0x7ea6,0x7b7d,0x79f2,0x78ce,0x783d,0x77c9,0x778e,0x775f,0x7745,
	0x772c,0x7711,0x79eb,0x754e,0x71aa,0x6fd0,0x6e64,0x6da7,0x6d0b,0x6cb9,0x6c72,0x6c47,0x6c1d,0x6bec,0x7084,0x6c9d,
	0x6a99,0x690b,0x6844,0x67cb,0x675f,0x6717,0x66e8,0x66b9,0x667d,0x68b8,0x66db,0x6531,0x6449,0x6382,0x6312,0x62b3,
	0x6277,0x623d,0x61fc,0x64b5,0x62e8,0x61ef,0x6119,0x60a4,0x603d,0x5ffe,0x5fc0,0x5f78,0x610d,0x600b,0x5f29,0x5eb0,
	0x5e46,0x5e06,0x5dc4,0x5d75,0x5f08,0x5e1e,0x5d9d,0x5d2b,0x5cea,0x5ca6,0x5c57,0x5d3f,0x5cbd,0x5c49,0x5c02,0x5bbe,
	0x5b68,0x5c38,0x5bc5,0x5b81,0x5b3a,0x5ae8,0x5b5d,0x5b13,0x5acb,0x5a74,0x5acb,0x5a80,0x5a2a,0x5a3d,0x59e7,0x5993,
	0x8a6a,0x7f5a,0x76b2,0x7239,0x6eac,0x6cd7,0x6b6a,0x6aab,0x6a0d,0x69ba,0x6976,0x694d,0x6926,0x68f7,0x73a4,0x6a58,
	0x65ee,0x61f0,0x5fcb,0x5e10,0x5d1f,0x5c50,0x5bdd,0x5b7b,0x5b3f,0x5b04,0x5abc,0x6108,0x5bbd,0x5750,0x54e8,0x52ef,
	0x51d8,0x50df,0x5057,0x4fde,0x4f92,0x4f47,0x4eee,0x563c,0x5194,0x4f09,0x4cef,0x4bc4,0x4ab9,0x4a27,0x49a3,0x4952,
	0x4901,0x489f,0x4cf0,0x4a43,0x480b,0x46cc,0x45b3,0x4513,0x448c,0x4434,0x43e3,0x4388,0x4789,0x4544,0x4406,0x431f,
	0x4295,0x420b,0x41b4,0x4154,0x40e5,0x432e,0x4203,0x40d8,0x402f,0x3f98,0x3f3c,0x3ede,0x3e6b,0x40bd,0x3f85,0x3ed7,
	0x3e3c,0x3dd7,0x3d77,0x3d00,0x3e59,0x3da8,0x3d09,0x3ca6,0x3c42,0x3bc6,0x3cf5,0x3c55,0x3bee,0x3b8d,0x3b13,0x3bb5,
	0x3b53,0x3aec,0x3a6e,0x3aed,0x3a84,0x3a09,0x3a24,0x39a5,0x392a,0x67bd,0x5e21,0x58d1,0x545f,0x51f1,0x4ff5,0x4eda,
	0x4ddf,0x4d57,0x4cdc,0x4c91,0x4c43,0x4be7,0x53bc,0x4e10,0x4944,0x46a0,0x4470,0x435c,0x427a,0x41de,0x4159,0x4103,
	0x40ae,0x4044,0x4841,0x436a,0x40f5,0x3e9c,0x3d4b,0x3c1d,0x3b73,0x3ae1,0x3a84,0x3a25,0x39b1,0x3ec3,0x3bdc,0x3967,
	0x3802,0x36c7,0x3612,0x3570,0x3512,0x34ab,0x342d,0x38ef,0x3667,0x34fb,0x33b1,0x32f5,0x3252,0x31e8,0x317c,0x30ff,
	0x33d4,0x325f,0x3114,0x3053,0x2fac,0x2f41,0x2ed0,0x2e4c,0x30e7,0x2f8c,0x2ecb,0x2e1b,0x2db4,0x2d4a,0x2cc1,0x2e4f,
	0x2d89,0x2cd4,0x2c65,0x2bf1,0x2b65,0x2cb9,0x2c07,0x2b9d,0x2b30,0x2aa3,0x2b61,0x2aee,0x2a78,0x29ed,0x2a77,0x2a03,
	0x297b,0x2996,0x290c,0x287f,0x48f0,0x433c,0x3e5f,0x3b85,0x3921,0x37c3,0x368a,0x35d7,0x3534,0x34cf,0x3469,0x33ec,
	0x3d57,0x380c,0x3516,0x3295,0x3124,0x2fd9,0x2f1d,0x2e6f,0x2e08,0x2da0,0x2d1d,0x32c6,0x2fb1,0x2d11,0x2b96,0x2a39,
	0x2976,0x28c7,0x2859,0x27ed,0x2769,0x2c94,0x29e7,0x285f,0x26fa,0x2630,0x2579,0x2508,0x2498,0x240b,0x272c,0x25a2,
	0x243a,0x2370,0x22b8,0x2242,0x21d0,0x2145,0x2408,0x22a0,0x21d4,0x2128,0x20cb,0x207b,0x200d,0x2152,0x20aa,0x201e,
	0x1fad,0x1f39,0x1eab,0x2009,0x1f5a,0x1ee6,0x1e70,0x1de1,0x1ea1,0x1e2c,0x1db2,0x1d1a,0x1db0,0x1d36,0x1c9d,0x1cbe,
	0x1c27,0x1b8e,0x371f,0x31a2,0x2e89,0x2bea,0x2a68,0x290e,0x284a,0x2797,0x272d,0x26bd,0x2634,0x2c2a,0x28fa,0x2645,
	0x24be,0x2356,0x228d,0x21db,0x216a,0x2101,0x20a1,0x25c1,0x2304,0x217b,0x2061,0x1fa8,0x1eeb,0x1e7c,0x1e04,0x1d76,
	0x208c,0x1f1a,0x1daa,0x1cd9,0x1c16,0x1b9d,0x1b24,0x1a88,0x1d7e,0x1c04,0x1b2a,0x1a6a,0x19ef,0x1974,0x18df,0x1a96,
	0x19bc,0x18fb,0x1879,0x17fe,0x1761,0x18dc,0x1817,0x1799,0x171c,0x1684,0x1752,0x16d9,0x165e,0x15bc,0x165f,0x15df,
	0x153f,0x1560,0x14be,0x141f,0x2665,0x2325,0x20a1,0x1f44,0x1dd2,0x1d02,0x1c43,0x1bcb,0x1b57,0x1abf,0x2044,0x1d87,
	0x1be7,0x1a6c,0x1994,0x18ce,0x1857,0x17d8,0x173b,0x1aa2,0x18f3,0x1772,0x1695,0x15cc,0x1550,0x14d2,0x1435,0x1749,
	0x15c3,0x14e4,0x1422,0x139f,0x1322,0x1287,0x144e,0x136e,0x12a1,0x1220,0x119d,0x10fc,0x1282,0x11b7,0x1132,0x10b1,
	0x1011,0x10e4,0x1067,0x0fe3,0x0f42,0x0fe7,0x0f62,0x0ebf,0x0ee3,0x0e3d,0x0d9b,0x1d08,0x1a1f,0x187b,0x16f6,0x1615,
	0x1550,0x14d2,0x1452,0x13b8,0x172e,0x157f,0x13f6,0x1310,0x124a,0x11c9,0x1147,0x10aa,0x13cb,0x123b,0x1158,0x1088,
	0x1009,0x0f88,0x0ee4,0x10ba,0x0fd3,0x0f04,0x0e84,0x0dfb,0x0d59,0x0ee9,0x0e16,0x0d94,0x0d11,0x0c68,0x0d45,0x0cc0,
	0x0c3a,0x0b97,0x0c39,0x0bb6,0x0b11,0x0b30,0x0a8e,0x09e8,0x1439,0x1286,0x10f6,0x100f,0x0f45,0x0ec1,0x0e41,0x0d9f,
	0x10ce,0x0f3a,0x0e50,0x0d7c,0x0cfb,0x0c74,0x0bcb,0x0dad,0x0cbf,0x0bed,0x0b6c,0x0ae4,0x0a42,0x0bd8,0x0b03,0x0a81,
	0x09f7,0x094e,0x0a2d,0x09a2,0x091b,0x0874,0x0919,0x0892,0x07ea,0x080b,0x0766,0x06bd,0x0f0e,0x0d79,0x0c8c,0x0bbc,
	0x0b39,0x0aaf,0x0a0c,0x0bee,0x0b01,0x0a2d,0x09a5,0x091d,0x0877,0x0a0f,0x093b,0x08b6,0x0829,0x0785,0x0862,0x07db,
	0x0752,0x06a8,0x0751,0x06c9,0x061d,0x0641,0x0599,0x04ea,0x0a50,0x095f,0x0889,0x0806,0x077b,0x06d3,0x0872,0x0799,
	0x0713,0x068a,0x05de,0x06c3,0x0638,0x05ad,0x0506,0x05ae,0x0524,0x047b,0x049b,0x03f1,0x0348,0x077c,0x06a7,0x061f,
	0x0593,0x04ed,0x05ca,0x0547,0x04bc,0x040e,0x04bd,0x0435,0x0387,0x03ad,0x0303,0x0256,0x04fc,0x046f,0x03e5,0x033c,
	0x03e7,0x035f,0x02b4,0x02d3,0x022c,0x0181,0x035f,0x02d7,0x0229,0x024d,0x01a3,0x00fb,0x01c5,0x011b,0x0078,0x0000
};

#define	k15toS8(a)	((((a*127)>>15)+63)^0x80)	// signed 8bits value for oscillators viewing display per voice
static const uint32_t	s_ViewVolTab[16] =
{
	k15toS8(62),k15toS8(161),k15toS8(265),k15toS8(377),k15toS8(580),k15toS8(774),k15toS8(1155),k15toS8(1575),
	k15toS8(2260),k15toS8(3088),k15toS8(4570),k15toS8(6233),k15toS8(9330),k15toS8(13187),k15toS8(21220),k15toS8(32767)
};

static	uint32_t	s444to888[0x1000];

static uint16_t	s_ymMixingVolumeTable[16 * 16 * 16];
static	void	InitYmTable(uint16_t* pOut, const uint16_t* pIn)
{
	for (int a = 15; a >= 0; a--)
	{
		for (int b = a; b >= 0; b--)
		{
			for (int c = b; c >= 0; c--)
			{
				uint16_t data = uint16_t((*pIn++)>>1);	// 15bits unsigned
				pOut[a * 256 + b * 16 + c] = data;
				pOut[a * 256 + c * 16 + b] = data;
				pOut[b * 256 + a * 16 + c] = data;
				pOut[b * 256 + c * 16 + a] = data;
				pOut[c * 256 + a * 16 + b] = data;
				pOut[c * 256 + b * 16 + a] = data;
			}
		}
	}

	// init debug view table
	for (int i = 0; i < 0x1000; i++)
	{
		uint32_t v;
		v = s_ViewVolTab[(i >> 0) & 15] << 0;
		v |= s_ViewVolTab[(i >> 4) & 15] << 8;
		v |= s_ViewVolTab[(i >> 8) & 15] << 16;
		s444to888[i] = v;
	}
}
