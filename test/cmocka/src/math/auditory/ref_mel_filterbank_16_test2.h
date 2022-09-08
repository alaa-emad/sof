/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 */

/* Created 01-Sep-2022 13:41:14 with script ref_matrix.m v1.9-rc1-1702-gba40860ea */

#define MEL_FILTERBANK_16_TEST2_FFT_SIZE  512
#define MEL_FILTERBANK_16_TEST2_NUM_MEL_BINS  23
#define MEL_FILTERBANK_16_TEST2_NORM_SLANEY  1
#define MEL_FILTERBANK_16_TEST2_MEL_LOG  MEL_LOG

static const int16_t mel_filterbank_16_test2_real[257] = {
	-14524,   8953, -15259,  26045,   3206,   6768,  10154, -27097,  31416,  -7535,
	-13474,  19986,  18034,  -5267,   2746, -25258,  27164,  23675, -27788,  13636,
	 21848, -21626,  10115, -15187,   -952,  14181, -31933, -18382,  -2840, -25485,
	  8760, -15635,  16278, -16098, -18609,  13635, -17153,  23641,   2041,   4727,
	 -8296,  -7535, -28402,  18813,  15524,  21360, -17497, -29852, -19252,  25672,
	 -6483, -17430,  31937, -28752,  21766, -27160, -12636,  10751,  20587, -19126,
	 -8558,   7591, -18918,  21413, -20138,   9098,  17562, -18059, -27888,  30062,
	  -475,   -808,  31263,  26350,  19310, -21380, -19101,   8806,  14256,  -6857,
	-32612, -29492,   -731, -19337, -22785, -18387,  24737,  17659, -19365,  -3317,
	 25704,  12265, -16868,  -3816,  -1013,  25872,  31824, -16250, -22512,  -5035,
	  7231,  -5942,  -7648,  25281,   4577, -25483, -15957, -16459,  -6348,  30003,
	 29149,  13127,  32654,  20326,   7775,  17698,  13013, -25845,   -852, -27226,
	 13808,   -689, -20433, -15081,  24948,  27568, -28006, -27821,  31486,  20712,
	-32687,   7893,   6328,  16515,   7230,  19534, -30111, -32342,  -7317, -17044,
	 14762,   7339, -19989,  19386, -27890,   7964,   7078,  23004,   2540,  14198,
	 -4197, -30458,  17614,  -8294,   6935,  15445,  29304, -25471,  14405,  -6861,
	-26601,   7244,   3415,  -2786,  26204,  26823,   8426,  19612,   9865,  14147,
	 -3311, -13357,   3489,  31281,  -4263,  28872,  29951,  -8721, -30777,  16045,
	 -6893,  -4596,  28368,  13085, -16654,  19447,   4409, -32644,  24128, -25879,
	 18482,  12271, -14797,  27538, -27853,  20327,  -8365,  -1445, -25029, -15691,
	-23254,  -5520,  -7871, -21458, -22006,   8928,  12272, -29799, -23480,  15207,
	 28771, -27601,  27961,   2764,  20725,  20283,  -1349,  -3423,  14251, -32383,
	 21003,  29302,  12769,   7884,  14762,  26201,  17371,  16780,  24418,  31847,
	 26469,  28839,  20005,  31620, -29805, -17378,  29801, -13791,  -9897, -23009,
	-14885, -27538,   3208, -15460, -12165,    807,   6914,  23151,  26035, -14633,
	 -7485,   2566, -19548,   1201, -20379,  26094,    408,
};

static const int16_t mel_filterbank_16_test2_imag[257] = {
	 15752,  31685, -21482,  30946, -13732,  -1818, -17262,  32530,  13342,  23486,
	 14959,  17852,  -6838, -12712, -14019,   6836,   -540,   7454, -15351,  16983,
	  3753, -24982, -10849, -10803, -15905,   9495,   -746,  23598,  21092,   3852,
	 27280,  -1770,  10267,   2676,  -6759,  -9023,  16799,  30197, -10328,  -5790,
	 13221,  15161,  -5803, -20614,  19995,  -1826, -32671,  22906, -28473,  -7942,
	 16259, -20958,  21141,  15464,  -1970, -21523,  24947,  20019, -18053, -18581,
	-25324,   -739,  31225, -22597, -31808,  21824,  -5612,  21742,  16446,  22385,
	-29277,  -3270,  21673,  17998,  -5461, -26206,  -7685,  -6018,  -8252, -22300,
	 20111, -22511,  10955, -17994,  -6824, -18747,  -3490, -28416,  30260, -31438,
	 -1241,   3413,   9646,  14015,   8883, -19759,  28411,  30249,  29154,  -4207,
	  6907,  -7154, -32087,  17003, -31576, -27753, -14234,  15551,  17724,   4190,
	 -3680, -13362,  23318,  -2679,  24834, -31342,  10307, -21887,  -7054,  20512,
	 -9367,  14948,   5934,  -5543,   3154,  24242, -21574,   6142,  -2329,   4428,
	 29598,  -3733,  17405,   7471,   7290,  -9956, -19332, -14074, -15633,  29524,
	 24369,  14572,  26534,  16419,   7774,  29529,  -1263,   6792,  20105, -26589,
	-18342, -26333,   -791, -19870,  16838,  21342, -29427,  -6214, -32128,   5713,
	 14853,  23375,  31296, -24664,  18822,  -3112,  10523, -17042,  16943, -30082,
	-18201,  14033,  12465, -19556,  -2725,  -4560,    611, -32443,  32633, -18413,
	-15194,    390, -17275,  11849,  15174, -20054, -21784, -22594, -21102, -23682,
	-29995, -27981,  17218, -19705, -21162,  13075,  12818,  32705,  28951,  -8930,
	  7293,  25515,  22657,  -8246,  13876,  17492, -12446, -19441, -21717,  20136,
	 19845,  18348,  -4760,  28689,  -8349,  -7570, -29047,  -7357,  10188,  -1961,
	 14595, -30021, -32114, -19624,    227,  16999,  -4587, -10719,   2444,  -5247,
	-17013, -16508, -30023,   4866,  -3215,  25478,   -357,  13861,   7255, -18778,
	 15630, -29792,   5811,     72,  29206,   2445,  24373, -26501, -28181, -26070,
	-32275, -22131,  25021,  -5901,  21705,  31040,  -4837,
};

static const int16_t mel_filterbank_16_test2_mel_log[23] = {
	  -506,   -466,   -561,   -521,   -502,   -546,   -508,   -553,   -549,   -473,
	  -462,   -486,   -468,   -499,   -486,   -489,   -489,   -494,   -494,   -491,
	  -492,   -475,   -487,
};