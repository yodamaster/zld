#ifndef _SHOCO_INTERNAL
#error This header file is only to be included by 'shoco.c'.
#endif
#pragma once
/*
This file was generated by 'generate_compressor_model.py'
so don't edit this by hand. Also, do not include this file
anywhere. It is internal to 'shoco.c'. Include 'shoco.h'
if you want to use shoco in your project.
*/

#define MIN_CHR 36
#define MAX_CHR 118

static const char chrs_by_chr_id[32] = {
  'e', '_', 'a', 'r', 'o', 't', 'l', '$', 'i', 'n', 'c', '1', 's', 'd', '7', '2', 'N', 'u', 'm', '3', 'T', 'p', 'E', '0', '.', '4', 'S', 'b', 'Z', '6', '5', 'f'
};

static const int8_t chr_ids_by_chr[256] = {
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, 24, -1, 23, 11, 15, 19, 25, 30, 29, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 22, -1, -1, -1, -1, -1, -1, -1, -1, 16, -1, -1, -1, -1, 26, 20, -1, -1, -1, -1, -1, 28, -1, -1, -1, -1, 1, -1, 2, 27, 10, 13, 0, 31, -1, -1, 8, -1, -1, 6, 18, 9, 4, 21, -1, 3, 12, 5, 17, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
};

