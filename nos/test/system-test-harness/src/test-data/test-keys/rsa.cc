#include "src/test-data/test-keys/rsa.h"

namespace test_data {

const uint8_t RSA_3_512_D[512 >> 3] = {
  0xdb, 0xa6, 0x55, 0x0e, 0x23, 0xf1, 0xcf, 0x32,
  0xc7, 0x10, 0x53, 0xf2, 0x9f, 0xb6, 0xfd, 0xaa,
  0x26, 0xd2, 0xc9, 0x7c, 0x0a, 0x89, 0xbf, 0x84,
  0x15, 0x39, 0xbd, 0xa9, 0x98, 0xc6, 0x96, 0xb9,
  0xd7, 0x02, 0x6e, 0xf9, 0xd4, 0x97, 0xab, 0x6b,
  0x1a, 0x30, 0xaa, 0x77, 0xc0, 0xb1, 0x72, 0x5d,
  0x45, 0xbb, 0xf4, 0x2b, 0x2c, 0x07, 0x93, 0x87,
  0x3f, 0xce, 0xc1, 0x8f, 0xb7, 0xd8, 0x24, 0x8b,
};

const uint8_t RSA_3_512_N[512 >> 3] = {
  0xff, 0x83, 0xfd, 0x26, 0x22, 0x86, 0xaf, 0xf0,
  0x1e, 0xfa, 0xb1, 0xf0, 0x89, 0x81, 0x06, 0x8d,
  0x51, 0x14, 0x46, 0xfe, 0x60, 0xe5, 0xae, 0xb0,
  0xfb, 0x28, 0x10, 0xbf, 0x52, 0x86, 0x41, 0x65,
  0x45, 0x04, 0x25, 0x76, 0xbf, 0x63, 0x81, 0xa1,
  0x27, 0x48, 0x7f, 0xb3, 0xa0, 0x0a, 0x2c, 0x0c,
  0xe8, 0x18, 0xef, 0x41, 0xc2, 0x8a, 0x5c, 0x4b,
  0x5f, 0xb5, 0xa2, 0x57, 0x13, 0x45, 0xb7, 0xd0,
};

const uint8_t RSA_512_D[512 >> 3] = {
  0x41, 0xea, 0xc3, 0x56, 0x88, 0x8f, 0x4f, 0x27,
  0x5c, 0x04, 0x93, 0x74, 0x59, 0xda, 0x96, 0xd8,
  0xad, 0xa1, 0xaa, 0x97, 0x1b, 0xa5, 0xb2, 0xb1,
  0x8a, 0x54, 0x80, 0xd5, 0x76, 0x5d, 0x1d, 0x77,
  0xb3, 0x0e, 0x28, 0x03, 0xed, 0x65, 0xea, 0xa5,
  0xaf, 0x06, 0xf3, 0x39, 0x98, 0x54, 0xda, 0x1f,
  0x62, 0x10, 0x95, 0xab, 0x20, 0x2c, 0xb2, 0x90,
  0xf2, 0x9f, 0x87, 0x65, 0x81, 0xaa, 0xa0, 0x4b
};

const uint8_t RSA_512_N[512 >> 3] = {
  0x3b, 0x82, 0x53, 0xa8, 0xc7, 0x7b, 0xd7, 0x40,
  0xc7, 0xfe, 0x68, 0x50, 0xdb, 0xe0, 0xe3, 0x70,
  0x80, 0x35, 0xcd, 0xf0, 0x70, 0x82, 0x80, 0xf5,
  0xfe, 0x76, 0x96, 0x24, 0x08, 0xfa, 0x4b, 0x05,
  0xd7, 0x18, 0x92, 0xbb, 0x00, 0x0d, 0x23, 0x8f,
  0x7f, 0x62, 0xc4, 0xf2, 0xb7, 0x64, 0x38, 0xcf,
  0x94, 0x21, 0xf0, 0xa0, 0x1b, 0xca, 0x1b, 0xb7,
  0x75, 0xb9, 0x70, 0xb8, 0x84, 0x7d, 0xe6, 0xa2
};

const uint8_t RSA_768_D[768 >> 3] = {
  0x01, 0x17, 0x7f, 0xe4, 0x55, 0x45, 0x97, 0x79,
  0xc0, 0x9f, 0x5f, 0x93, 0x7a, 0x10, 0xed, 0x99,
  0x38, 0xd2, 0xe9, 0x15, 0xc2, 0xa2, 0xa1, 0xc1,
  0x64, 0x35, 0x18, 0xc7, 0xf0, 0xa2, 0x66, 0x24,
  0x88, 0xd4, 0x59, 0x7d, 0xc3, 0xe6, 0xc2, 0x22,
  0xbb, 0xde, 0x4f, 0xee, 0xcc, 0xd8, 0x9f, 0x9e,
  0x7a, 0xd7, 0xc5, 0x43, 0xe6, 0x5b, 0x83, 0xad,
  0x12, 0x58, 0xd7, 0x00, 0xbd, 0x68, 0x66, 0x17,
  0x59, 0x36, 0x15, 0x60, 0x77, 0x9b, 0xda, 0xed,
  0xeb, 0x44, 0xba, 0x8b, 0x91, 0x7d, 0xc9, 0x15,
  0x3d, 0xb2, 0x4a, 0x5e, 0x0a, 0xaa, 0xea, 0xcc,
  0x41, 0xd0, 0xce, 0x93, 0xc3, 0xe6, 0x1e, 0x1b,
};

const uint8_t RSA_768_N[768 >> 3] = {
  0xcf, 0x01, 0x87, 0xb1, 0x81, 0xf6, 0xc8, 0x42,
  0xd7, 0xca, 0xa3, 0xc9, 0x15, 0xf1, 0x71, 0x54,
  0x80, 0xfd, 0x8b, 0xd0, 0x61, 0x87, 0x3a, 0x80,
  0x35, 0x12, 0x3a, 0x00, 0xd2, 0x3a, 0x20, 0x76,
  0xe1, 0x3b, 0x4c, 0x62, 0x32, 0xd9, 0x8f, 0x50,
  0x94, 0xe9, 0x1b, 0x62, 0x95, 0x4c, 0x68, 0x8c,
  0xad, 0xb7, 0xaa, 0xeb, 0xda, 0x25, 0xc5, 0x8d,
  0x5b, 0xb1, 0xb0, 0xb2, 0xae, 0x79, 0x4c, 0xee,
  0x06, 0x72, 0x57, 0xac, 0x08, 0x7d, 0x38, 0xdd,
  0x99, 0xe0, 0x71, 0x51, 0x72, 0xbb, 0x3d, 0x3e,
  0x16, 0x20, 0xa3, 0x40, 0x63, 0xa9, 0x5e, 0xa0,
  0xf1, 0x1e, 0xe0, 0x25, 0xaf, 0x39, 0xd8, 0xb7,
};

const uint8_t RSA_1024_D[128] = {
  0x09, 0x0e, 0xc3, 0xcc, 0x1b, 0xff, 0xe5, 0xe1,
  0x49, 0xff, 0x11, 0x66, 0xdb, 0xb0, 0x35, 0xee,
  0xfa, 0x25, 0x31, 0x3f, 0x37, 0xfd, 0xf2, 0x0d,
  0xaf, 0x67, 0xf4, 0x08, 0x24, 0xed, 0x4b, 0xea,
  0x8f, 0x1d, 0x81, 0x4a, 0x6c, 0xa6, 0xe6, 0xdc,
  0x01, 0xff, 0x56, 0xbf, 0xb2, 0xb3, 0x80, 0xe5,
  0x2b, 0xe5, 0x32, 0xdd, 0x5a, 0xb9, 0x97, 0xd7,
  0x84, 0x4e, 0x4e, 0xa0, 0xaf, 0xa0, 0x7b, 0xe5,
  0x6e, 0xc6, 0x8c, 0xf8, 0xc9, 0xb1, 0xb8, 0x95,
  0x7d, 0xf8, 0xd4, 0x7e, 0x8c, 0x57, 0xba, 0xe0,
  0x6f, 0x56, 0x95, 0x9a, 0x86, 0x80, 0x44, 0x6a,
  0x13, 0x12, 0x63, 0x10, 0x7a, 0x9e, 0xea, 0x3b,
  0x06, 0x98, 0x76, 0x67, 0xf5, 0x6f, 0x95, 0x9c,
  0x92, 0xb7, 0x26, 0x48, 0x2e, 0x79, 0xb5, 0xbd,
  0x7c, 0xfb, 0xe3, 0xc8, 0x7b, 0x83, 0x2f, 0x9a,
  0x61, 0x6d, 0xa8, 0x07, 0xf4, 0x85, 0x6d, 0x9a,
};

const uint8_t RSA_1024_N[128] = {
  0x91, 0x24, 0xa8, 0x3c, 0x42, 0xa9, 0x23, 0x88,
  0x7a, 0xf6, 0x34, 0x9b, 0x73, 0x10, 0xff, 0xd5,
  0x2f, 0xf6, 0xa0, 0xc5, 0x91, 0xb6, 0x75, 0xf6,
  0x1f, 0x82, 0xb4, 0x91, 0x24, 0x6b, 0xfa, 0xe7,
  0x44, 0x2b, 0x0a, 0x4f, 0xcf, 0x94, 0x6a, 0xb4,
  0x11, 0x1f, 0x3b, 0xd5, 0xd2, 0x0f, 0xbd, 0xa0,
  0x8b, 0x7d, 0xd4, 0x1c, 0x0f, 0x2e, 0xd0, 0xe9,
  0x99, 0xa9, 0xb6, 0x57, 0xfb, 0x59, 0x7f, 0xca,
  0x63, 0x32, 0x6a, 0x3b, 0x20, 0x70, 0xcc, 0x97,
  0x86, 0xd9, 0x4a, 0x92, 0x9f, 0xa6, 0x4e, 0x62,
  0x6b, 0xb2, 0xdd, 0x10, 0xa5, 0xb2, 0x20, 0x3b,
  0xf2, 0x4c, 0x20, 0xae, 0x25, 0x10, 0x39, 0x8a,
  0x89, 0xdf, 0x97, 0x4c, 0x72, 0x2e, 0x3e, 0x4e,
  0xce, 0x44, 0x6a, 0x0d, 0x1b, 0x4e, 0xb0, 0x21,
  0x17, 0xf9, 0x83, 0x40, 0xad, 0x26, 0x7e, 0x30,
  0x34, 0x98, 0x94, 0x45, 0x73, 0xaf, 0x4e, 0xdf,
};

const uint8_t RSA_2048_D[2048 >> 3] = {
  0x51, 0x7a, 0x49, 0xdf, 0x72, 0x77, 0x48, 0x6a,
  0xb0, 0x07, 0x3c, 0x7d, 0x4e, 0x29, 0x64, 0xe5,
  0x62, 0xb0, 0x56, 0xc0, 0x6c, 0x52, 0xca, 0x7a,
  0xe4, 0x56, 0x07, 0x18, 0x9a, 0x3e, 0x2d, 0xb3,
  0xd4, 0xeb, 0x0a, 0x19, 0x4c, 0x5e, 0x3b, 0x8e,
  0x7e, 0xdf, 0xfb, 0x5c, 0x10, 0x97, 0x11, 0xd2,
  0x69, 0x97, 0x4d, 0x85, 0x6c, 0xca, 0x47, 0x5e,
  0x0b, 0x85, 0xec, 0x93, 0xea, 0xc0, 0x7d, 0x06,
  0x38, 0x13, 0x37, 0x35, 0xc9, 0x2b, 0xae, 0x8f,
  0x79, 0x8a, 0xce, 0xb3, 0xcb, 0x25, 0xda, 0xff,
  0x45, 0x24, 0xf3, 0xf0, 0xd4, 0x57, 0x1a, 0xfd,
  0x9b, 0x64, 0x4e, 0x0d, 0x31, 0x58, 0x15, 0x3f,
  0x0d, 0x1d, 0x43, 0x4f, 0x07, 0x7b, 0xbb, 0xde,
  0x00, 0x14, 0xb2, 0x2d, 0xee, 0x90, 0xbe, 0xe1,
  0x7d, 0x65, 0xd2, 0xdf, 0x4f, 0xf0, 0x34, 0xe8,
  0x38, 0x89, 0xa7, 0x6b, 0xd8, 0x3b, 0x8d, 0x08,
  0x33, 0x16, 0x51, 0x25, 0xe3, 0x4c, 0xda, 0x5e,
  0x1f, 0xae, 0xcb, 0x1f, 0xd3, 0x2d, 0xf3, 0xbd,
  0x00, 0xaf, 0x68, 0xa8, 0x47, 0x53, 0x78, 0xea,
  0x02, 0x1f, 0x84, 0x94, 0x1c, 0xfe, 0x9c, 0xd5,
  0x24, 0xef, 0x5f, 0x1f, 0x58, 0xd3, 0xa9, 0x46,
  0x44, 0xba, 0xf4, 0x79, 0x0a, 0xbe, 0x0d, 0x06,
  0x2e, 0xb6, 0x6c, 0xec, 0x08, 0x83, 0x02, 0x1e,
  0xbb, 0x8d, 0xe6, 0x6b, 0xe4, 0xcf, 0xd9, 0xa0,
  0xa0, 0x0c, 0x04, 0x56, 0x54, 0x67, 0x00, 0x4a,
  0x1c, 0x2f, 0xd4, 0x2f, 0xf8, 0x97, 0x84, 0x7a,
  0x3d, 0x80, 0x15, 0xc6, 0x8b, 0x9c, 0xc7, 0x01,
  0x27, 0xc2, 0xa9, 0xc9, 0x4a, 0x24, 0xb5, 0x43,
  0x01, 0x03, 0xb4, 0xcf, 0x69, 0xf3, 0x53, 0x30,
  0x6a, 0x20, 0xd6, 0x56, 0x7d, 0x62, 0xd6, 0x07,
  0x00, 0x46, 0xd5, 0xa1, 0xb4, 0xa8, 0x4d, 0xcd,
  0xd4, 0x25, 0xa0, 0xf4, 0x47, 0x72, 0x4a, 0x31,
};

const uint8_t RSA_2048_N[2048 >> 3] = {
  0x03, 0xf4, 0x2f, 0x80, 0x35, 0xd2, 0x4a, 0x61,
  0x1d, 0xab, 0x88, 0x6d, 0x54, 0x47, 0xeb, 0x4d,
  0x9c, 0xd9, 0x06, 0x7e, 0x36, 0x95, 0x9b, 0x41,
  0x2b, 0x60, 0xcd, 0x5d, 0x28, 0x32, 0x40, 0x51,
  0x30, 0x07, 0xea, 0x42, 0xe0, 0x77, 0xf9, 0xd0,
  0x53, 0x2b, 0x79, 0xe2, 0x86, 0x34, 0xfe, 0x55,
  0xb5, 0xf9, 0xca, 0xcf, 0x65, 0xa5, 0x4d, 0xc2,
  0xce, 0xb1, 0x9f, 0xb2, 0xf2, 0xa5, 0x12, 0xe2,
  0xde, 0xe2, 0xd5, 0xc8, 0xae, 0x15, 0x8c, 0xe7,
  0x4f, 0xcc, 0x09, 0x3c, 0x61, 0x4a, 0xe2, 0x07,
  0x0b, 0x0d, 0x9b, 0xdc, 0x0c, 0xf1, 0xb4, 0x93,
  0xff, 0x03, 0x39, 0x82, 0x0d, 0x3f, 0xc4, 0x25,
  0x73, 0xc8, 0x48, 0x20, 0x02, 0x27, 0x48, 0xba,
  0x4e, 0xba, 0xe6, 0xbf, 0x44, 0xbb, 0x70, 0xc7,
  0x23, 0x31, 0x26, 0xcd, 0xaf, 0x4c, 0xf2, 0x36,
  0xcb, 0xf5, 0x3d, 0x17, 0xb6, 0x48, 0x86, 0x07,
  0xb9, 0x5e, 0xe4, 0xbe, 0x0f, 0xec, 0xaa, 0x7c,
  0xc4, 0x4f, 0xe4, 0x83, 0x10, 0xb6, 0xe6, 0x2e,
  0x1b, 0xbf, 0x3b, 0x15, 0x96, 0xb2, 0xfe, 0x88,
  0xef, 0x7f, 0x42, 0x57, 0x30, 0x88, 0x37, 0xd5,
  0xc8, 0x19, 0x58, 0x03, 0xfb, 0xfc, 0x41, 0x24,
  0xc6, 0xd8, 0x1a, 0x71, 0x2d, 0x1c, 0xd8, 0x20,
  0xb6, 0x1d, 0x26, 0xd5, 0xac, 0x25, 0x73, 0xfb,
  0xa4, 0x15, 0xea, 0xdf, 0x9d, 0x82, 0xa9, 0x8e,
  0xce, 0x95, 0xc5, 0x76, 0xcf, 0xe9, 0xc9, 0x34,
  0x8c, 0x13, 0x82, 0xf8, 0xa2, 0x89, 0xf2, 0xd7,
  0x5c, 0xdf, 0x38, 0x45, 0x44, 0x66, 0x35, 0x7e,
  0x89, 0x4a, 0x10, 0xb0, 0x16, 0x04, 0xde, 0xc4,
  0x36, 0x34, 0x4e, 0x80, 0x82, 0x43, 0x11, 0xa2,
  0xc2, 0x84, 0x7a, 0x73, 0xfc, 0x95, 0x53, 0xfa,
  0x45, 0xd5, 0xc0, 0x11, 0x3e, 0xc3, 0xde, 0xd4,
  0x9d, 0x95, 0x77, 0x07, 0x12, 0x78, 0xca, 0xcc,
};

const uint8_t RSA_3072_D[3072 >> 3] = {
  0x69, 0xc5, 0xb8, 0x34, 0x7f, 0xbb, 0x99, 0x01,
  0xaf, 0x3f, 0xf5, 0xfd, 0xa6, 0x95, 0x74, 0xfc,
  0x9c, 0x83, 0x91, 0x17, 0x43, 0x29, 0x4d, 0xed,
  0xd5, 0x44, 0xbd, 0x4b, 0x36, 0x77, 0x07, 0xb8,
  0x83, 0x4d, 0xb2, 0xc4, 0x94, 0x7c, 0xe7, 0x23,
  0xdd, 0x7a, 0x48, 0xb4, 0xdd, 0x10, 0xcb, 0x4f,
  0xbc, 0xcc, 0x83, 0x05, 0xbc, 0x66, 0xa6, 0x1e,
  0x6b, 0x81, 0x42, 0x59, 0x4e, 0xa9, 0x98, 0x78,
  0x81, 0xe9, 0x35, 0xf2, 0x3b, 0xed, 0x52, 0xf8,
  0x55, 0xdb, 0xde, 0x25, 0xd6, 0xfe, 0xb4, 0x58,
  0x9f, 0x2c, 0x13, 0xdd, 0x5e, 0x09, 0x2d, 0x7e,
  0xe6, 0xf4, 0x35, 0xbe, 0xa3, 0xdf, 0x20, 0x71,
  0xae, 0xba, 0x76, 0xf3, 0x87, 0x95, 0x18, 0x31,
  0x2a, 0x6f, 0xf7, 0x82, 0x85, 0x53, 0x41, 0x3b,
  0x0d, 0x13, 0x58, 0x9f, 0x3d, 0x4a, 0x22, 0xd8,
  0x5b, 0x8d, 0xd3, 0x24, 0xdc, 0x8b, 0x46, 0x3b,
  0xf0, 0xbb, 0xbc, 0x7a, 0x5a, 0xf1, 0xc3, 0x3c,
  0xe1, 0xa6, 0x91, 0xb7, 0xa9, 0xd9, 0x96, 0xaf,
  0x5d, 0x03, 0x2e, 0xd6, 0xa0, 0x18, 0xb6, 0x21,
  0xc9, 0x13, 0x72, 0x65, 0xa4, 0x4c, 0xcf, 0x3b,
  0x4f, 0x4e, 0x5d, 0xf2, 0x91, 0xc1, 0xc3, 0x40,
  0xaa, 0x0e, 0xe4, 0x6a, 0xbb, 0x5a, 0xf6, 0x0a,
  0xc8, 0x1b, 0x37, 0xe0, 0xe1, 0x20, 0xdc, 0x28,
  0xeb, 0x27, 0x8c, 0x6e, 0xe1, 0x70, 0x52, 0x00,
  0x8a, 0xbc, 0x5e, 0xeb, 0x90, 0xb8, 0xeb, 0x91,
  0xc9, 0x3e, 0x43, 0x09, 0x0f, 0x49, 0xd3, 0x69,
  0x22, 0x3a, 0xe4, 0x6c, 0xcb, 0xde, 0x78, 0x8f,
  0xb1, 0xf6, 0x81, 0x97, 0xfe, 0x58, 0xf3, 0xca,
  0xa4, 0x4a, 0x81, 0x43, 0xc8, 0x53, 0x57, 0xa2,
  0xfe, 0xf1, 0x17, 0xdd, 0xbd, 0xae, 0x18, 0xc2,
  0x07, 0x69, 0x81, 0xf3, 0x03, 0xcc, 0xfa, 0x0b,
  0xa4, 0x83, 0xd4, 0xd5, 0x23, 0x18, 0x07, 0x96,
  0xdc, 0xdc, 0x0b, 0x04, 0x4f, 0x27, 0x83, 0x5c,
  0x22, 0x80, 0x93, 0x2b, 0xcc, 0x47, 0xe6, 0xdf,
  0xc2, 0x79, 0xc8, 0xc1, 0xf1, 0x5b, 0x5f, 0xbe,
  0xef, 0xa1, 0xaf, 0x1f, 0x20, 0x6b, 0x9c, 0xcb,
  0x00, 0xde, 0x79, 0x2b, 0xdb, 0x3a, 0xba, 0x30,
  0x70, 0x7b, 0x67, 0x94, 0x7b, 0xba, 0x01, 0x27,
  0x8b, 0xa1, 0x88, 0xd6, 0xbd, 0x8d, 0x0a, 0x79,
  0x9f, 0x88, 0x3d, 0x9d, 0x66, 0xca, 0x84, 0xff,
  0xb6, 0xf8, 0x34, 0x55, 0x48, 0x87, 0xfc, 0x01,
  0x4e, 0x10, 0x40, 0x01, 0x92, 0xe7, 0x9c, 0x31,
  0x2c, 0x85, 0x34, 0xdf, 0x28, 0x72, 0xfc, 0xc6,
  0x61, 0x57, 0xb7, 0x35, 0x15, 0x57, 0x60, 0xe8,
  0x7a, 0x81, 0x79, 0xc8, 0xd1, 0x42, 0x7a, 0xeb,
  0xb8, 0x02, 0xe7, 0x0e, 0x56, 0x9d, 0xeb, 0x3c,
  0xfd, 0x04, 0x42, 0x3e, 0x39, 0xcb, 0x6a, 0x27,
  0x31, 0xe4, 0xad, 0xf7, 0xb0, 0xe7, 0xf4, 0x8e,
};

const uint8_t RSA_3072_N[3072 >> 3] = {
  0x1d, 0xa3, 0xc5, 0x19, 0x7d, 0x11, 0xe1, 0x9c,
  0xc4, 0xd3, 0x27, 0xa4, 0xf1, 0x68, 0xb6, 0x20,
  0x13, 0xf6, 0x23, 0x22, 0x0b, 0xdc, 0x65, 0x54,
  0x0b, 0xb6, 0xed, 0x5c, 0x01, 0xfb, 0x79, 0x80,
  0xa9, 0xcf, 0xd9, 0x20, 0x79, 0x8c, 0x09, 0xe1,
  0x46, 0x33, 0x6d, 0x09, 0x23, 0x04, 0xf2, 0xae,
  0xde, 0x3f, 0x09, 0x47, 0xab, 0x18, 0x97, 0xba,
  0xe4, 0xab, 0x67, 0x4c, 0x01, 0xdc, 0x0b, 0xa9,
  0xb8, 0xf5, 0x85, 0x02, 0x93, 0xab, 0xbf, 0xd8,
  0x6e, 0x84, 0x25, 0xfd, 0x60, 0xc9, 0x39, 0xb4,
  0x17, 0xfe, 0x60, 0x87, 0x78, 0x45, 0x19, 0xd8,
  0x56, 0x10, 0x6c, 0x8a, 0xac, 0xb6, 0x9d, 0x7a,
  0xe5, 0x1a, 0xae, 0xb3, 0x54, 0x1d, 0x1a, 0x45,
  0x8a, 0xe7, 0xaa, 0x66, 0x99, 0xa5, 0xe9, 0x05,
  0x68, 0x10, 0x43, 0x63, 0x24, 0x38, 0x58, 0x10,
  0x1f, 0x41, 0x91, 0xa0, 0x99, 0x28, 0xd8, 0x0d,
  0x5a, 0x07, 0x04, 0x22, 0x6e, 0xc3, 0xb4, 0xc3,
  0xf3, 0x96, 0x43, 0x59, 0x9d, 0x78, 0x06, 0x28,
  0xb7, 0xc6, 0x37, 0xc8, 0x9c, 0xae, 0x4e, 0x09,
  0x70, 0x65, 0x01, 0x8e, 0xcd, 0xea, 0xb2, 0x4a,
  0x6f, 0x37, 0xa8, 0x41, 0xd0, 0xb6, 0x6b, 0x20,
  0x5f, 0xb1, 0x3c, 0x2d, 0xaf, 0x22, 0x2f, 0x6a,
  0x87, 0x20, 0x71, 0x81, 0x01, 0xa3, 0xad, 0x05,
  0x14, 0x14, 0xb7, 0x16, 0x2f, 0x82, 0x76, 0x9b,
  0x10, 0x96, 0x40, 0x7e, 0x19, 0x0d, 0x32, 0x83,
  0xa2, 0x1c, 0x93, 0xa3, 0x88, 0xeb, 0xd6, 0xf9,
  0x4e, 0x4d, 0x06, 0x97, 0x1d, 0xb7, 0xd2, 0xf0,
  0x38, 0x0f, 0x38, 0x52, 0x36, 0x7d, 0xed, 0x98,
  0x67, 0xe3, 0x8e, 0x1f, 0xa0, 0xf8, 0xfb, 0x00,
  0x8f, 0xda, 0x95, 0x5f, 0x77, 0xbe, 0xd7, 0xee,
  0x30, 0x19, 0xc4, 0x8c, 0x4e, 0x56, 0x64, 0xbd,
  0xbd, 0xeb, 0xd1, 0x91, 0xce, 0x0e, 0x98, 0x1c,
  0x10, 0x4e, 0x43, 0xbb, 0x05, 0x33, 0x80, 0x79,
  0x27, 0x42, 0x58, 0xa8, 0x1a, 0x33, 0x8b, 0x7c,
  0x0f, 0x6c, 0x92, 0x25, 0x11, 0x2f, 0x9b, 0x1b,
  0xf4, 0x6c, 0x86, 0xa6, 0xcf, 0x5e, 0x4c, 0x64,
  0xcf, 0xb0, 0xb8, 0xad, 0x19, 0xd0, 0xd8, 0xce,
  0x80, 0x46, 0x27, 0x33, 0x87, 0x9f, 0x1d, 0x0f,
  0xba, 0xe5, 0xd2, 0xdf, 0xb9, 0x5f, 0x4e, 0xdf,
  0x86, 0x61, 0xa5, 0x2c, 0xa2, 0xa7, 0xe6, 0x90,
  0xc4, 0x0b, 0x76, 0x4d, 0x70, 0x14, 0x4b, 0xd2,
  0x99, 0x64, 0xc9, 0xf0, 0xed, 0x39, 0xe9, 0x95,
  0x47, 0x2a, 0xb9, 0xf9, 0xe8, 0xcb, 0x5a, 0x33,
  0x4b, 0x92, 0xb3, 0x00, 0xcb, 0x53, 0xd9, 0x15,
  0xbb, 0x7a, 0x9b, 0x75, 0xcc, 0x93, 0xd5, 0x02,
  0x06, 0xde, 0xb7, 0x51, 0x74, 0x7f, 0x59, 0x19,
  0x4a, 0x88, 0xba, 0xe1, 0xd5, 0x6b, 0x72, 0x2a,
  0x96, 0x58, 0x2f, 0xb2, 0x46, 0x70, 0x79, 0xd1,
};

const uint8_t RSA_4096_D[4096 >> 3] = {
  0xe1, 0x62, 0x45, 0x3e, 0x2a, 0xac, 0x53, 0xa5,
  0xbf, 0xe0, 0x95, 0xca, 0xdc, 0xc6, 0x8f, 0xb2,
  0x26, 0xc3, 0xf5, 0x02, 0xae, 0x98, 0x11, 0xcc,
  0x6d, 0xff, 0x9a, 0x42, 0xcb, 0xea, 0x00, 0xf3,
  0x4d, 0xb0, 0xa1, 0xd9, 0x5a, 0x1a, 0xcc, 0xf2,
  0x9f, 0x20, 0xe4, 0x0b, 0x3d, 0x57, 0x6f, 0x91,
  0x8b, 0xaa, 0x81, 0x6c, 0x19, 0xe9, 0x70, 0xd6,
  0xb0, 0xa1, 0x57, 0x45, 0xf5, 0xff, 0x69, 0x41,
  0x17, 0x8b, 0x02, 0x7b, 0xcc, 0x02, 0x65, 0xb7,
  0x75, 0x2a, 0xb9, 0xee, 0x73, 0xde, 0xdd, 0x5f,
  0xa1, 0x6a, 0xda, 0xdc, 0x1a, 0x0d, 0x44, 0x5b,
  0x7c, 0x1a, 0x1b, 0xaa, 0xcd, 0x37, 0x91, 0xc3,
  0xba, 0x2f, 0x3d, 0x41, 0xdc, 0x9c, 0xe5, 0x17,
  0xfb, 0x9e, 0x6b, 0x9e, 0xbd, 0xef, 0x9d, 0xee,
  0xfc, 0xd6, 0xac, 0x85, 0x49, 0xc8, 0xfc, 0x7e,
  0x85, 0xbf, 0x59, 0x37, 0x55, 0xda, 0x51, 0x4c,
  0x00, 0xbb, 0xb2, 0x55, 0x76, 0xa5, 0x55, 0xd3,
  0x98, 0x0f, 0x18, 0x91, 0xda, 0x02, 0xc9, 0x53,
  0x33, 0x48, 0x1e, 0xb3, 0xf7, 0x67, 0x99, 0xb2,
  0xdd, 0xf9, 0xee, 0x65, 0xaf, 0xe5, 0xa8, 0x19,
  0x5a, 0xfa, 0x85, 0x2e, 0xb7, 0x40, 0x67, 0xcf,
  0x8d, 0x2c, 0x33, 0xec, 0x4a, 0x0b, 0x0b, 0x0c,
  0xca, 0x7f, 0xc7, 0x97, 0x57, 0x32, 0x89, 0x2d,
  0x2f, 0x5d, 0xbb, 0x4d, 0x90, 0x44, 0x3e, 0x7e,
  0x3a, 0xf0, 0xc7, 0xf2, 0xa5, 0x44, 0x05, 0xb8,
  0xa8, 0xe1, 0x3a, 0xe5, 0x2d, 0x40, 0xbd, 0x04,
  0xd7, 0xa2, 0x1c, 0xd0, 0xba, 0x33, 0x0a, 0x8f,
  0x25, 0xc1, 0x0d, 0xc2, 0x9f, 0xd7, 0x50, 0x70,
  0x5f, 0x86, 0x07, 0x93, 0x6a, 0x38, 0xec, 0x73,
  0x5f, 0x17, 0x45, 0x62, 0xb5, 0x0a, 0xbd, 0x9c,
  0x98, 0x48, 0x23, 0x37, 0x4f, 0x36, 0x41, 0xc2,
  0x8f, 0xdf, 0x82, 0x96, 0xf4, 0x21, 0x83, 0x32,
  0x95, 0xe0, 0x1a, 0x8a, 0xa9, 0x79, 0x27, 0x70,
  0x44, 0x08, 0x32, 0x45, 0x81, 0x78, 0x95, 0xac,
  0xeb, 0xe0, 0xe2, 0xe2, 0x60, 0x74, 0x11, 0xcb,
  0x6a, 0x22, 0xf1, 0xda, 0xa6, 0x13, 0x6b, 0xd6,
  0x8d, 0x2e, 0xd7, 0xc4, 0xb7, 0xcb, 0x26, 0x17,
  0x35, 0x06, 0x0f, 0x66, 0x77, 0x8f, 0x61, 0x57,
  0x3b, 0x06, 0xd4, 0x59, 0xf4, 0x97, 0x4c, 0x91,
  0xeb, 0x70, 0x5c, 0x35, 0xbb, 0xb0, 0xfb, 0xca,
  0x18, 0x82, 0x9a, 0x55, 0xd1, 0xf1, 0xda, 0xd0,
  0xb1, 0x46, 0xdb, 0xe4, 0xbe, 0x1d, 0xff, 0xa1,
  0xe4, 0xe3, 0x03, 0x7d, 0xc6, 0x8c, 0xeb, 0x3b,
  0xed, 0x9e, 0xb8, 0x61, 0x5c, 0x5c, 0x44, 0x34,
  0x81, 0x90, 0xf8, 0x49, 0x83, 0xa5, 0x29, 0xe9,
  0x42, 0xff, 0x9b, 0x67, 0x7b, 0x5a, 0xdd, 0xf2,
  0xc5, 0xf4, 0xb6, 0x62, 0x5a, 0x80, 0x49, 0xf8,
  0xcb, 0xb9, 0x7d, 0x68, 0x57, 0x95, 0xbf, 0xaa,
  0x76, 0x5f, 0x59, 0x1f, 0xdb, 0xf2, 0x7a, 0xea,
  0x47, 0x10, 0x25, 0xc0, 0xd8, 0xf1, 0x43, 0x1b,
  0x7f, 0x7d, 0x2f, 0x63, 0x0d, 0xde, 0x3d, 0x39,
  0x2c, 0x80, 0xad, 0x93, 0x25, 0x64, 0xca, 0x1f,
  0xe2, 0xe4, 0x1a, 0xc0, 0x71, 0x5a, 0xba, 0x61,
  0xd8, 0xd7, 0xf4, 0x8f, 0x3c, 0x4b, 0x9c, 0xd5,
  0x87, 0xbd, 0x25, 0x76, 0xb1, 0x1e, 0x1f, 0x22,
  0xc6, 0x3e, 0x99, 0xa1, 0xb9, 0x01, 0xcd, 0x14,
  0x0b, 0x3d, 0x23, 0xae, 0x8e, 0x6c, 0xfb, 0x21,
  0x53, 0xfa, 0xfe, 0xbf, 0x53, 0x8a, 0x52, 0xaa,
  0x6e, 0xca, 0x78, 0x5f, 0x68, 0x54, 0xa8, 0xd9,
  0x9b, 0xc7, 0xea, 0xd0, 0x5a, 0x91, 0x71, 0x6f,
  0x48, 0xbf, 0xca, 0xec, 0x29, 0x88, 0xc6, 0xdd,
  0x7c, 0x74, 0x62, 0x09, 0xa4, 0x7d, 0x02, 0x5d,
  0x07, 0x09, 0x34, 0xb3, 0x4f, 0x0b, 0x3d, 0x11,
  0xc8, 0xe5, 0xb1, 0xa1, 0x67, 0x82, 0x31, 0x39,
};

const uint8_t RSA_4096_N[4096 >> 3] = {
  0x07, 0x75, 0xcb, 0x57, 0x6b, 0x78, 0x9c, 0x35,
  0x24, 0xf3, 0xed, 0x16, 0x2a, 0x11, 0x12, 0xc7,
  0x8f, 0x99, 0x3f, 0x26, 0x93, 0x2c, 0xb5, 0xac,
  0xd1, 0xf1, 0xe1, 0x50, 0x8f, 0x94, 0xfe, 0x43,
  0xba, 0x3f, 0xdc, 0x21, 0xc0, 0xf2, 0x43, 0xc8,
  0xe4, 0x5b, 0x3d, 0xeb, 0x1f, 0xcf, 0xf0, 0x6a,
  0xfc, 0x05, 0x9f, 0xcd, 0x06, 0x29, 0x55, 0x44,
  0xf9, 0xe5, 0xcf, 0xbe, 0xb8, 0xf9, 0x3c, 0x7b,
  0xd7, 0x91, 0x40, 0xd8, 0x84, 0xef, 0xcc, 0x85,
  0x76, 0x0d, 0x03, 0x50, 0xdc, 0x62, 0x9b, 0xfc,
  0xe7, 0x5c, 0x29, 0x3d, 0x36, 0x82, 0xc5, 0xc6,
  0x31, 0xee, 0x3e, 0x79, 0x94, 0xcf, 0x3e, 0x9b,
  0xf2, 0x33, 0xb5, 0x88, 0x84, 0x2c, 0xfc, 0xab,
  0x89, 0x5f, 0xda, 0x18, 0x0e, 0x70, 0xd5, 0x94,
  0x17, 0xc1, 0x69, 0x83, 0x76, 0x01, 0x2e, 0x78,
  0x0f, 0x65, 0x41, 0x37, 0x62, 0xa0, 0x33, 0x5d,
  0xec, 0xe5, 0x9c, 0xe0, 0xf9, 0x86, 0xb3, 0xb8,
  0xde, 0x2b, 0x40, 0xf9, 0x47, 0x60, 0x02, 0xf0,
  0xc3, 0x56, 0x46, 0x39, 0xa3, 0x3b, 0x7f, 0xc7,
  0x6a, 0x6c, 0x25, 0x66, 0x3d, 0x8a, 0x35, 0x43,
  0x51, 0x45, 0xe9, 0x9e, 0x1d, 0x9b, 0x45, 0x76,
  0x3e, 0xc2, 0xa4, 0x9c, 0xc2, 0x4c, 0x18, 0x40,
  0xcd, 0x3a, 0xd0, 0xa8, 0x7f, 0xaa, 0x75, 0x94,
  0x0a, 0xdf, 0xdf, 0x86, 0xa4, 0xdb, 0x90, 0x62,
  0x89, 0xc2, 0x12, 0xed, 0x7a, 0x53, 0xda, 0x93,
  0x00, 0x55, 0x74, 0xb1, 0xd3, 0x04, 0xfb, 0x92,
  0xb0, 0x65, 0x07, 0xc1, 0x66, 0xd6, 0x88, 0x78,
  0x27, 0xd7, 0x3f, 0x6f, 0x2c, 0xda, 0x5a, 0x70,
  0x25, 0xae, 0xc8, 0x76, 0x24, 0x2a, 0xcc, 0x78,
  0x15, 0x5e, 0xe0, 0x24, 0x55, 0x27, 0xa6, 0x4b,
  0x30, 0xb0, 0x33, 0x33, 0xc4, 0xbf, 0x38, 0x50,
  0x3f, 0x23, 0x9b, 0x04, 0xb6, 0x0a, 0x0c, 0x25,
  0x83, 0xb9, 0x6d, 0xce, 0x32, 0x1e, 0x56, 0x1d,
  0x95, 0xaf, 0x0c, 0xd5, 0x92, 0x0a, 0x29, 0xb4,
  0x77, 0x54, 0xbd, 0x1c, 0x89, 0x19, 0xb4, 0xb4,
  0x41, 0xca, 0x5a, 0x88, 0x53, 0x43, 0x91, 0xfa,
  0x25, 0xf4, 0x2f, 0x91, 0xa9, 0xd0, 0x1c, 0xf7,
  0x07, 0xdc, 0x92, 0xb9, 0x91, 0x92, 0xf3, 0x45,
  0x32, 0x25, 0x05, 0xd3, 0x83, 0xa0, 0x9d, 0x03,
  0x25, 0x52, 0xce, 0xb1, 0x70, 0x93, 0x7a, 0x2c,
  0x23, 0xb8, 0x9a, 0x73, 0x0c, 0x49, 0xb1, 0x7b,
  0x4e, 0xd0, 0xc0, 0xc4, 0x37, 0x2d, 0x28, 0xf3,
  0x3a, 0x0b, 0x0a, 0xbc, 0x3c, 0x96, 0x93, 0x07,
  0x34, 0xa3, 0xef, 0x0c, 0x91, 0x2c, 0xd0, 0x74,
  0x7e, 0x77, 0x54, 0xa4, 0x8e, 0xed, 0xf8, 0xc1,
  0xf5, 0x6e, 0x4e, 0xa1, 0x24, 0x77, 0x14, 0xca,
  0x78, 0xed, 0x36, 0x42, 0xa3, 0xe5, 0xd0, 0x89,
  0x2c, 0x91, 0x0c, 0xed, 0x56, 0xa7, 0xee, 0x07,
  0x77, 0xb7, 0x45, 0x58, 0xfd, 0xa6, 0x66, 0xf5,
  0x21, 0xa0, 0x61, 0x4c, 0xff, 0x58, 0xd2, 0xb0,
  0xca, 0x1b, 0x86, 0x2e, 0xb5, 0xef, 0xa9, 0x15,
  0xf9, 0x1c, 0x29, 0x66, 0xea, 0x31, 0xae, 0xa0,
  0x48, 0xd1, 0x81, 0x0c, 0x99, 0x4b, 0x85, 0xb0,
  0x89, 0x88, 0x48, 0xf0, 0xa5, 0x98, 0x70, 0xf0,
  0x8a, 0x6d, 0xdf, 0x0e, 0xf8, 0x5f, 0xc7, 0xb3,
  0x71, 0xae, 0x1d, 0x66, 0x97, 0xc0, 0x30, 0xcf,
  0xc9, 0x02, 0x82, 0x35, 0x5a, 0x59, 0xc9, 0xd4,
  0x9b, 0x3e, 0xc4, 0x3b, 0xeb, 0xfe, 0x26, 0x58,
  0xeb, 0xa6, 0xd4, 0x0d, 0xd7, 0x2f, 0x53, 0xfb,
  0x72, 0x38, 0xca, 0x2a, 0x07, 0xb0, 0x1b, 0xb1,
  0x95, 0x4f, 0x71, 0x5a, 0x96, 0x29, 0x22, 0xbe,
  0x85, 0xcf, 0xfb, 0x99, 0xec, 0xe1, 0xc8, 0x9a,
  0x42, 0x3f, 0xf3, 0x1e, 0x75, 0xc9, 0x6d, 0xbd,
  0x12, 0x41, 0x94, 0xa7, 0x6d, 0x3e, 0xa2, 0x9b,
};

}  // namespace test_data