/*
 * Milkymist Democompo
 * Copyright (C) 2007, 2008, 2009 Sebastien Bourdeauducq
 * Copyright (C) 2009 Alexandre Harly
 * Copyright (C) 2009 Bengt Sjolen
 * Copyright (C) 2009 Fabien Le Mentec
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */



#ifndef PITCH_TABLE_H_INCLUDED
# define PITCH_TABLE_H_INCLUDED


#define MAX_NOTE 120
#define MAX_FINETUNE 17


static const uint16_t pitch_table[MAX_NOTE][MAX_FINETUNE] =
  {
    { 2032, 2017, 2003, 1988, 1974, 1960, 1946, 1932, 2153, 2137, 2122, 2106, 2091, 2076, 2061, 2046, 0 },
    { 1918, 1904, 1890, 1877, 1863, 1850, 1836, 1823, 2032, 2017, 2003, 1988, 1974, 1960, 1946, 1932, 0 },
    { 1810, 1797, 1784, 1771, 1759, 1746, 1733, 1721, 1918, 1904, 1890, 1877, 1863, 1850, 1836, 1823, 0 },
    { 1708, 1696, 1684, 1672, 1660, 1648, 1636, 1624, 1810, 1797, 1784, 1771, 1759, 1746, 1733, 1721, 0 },
    { 1613, 1601, 1589, 1578, 1567, 1555, 1544, 1533, 1708, 1696, 1684, 1672, 1660, 1648, 1636, 1624, 0 },
    { 1522, 1511, 1500, 1489, 1479, 1468, 1458, 1447, 1613, 1601, 1589, 1578, 1567, 1555, 1544, 1533, 0 },
    { 1437, 1426, 1416, 1406, 1396, 1386, 1376, 1366, 1522, 1511, 1500, 1489, 1479, 1468, 1458, 1447, 0 },
    { 1356, 1346, 1337, 1327, 1317, 1308, 1299, 1289, 1437, 1426, 1416, 1406, 1396, 1386, 1376, 1366, 0 },
    { 1280, 1271, 1262, 1252, 1243, 1235, 1226, 1217, 1356, 1346, 1337, 1327, 1317, 1308, 1299, 1289, 0 },
    { 1208, 1199, 1191, 1182, 1174, 1165, 1157, 1149, 1280, 1271, 1262, 1252, 1243, 1235, 1226, 1217, 0 },
    { 1140, 1132, 1124, 1116, 1108, 1100, 1092, 1084, 1208, 1199, 1191, 1182, 1174, 1165, 1157, 1149, 0 },
    { 1076, 1069, 1061, 1053, 1046, 1038, 1031, 1023, 1140, 1132, 1124, 1116, 1108, 1100, 1092, 1084, 0 },
    { 1016, 1009, 1001, 994, 987, 980, 973, 966, 1076, 1069, 1061, 1053, 1046, 1038, 1031, 1023, 0 },
    { 959, 952, 945, 938, 932, 925, 918, 912, 1016, 1009, 1001, 994, 987, 980, 973, 966, 0 },
    { 905, 899, 892, 886, 879, 873, 867, 860, 959, 952, 945, 938, 932, 925, 918, 912, 0 },
    { 854, 848, 842, 836, 830, 824, 818, 812, 905, 899, 892, 886, 879, 873, 867, 860, 0 },
    { 806, 800, 795, 789, 783, 778, 772, 767, 854, 848, 842, 836, 830, 824, 818, 812, 0 },
    { 761, 756, 750, 745, 739, 734, 729, 724, 806, 800, 795, 789, 783, 778, 772, 767, 0 },
    { 718, 713, 708, 703, 698, 693, 688, 683, 761, 756, 750, 745, 739, 734, 729, 724, 0 },
    { 678, 673, 668, 663, 659, 654, 649, 645, 718, 713, 708, 703, 698, 693, 688, 683, 0 },
    { 640, 635, 631, 626, 622, 617, 613, 608, 678, 673, 668, 663, 659, 654, 649, 645, 0 },
    { 604, 600, 595, 591, 587, 583, 578, 574, 640, 635, 631, 626, 622, 617, 613, 608, 0 },
    { 570, 566, 562, 558, 554, 550, 546, 542, 604, 600, 595, 591, 587, 583, 578, 574, 0 },
    { 538, 534, 530, 527, 523, 519, 515, 512, 570, 566, 562, 558, 554, 550, 546, 542, 0 },
    { 508, 504, 501, 497, 493, 490, 486, 483, 538, 534, 530, 527, 523, 519, 515, 512, 0 },
    { 479, 476, 473, 469, 466, 462, 459, 456, 508, 504, 501, 497, 493, 490, 486, 483, 0 },
    { 453, 449, 446, 443, 440, 436, 433, 430, 479, 476, 473, 469, 466, 462, 459, 456, 0 },
    { 427, 424, 421, 418, 415, 412, 409, 406, 453, 449, 446, 443, 440, 436, 433, 430, 0 },
    { 403, 400, 397, 395, 392, 389, 386, 383, 427, 424, 421, 418, 415, 412, 409, 406, 0 },
    { 381, 378, 375, 372, 370, 367, 364, 362, 403, 400, 397, 395, 392, 389, 386, 383, 0 },
    { 359, 357, 354, 351, 349, 346, 344, 341, 381, 378, 375, 372, 370, 367, 364, 362, 0 },
    { 339, 337, 334, 332, 329, 327, 325, 322, 359, 357, 354, 351, 349, 346, 344, 341, 0 },
    { 320, 318, 315, 313, 311, 309, 306, 304, 339, 337, 334, 332, 329, 327, 325, 322, 0 },
    { 302, 300, 298, 296, 293, 291, 289, 287, 320, 318, 315, 313, 311, 309, 306, 304, 0 },
    { 285, 283, 281, 279, 277, 275, 273, 271, 302, 300, 298, 296, 293, 291, 289, 287, 0 },
    { 269, 267, 265, 263, 261, 260, 258, 256, 285, 283, 281, 279, 277, 275, 273, 271, 0 },
    { 254, 252, 250, 249, 247, 245, 243, 241, 269, 267, 265, 263, 261, 260, 258, 256, 0 },
    { 240, 238, 236, 235, 233, 231, 230, 228, 254, 252, 250, 249, 247, 245, 243, 241, 0 },
    { 226, 225, 223, 221, 220, 218, 217, 215, 240, 238, 236, 235, 233, 231, 230, 228, 0 },
    { 214, 212, 210, 209, 207, 206, 205, 203, 226, 225, 223, 221, 220, 218, 217, 215, 0 },
    { 202, 200, 199, 197, 196, 194, 193, 192, 214, 212, 210, 209, 207, 206, 205, 203, 0 },
    { 190, 189, 188, 186, 185, 184, 182, 181, 202, 200, 199, 197, 196, 194, 193, 192, 0 },
    { 180, 178, 177, 176, 174, 173, 172, 171, 190, 189, 188, 186, 185, 184, 182, 181, 0 },
    { 170, 168, 167, 166, 165, 163, 162, 161, 180, 178, 177, 176, 174, 173, 172, 171, 0 },
    { 160, 159, 158, 157, 155, 154, 153, 152, 170, 168, 167, 166, 165, 163, 162, 161, 0 },
    { 151, 150, 149, 148, 147, 146, 145, 144, 160, 159, 158, 157, 155, 154, 153, 152, 0 },
    { 143, 142, 140, 139, 138, 137, 136, 136, 151, 150, 149, 148, 147, 146, 145, 144, 0 },
    { 135, 134, 133, 132, 131, 130, 129, 128, 143, 142, 140, 139, 138, 137, 136, 136, 0 },
    { 127, 126, 125, 124, 123, 122, 122, 121, 135, 134, 133, 132, 131, 130, 129, 128, 0 },
    { 120, 119, 118, 117, 116, 116, 115, 114, 127, 126, 125, 124, 123, 122, 122, 121, 0 },
    { 113, 112, 112, 111, 110, 109, 108, 108, 120, 119, 118, 117, 116, 116, 115, 114, 0 },
    { 107, 106, 105, 104, 104, 103, 102, 102, 113, 112, 112, 111, 110, 109, 108, 108, 0 },
    { 101, 100, 99, 99, 98, 97, 97, 96, 107, 106, 105, 104, 104, 103, 102, 102, 0 },
    { 95, 94, 94, 93, 92, 92, 91, 90, 101, 100, 99, 99, 98, 97, 97, 96, 0 },
    { 90, 89, 89, 88, 87, 87, 86, 85, 95, 94, 94, 93, 92, 92, 91, 90, 0 },
    { 85, 84, 84, 83, 82, 82, 81, 81, 90, 89, 89, 88, 87, 87, 86, 85, 0 },
    { 80, 79, 79, 78, 78, 77, 77, 76, 85, 84, 84, 83, 82, 82, 81, 81, 0 },
    { 76, 75, 74, 74, 73, 73, 72, 72, 80, 79, 79, 78, 78, 77, 77, 76, 0 },
    { 71, 71, 70, 70, 69, 69, 68, 68, 76, 75, 74, 74, 73, 73, 72, 72, 0 },
    { 67, 67, 66, 66, 65, 65, 64, 64, 71, 71, 70, 70, 69, 69, 68, 68, 0 },
    { 63, 63, 63, 62, 62, 61, 61, 60, 67, 67, 66, 66, 65, 65, 64, 64, 0 },
    { 60, 59, 59, 59, 58, 58, 57, 57, 63, 63, 63, 62, 62, 61, 61, 60, 0 },
    { 57, 56, 56, 55, 55, 55, 54, 54, 60, 59, 59, 59, 58, 58, 57, 57, 0 },
    { 53, 53, 53, 52, 52, 51, 51, 51, 57, 56, 56, 55, 55, 55, 54, 54, 0 },
    { 50, 50, 50, 49, 49, 49, 48, 48, 53, 53, 53, 52, 52, 51, 51, 51, 0 },
    { 48, 47, 47, 47, 46, 46, 46, 45, 50, 50, 50, 49, 49, 49, 48, 48, 0 },
    { 45, 45, 44, 44, 44, 43, 43, 43, 48, 47, 47, 47, 46, 46, 46, 45, 0 },
    { 42, 42, 42, 41, 41, 41, 41, 40, 45, 45, 44, 44, 44, 43, 43, 43, 0 },
    { 40, 40, 39, 39, 39, 39, 38, 38, 42, 42, 42, 41, 41, 41, 41, 40, 0 },
    { 38, 37, 37, 37, 37, 36, 36, 36, 40, 40, 39, 39, 39, 39, 38, 38, 0 },
    { 36, 35, 35, 35, 35, 34, 34, 34, 38, 37, 37, 37, 37, 36, 36, 36, 0 },
    { 34, 33, 33, 33, 33, 32, 32, 32, 36, 35, 35, 35, 35, 34, 34, 34, 0 },
    { 32, 32, 31, 31, 31, 31, 30, 30, 34, 33, 33, 33, 33, 32, 32, 32, 0 },
    { 30, 30, 30, 29, 29, 29, 29, 28, 32, 32, 31, 31, 31, 31, 30, 30, 0 },
    { 28, 28, 28, 28, 27, 27, 27, 27, 30, 30, 30, 29, 29, 29, 29, 28, 0 },
    { 27, 27, 26, 26, 26, 26, 26, 25, 28, 28, 28, 28, 27, 27, 27, 27, 0 },
    { 25, 25, 25, 25, 24, 24, 24, 24, 27, 27, 26, 26, 26, 26, 26, 25, 0 },
    { 24, 24, 23, 23, 23, 23, 23, 23, 25, 25, 25, 25, 24, 24, 24, 24, 0 },
    { 22, 22, 22, 22, 22, 22, 21, 21, 24, 24, 23, 23, 23, 23, 23, 23, 0 },
    { 21, 21, 21, 21, 21, 20, 20, 20, 22, 22, 22, 22, 22, 22, 21, 21, 0 },
    { 20, 20, 20, 20, 19, 19, 19, 19, 21, 21, 21, 21, 21, 20, 20, 20, 0 },
    { 19, 19, 19, 18, 18, 18, 18, 18, 20, 20, 20, 20, 19, 19, 19, 19, 0 },
    { 18, 18, 18, 17, 17, 17, 17, 17, 19, 19, 19, 18, 18, 18, 18, 18, 0 },
    { 17, 17, 17, 16, 16, 16, 16, 16, 18, 18, 18, 17, 17, 17, 17, 17, 0 },
    { 16, 16, 16, 16, 15, 15, 15, 15, 17, 17, 17, 16, 16, 16, 16, 16, 0 },
    { 15, 15, 15, 15, 15, 14, 14, 14, 16, 16, 16, 16, 15, 15, 15, 15, 0 },
    { 14, 14, 14, 14, 14, 14, 14, 13, 15, 15, 15, 15, 15, 14, 14, 14, 0 },
    { 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 13, 0 },
    { 13, 13, 12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 0 },
    { 12, 12, 12, 12, 12, 11, 11, 11, 13, 13, 12, 12, 12, 12, 12, 12, 0 },
    { 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 11, 11, 11, 0 },
    { 11, 11, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 0 },
    { 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 10, 10, 10, 10, 10, 10, 0 },
    { 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 0 },
    { 9, 9, 9, 9, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9, 9, 9, 0 },
    { 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 8, 0 },
    { 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0 },
    { 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 0 },
    { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 0 },
    { 7, 7, 7, 7, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 0 },
    { 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 6, 6, 6, 6, 0 },
    { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0 },
    { 6, 6, 6, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 0 },
    { 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 5, 5, 5, 5, 5, 0 },
    { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0 },
    { 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 0 },
    { 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 0 },
    { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0 },
    { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0 },
    { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0 },
    { 4, 4, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 0 },
    { 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 3, 0 },
    { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0 },
    { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0 },
    { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0 },
    { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0 },
    { 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 0 },
    { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0 },
    { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0 },
    { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0 },
  };


#if 0 /* generated with the following code */

static void init_pitch_table(void)
{
  double base, pitch;
  int i, j, k;

  for (j = -8; j < 8; j++)
    {
      k = j < 0 ? j + 16 : j;

#define AMIGA_CLOCKFREQ 3575872
      base = AMIGA_CLOCKFREQ / 440.0 / 4.0 / powf(2.0, j / 96.0);

      for (i = 0; i < MAX_NOTE; i++)
	{
	  pitch = base / pow(2.0, i / 12.0);
	  pitch_table[i][k] = floorf(pitch + 0.5);
	}
    }
}

#endif


#if 0 /* printed with the following code */

static void print_pitch_table(void)
{
  unsigned int i;
  unsigned int j;

  printf("static const uint16_t pitch_table[MAX_NOTE][MAX_FINETUNE] =\n");
  printf("{\n");

  for (i = 0; i < MAX_NOTE; ++i)
    {
      printf("{");
      for (j = 0; j < MAX_FINETUNE; ++j)
	printf("%s %u", j ? "," : "", pitch_table[i][j]);
      printf(" },\n");
    }

  printf("};\n");
}

#endif


#endif /* ! PITCH_TABLE_H_INCLUDED */