static const int8_t successor_ids_by_chr_id_and_chr_id[32][32] = {
  {-1, -1, 7, 0, -1, 4, 12, -1, -1, 2, 1, 6, 3, 5, -1, -1, -1, -1, 15, 8, -1, -1, 10, -1, 9, -1, -1, -1, -1, -1, -1, 14},
  {-1, 0, -1, -1, -1, 15, -1, 2, 5, 8, 11, 3, 7, 6, -1, -1, 13, -1, 14, -1, -1, 4, 10, -1, -1, -1, -1, -1, 1, -1, -1, 12},
  {-1, -1, -1, 5, -1, 1, 0, -1, 12, 6, 3, 14, 2, 7, -1, -1, -1, -1, 10, 4, -1, 8, -1, -1, -1, -1, -1, 9, -1, 15, -1, -1},
  {0, -1, 2, 9, 1, 6, -1, 13, 3, -1, 12, 4, 5, 15, -1, -1, -1, -1, -1, -1, -1, -1, 11, -1, 8, -1, -1, -1, -1, -1, -1, -1},
  {-1, 12, -1, 0, 15, 10, 6, -1, -1, 1, 5, -1, 11, 7, -1, -1, -1, 9, 3, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {0, 8, 4, 1, 3, 12, -1, 10, 2, -1, 13, 5, 7, -1, -1, -1, 15, -1, -1, -1, -1, -1, 6, -1, -1, -1, 14, -1, -1, -1, -1, -1},
  {2, 8, 1, -1, 3, 5, 0, 6, 4, -1, -1, 9, 13, 10, -1, -1, -1, 7, -1, -1, -1, -1, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {-1, -1, 6, -1, -1, -1, -1, 3, 8, -1, 5, 7, 10, -1, -1, -1, -1, 0, -1, 12, 4, -1, -1, -1, -1, 14, -1, -1, -1, 11, 15, -1},
  {7, -1, 8, -1, 4, 2, 1, -1, -1, 0, 3, -1, 6, 12, -1, -1, -1, -1, 5, -1, -1, 10, -1, -1, -1, -1, -1, 15, -1, -1, -1, 11},
  {4, 7, 8, -1, 9, 0, -1, -1, 6, 10, 5, 12, 1, 2, -1, -1, 15, 11, -1, -1, -1, -1, 13, -1, -1, -1, -1, -1, -1, -1, -1, 14},
  {1, -1, 5, 13, 0, 2, 7, 15, -1, -1, 12, 6, -1, -1, -1, 10, -1, -1, -1, 14, -1, -1, 8, -1, -1, -1, -1, -1, -1, 9, 11, -1},
  {15, 11, 14, -1, -1, -1, -1, -1, -1, -1, 12, 2, -1, 13, 0, 1, -1, -1, -1, 6, -1, -1, 10, 4, -1, 8, -1, -1, -1, 7, 5, -1},
  {0, 8, -1, -1, -1, 1, 14, 5, 4, -1, -1, 12, 2, -1, -1, -1, -1, 3, -1, -1, 15, 13, 7, -1, 6, -1, -1, -1, -1, -1, -1, -1},
  {0, 10, 7, 3, 1, -1, 9, 5, 2, -1, -1, 4, -1, 8, -1, 11, -1, -1, -1, 12, -1, -1, 6, -1, -1, 14, -1, 15, -1, -1, 13, -1},
  {10, -1, 9, -1, -1, -1, -1, -1, -1, -1, 8, -1, -1, 2, 6, 12, -1, -1, 1, 4, -1, -1, 5, -1, -1, 7, -1, 3, -1, -1, 11, 14},
  {13, 2, -1, -1, -1, -1, -1, -1, -1, 14, -1, 1, -1, -1, 11, 3, -1, -1, -1, 4, -1, -1, 7, 0, -1, 5, -1, -1, -1, 10, 9, -1},
  {15, 14, 13, -1, 5, -1, -1, -1, -1, -1, -1, 4, -1, -1, 1, 3, -1, 9, -1, 12, -1, -1, -1, -1, -1, 2, 0, -1, -1, 7, 6, -1},
  {3, -1, -1, 6, -1, 4, 1, -1, 15, 2, 14, -1, 9, 12, 5, 0, -1, -1, 8, -1, -1, 11, -1, -1, -1, -1, -1, 10, -1, -1, 7, 13},
  {2, 8, 3, -1, 0, -1, -1, -1, 5, -1, -1, 4, 15, -1, -1, 6, -1, 7, 9, 11, -1, 1, 12, -1, -1, 14, -1, 10, -1, -1, -1, -1},
  {-1, 2, 8, -1, -1, -1, -1, -1, -1, 3, 9, 4, -1, 0, -1, 5, -1, -1, -1, 6, -1, 1, 12, 7, -1, 10, -1, -1, -1, -1, 11, 13},
  {7, 8, 4, 1, 3, -1, -1, 0, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 6, -1, -1, -1, -1, -1},
  {2, 3, 4, 6, 5, 0, 1, 14, 11, -1, 12, 10, 8, -1, -1, -1, -1, 9, -1, -1, -1, 7, 15, -1, 13, -1, -1, -1, -1, -1, -1, -1},
  {-1, -1, -1, 12, -1, -1, 6, 10, 15, 5, -1, 7, -1, -1, -1, -1, 4, -1, -1, -1, -1, -1, 0, -1, -1, -1, 9, 13, -1, -1, -1, -1},
  {5, 1, 3, -1, -1, -1, -1, 0, -1, -1, 9, 12, -1, -1, 10, -1, -1, -1, -1, 11, -1, -1, 2, 6, -1, 15, -1, 13, -1, -1, 14, 4},
  {-1, -1, -1, 6, 2, 5, -1, -1, 3, -1, 1, -1, 4, 12, -1, -1, -1, -1, -1, -1, 10, 15, -1, -1, 0, -1, 8, -1, -1, -1, -1, -1},
  {-1, 1, 5, -1, -1, -1, -1, -1, -1, 12, 0, 10, -1, 3, -1, 6, -1, -1, -1, -1, -1, -1, 4, 8, -1, 7, -1, 13, -1, 15, 14, 2},
  {3, 0, -1, -1, -1, 1, -1, -1, 13, -1, 15, 10, -1, -1, -1, 5, -1, 7, -1, 9, -1, -1, -1, 2, -1, 11, -1, -1, -1, 6, 14, -1},
  {4, -1, 2, 6, -1, -1, 0, 1, -1, -1, 15, 5, 11, -1, 10, -1, -1, -1, -1, 12, -1, -1, 7, 8, -1, -1, -1, 9, -1, 14, -1, -1},
  {5, 10, -1, -1, 4, -1, -1, -1, 7, -1, -1, 6, -1, -1, -1, 8, 0, -1, -1, 13, 1, -1, 12, -1, -1, -1, 15, -1, 2, -1, -1, -1},
  {9, 3, 0, -1, -1, -1, -1, -1, -1, -1, 10, 14, -1, 4, 8, -1, -1, -1, -1, 15, -1, -1, 6, -1, -1, 2, -1, 12, -1, -1, 1, 11},
  {-1, 8, 0, -1, -1, -1, -1, -1, -1, -1, 3, 5, 4, 1, 13, 9, -1, -1, -1, 7, -1, -1, 6, -1, -1, 10, -1, 2, -1, 11, 14, 12},
  {3, -1, 2, 5, 0, -1, -1, -1, 1, -1, 13, 7, -1, 11, -1, 10, -1, -1, -1, 15, -1, -1, 6, -1, -1, 14, -1, 9, -1, -1, 12, 4}
};

static const int8_t chrs_by_chr_and_successor_id[MAX_CHR - MIN_CHR][16] = {
  {'u', 'L', 'G', '$', 'T', 'c', 'a', '1', 'i', 'C', 's', '6', '3', 'B', '4', '5'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'.', 'c', 'o', 'i', 's', 't', 'r', 'v', 'S', 'I', 'T', 'D', 'd', 'R', 'C', 'p'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'$', '_', 'E', 'a', 'f', 'e', '0', '9', '8', 'c', '7', '3', '1', 'b', '5', '4'},
  {'7', '2', '1', '8', '0', '5', '3', '6', '4', '9', 'E', '_', 'c', 'd', 'a', 'e'},
  {'0', '1', '_', '2', '3', '4', '8', 'E', '9', '5', '6', '7', 'J', 'e', 'n', 'j'},
  {'d', 'p', '_', 'n', '1', '2', '3', '0', 'a', 'c', '4', '5', 'E', 'f', '9', '8'},
  {'c', '_', 'f', 'd', 'E', 'a', '2', '4', '0', '9', '1', '8', 'n', 'b', '5', '6'},
  {'a', 'd', 'b', 'c', 's', '1', 'E', '3', '_', '2', '4', '6', 'f', '7', '5', '8'},
  {'a', '5', '4', '_', 'd', 'H', 'E', '8', '7', 'e', 'c', 'f', 'b', '9', '1', '3'},
  {'h', 'm', 'd', 'b', '3', 'E', '7', '4', 'c', 'a', 'e', '5', '2', '9', 'f', '8'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'E', 'v', 'P', 'R', 'N', 'n', 'l', '1', 'L', 'S', '$', 'x', 'r', 'b', 'D', 'i'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'S', '7', '4', '2', '1', 'o', '5', '6', 'K', 'u', '9', '8', '3', 'a', '_', 'e'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'_', 't', '0', 'e', 'C', '2', '6', 'u', 'O', '3', '1', '4', 'h', 'i', '5', 'c'},
  {'$', 'r', 'h', 'o', 'a', 'y', 'S', 'e', '_', 'V', 'M', 'A', 'i', 'C', 'I', 'H'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'N', 'T', 'Z', 'L', 'o', 'e', '1', 'i', '2', 'C', '_', 'G', 'E', '3', 'I', 'S'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'_', 'Z', '$', '1', 'p', 'i', 'd', 's', 'n', 'B', 'E', 'c', 'f', 'N', 'm', 't'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'l', 't', 's', 'c', '3', 'r', 'n', 'd', 'p', 'b', 'm', 'y', 'i', 'g', '1', '6'},
  {'l', '$', 'a', 'j', 'e', '1', 'r', 'E', '0', 'b', '7', 's', '3', '9', '6', 'c'},
  {'o', 'e', 't', 'h', 'k', 'a', '1', 'l', 'E', '6', '2', '5', 'c', 'r', '3', '$'},
  {'e', 'o', 'i', 'r', '1', '$', 'E', 'a', 'd', 'l', '_', '2', '3', '5', '4', 'b'},
  {'r', 'c', 'n', 's', 't', 'd', '1', 'a', '3', '.', 'E', 'x', 'l', 'I', 'f', 'm'},
  {'o', 'i', 'a', 'e', 'f', 'r', 'E', '1', '8', 'b', '2', 'd', '5', 'c', '4', '3'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'n', 'l', 't', 'c', 'o', 'm', 's', 'e', 'a', 'z', 'p', 'f', 'd', 'v', 'q', 'b'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'l', 'a', 'e', 'o', 'i', 't', '$', 'u', '_', '1', 'd', 'E', '/', 's', 'A', 'y'},
  {'o', 'p', 'e', 'a', '1', 'i', '2', 'u', '_', 'm', 'b', '3', 'E', 'I', '4', 's'},
  {'t', 's', 'd', 'g', 'e', 'c', 'i', '_', 'a', 'o', 'n', 'u', '1', 'E', 'f', 'N'},
  {'r', 'n', 'z', 'm', 'p', 'c', 'l', 'd', 'w', 'u', 't', 's', '_', 'x', 'j', 'o'},
  {'t', 'l', 'e', '_', 'a', 'o', 'r', 'p', 's', 'u', '1', 'i', 'c', '.', '$', 'E'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'e', 'o', 'a', 'i', '1', 's', 't', 'y', '.', 'r', 'I', 'E', 'c', '$', '8', 'd'},
  {'e', 't', 's', 'u', 'i', '$', '.', 'E', '_', 'h', '/', 'I', '1', 'p', 'l', 'T'},
  {'e', 'r', 'i', 'o', 'a', '1', 'E', 's', '_', 'y', '$', 'h', 't', 'c', 'S', 'N'},
  {'2', 'l', 'n', 'e', 't', '7', 'r', '5', 'm', 's', 'b', 'p', 'd', 'f', 'c', 'i'}
};

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4324)    // structure was padded due to __declspec(align())
#endif

typedef struct Pack {
  const uint32_t word;
  const unsigned int bytes_packed;
  const unsigned int bytes_unpacked;
  const unsigned int offsets[8];
  const int16_t _ALIGNED masks[8];
  const char header_mask;
  const char header;
} Pack;

#ifdef _MSC_VER
#pragma warning(pop)
#endif

#define PACK_COUNT 3
#define MAX_SUCCESSOR_N 7

static const Pack packs[PACK_COUNT] = {
  { 0x80000000, 1, 2, { 26, 24, 24, 24, 24, 24, 24, 24 }, { 15, 3, 0, 0, 0, 0, 0, 0 }, 0xc0, 0x80 },
  { 0xc0000000, 2, 4, { 25, 22, 19, 16, 16, 16, 16, 16 }, { 15, 7, 7, 7, 0, 0, 0, 0 }, 0xe0, 0xc0 },
  { 0xe0000000, 4, 8, { 23, 19, 15, 11, 8, 5, 2, 0 }, { 31, 15, 15, 15, 7, 7, 7, 3 }, 0xf0, 0xe0 }
};

