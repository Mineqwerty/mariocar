Lights1 window_f3d_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx window_glass2_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 window_glass2_rgba16[] = {
	0x60, 0xb7, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xff, 0x70, 0xfd, 0x70, 0xfb, 
	0x60, 0xf1, 0x48, 0x51, 0xb9, 0xdb, 0xaa, 0x91, 
	0xfc, 0xc7, 0xfd, 0xc1, 0xfe, 0x03, 0xfd, 0xc5, 
	0xdb, 0xd1, 0x72, 0x91, 0x52, 0x0f, 0xfd, 0x43, 
	0xfd, 0xc1, 0xfe, 0x01, 0xf4, 0x03, 0x18, 0xcd, 
	0x58, 0xb5, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xff, 0x69, 0x3d, 0x60, 0xf7, 
	0x40, 0x5d, 0x49, 0x15, 0xa2, 0x51, 0xe4, 0x47, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xfd, 0xc1, 0xf4, 0x89, 
	0xaa, 0x93, 0xb3, 0x25, 0x9a, 0x1d, 0x8a, 0x45, 
	0xec, 0xc3, 0xfd, 0x85, 0xeb, 0xc5, 0x20, 0xcb, 
	0x58, 0xb5, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x68, 0xfd, 0x68, 0xfd, 
	0x70, 0xfd, 0x70, 0xff, 0x68, 0xfd, 0x68, 0xff, 
	0x68, 0xff, 0x70, 0xff, 0x59, 0x39, 0x40, 0x65, 
	0xda, 0x63, 0xc2, 0x5b, 0xb3, 0xcd, 0xfd, 0x81, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xec, 0x03, 0x69, 0xcb, 
	0xda, 0x63, 0xfb, 0xaf, 0xfb, 0xb1, 0x3a, 0x15, 
	0x41, 0xcf, 0x39, 0xcf, 0x4a, 0x11, 0x19, 0x0d, 
	0x58, 0xb5, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x68, 0xfd, 0x70, 0xfd, 
	0x70, 0xff, 0x68, 0xff, 0x68, 0xfd, 0x68, 0xfb, 
	0x61, 0x35, 0x48, 0xeb, 0x48, 0x15, 0x91, 0x19, 
	0xfb, 0xad, 0xdb, 0xa9, 0x9b, 0x55, 0xf4, 0xcf, 
	0xdc, 0x4f, 0x61, 0x8d, 0x41, 0xd1, 0xe2, 0x23, 
	0xfb, 0xef, 0xfb, 0xef, 0xfb, 0xaf, 0x59, 0x99, 
	0xda, 0x67, 0xfb, 0xf1, 0xda, 0x25, 0x29, 0x0f, 
	0x58, 0xb5, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x68, 0xfd, 0x68, 0xfb, 0x68, 0xf9, 
	0x50, 0xef, 0x30, 0x5d, 0x38, 0x99, 0x20, 0x99, 
	0x39, 0x97, 0x52, 0x19, 0xfb, 0xb1, 0xfb, 0xf1, 
	0xfb, 0xb1, 0xca, 0xa5, 0x9a, 0x5f, 0xd3, 0x27, 
	0xdb, 0xab, 0xf2, 0xa7, 0x61, 0xd7, 0xfb, 0xf1, 
	0xfb, 0xf1, 0xfb, 0xf1, 0xf2, 0x65, 0x61, 0xdb, 
	0xfb, 0xf1, 0xfb, 0xf3, 0xe9, 0xe1, 0x21, 0x0d, 
	0x58, 0xb5, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x68, 0xfd, 0x68, 0xfd, 0x68, 0xfb, 
	0x58, 0xf1, 0x30, 0x97, 0x99, 0x55, 0x8a, 0x9d, 
	0xb3, 0xd9, 0x59, 0xd5, 0xfb, 0xf1, 0xfb, 0xf1, 
	0xda, 0x65, 0x99, 0x5b, 0xf2, 0xe9, 0xfb, 0xaf, 
	0xfb, 0xf1, 0xa9, 0xdf, 0xba, 0x1f, 0xfb, 0xaf, 
	0xfb, 0xef, 0xe2, 0xa7, 0x91, 0x17, 0xd2, 0x65, 
	0xfb, 0xf1, 0xfb, 0xf3, 0xe9, 0xe1, 0x21, 0x0b, 
	0x58, 0xb5, 0x70, 0xfd, 0x70, 0xff, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x68, 0xfb, 0x68, 0xfd, 
	0x78, 0xff, 0x40, 0x9f, 0xc2, 0x1b, 0x92, 0x89, 
	0xfc, 0xcd, 0x59, 0xd1, 0xfb, 0xb1, 0xfa, 0xed, 
	0x81, 0x57, 0xe1, 0xe1, 0xfb, 0xf3, 0xfb, 0xb3, 
	0xfb, 0xb1, 0xa1, 0x5d, 0xe1, 0xe1, 0xfb, 0xf1, 
	0xfb, 0x6b, 0x89, 0xd9, 0x41, 0xd5, 0xf1, 0xe3, 
	0xfb, 0xad, 0xfb, 0xf1, 0xe9, 0xe3, 0x20, 0xcd, 
	0x58, 0xf5, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x68, 0xfd, 0x68, 0xfd, 
	0x70, 0xff, 0x30, 0x9b, 0x9a, 0x85, 0xfc, 0x81, 
	0xf4, 0xc3, 0x7a, 0x0b, 0xc2, 0x23, 0x91, 0xd3, 
	0xdc, 0x0d, 0x8a, 0x0b, 0xf2, 0xe9, 0xfb, 0xaf, 
	0xc2, 0x1f, 0x6a, 0x8d, 0x62, 0x8b, 0x5a, 0x8d, 
	0x6a, 0x8d, 0xca, 0x8f, 0xfa, 0xd7, 0x81, 0x97, 
	0xda, 0x65, 0xfb, 0xaf, 0xf1, 0xe3, 0x20, 0xcd, 
	0x58, 0xf5, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x68, 0xfb, 0x68, 0xfb, 
	0x70, 0xff, 0x38, 0x9b, 0xf4, 0x41, 0xfd, 0x41, 
	0xfd, 0xc5, 0xec, 0x85, 0x52, 0x4f, 0xc3, 0x41, 
	0xfd, 0x85, 0xec, 0x45, 0xa2, 0x11, 0xaa, 0x1d, 
	0x92, 0x0b, 0xfd, 0x41, 0xfd, 0xc1, 0xfe, 0x03, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xfd, 0x47, 0x91, 0xd9, 
	0x61, 0x55, 0xcb, 0x27, 0xb9, 0xdf, 0x29, 0x0f, 
	0x58, 0xf5, 0x68, 0xfd, 0x70, 0xff, 0x70, 0xfd, 
	0x68, 0xf9, 0x48, 0x5f, 0x38, 0x5d, 0x78, 0xfb, 
	0x68, 0xfd, 0x38, 0x59, 0xfd, 0x41, 0xfd, 0xc3, 
	0xfd, 0xc1, 0xf5, 0x0b, 0x93, 0x4d, 0xfd, 0x83, 
	0xfd, 0xc1, 0xfd, 0xc1, 0x9b, 0xc9, 0x9b, 0x0f, 
	0xfd, 0x87, 0xfd, 0x49, 0xec, 0x47, 0x38, 0x81, 
	0x40, 0x83, 0x40, 0x43, 0x38, 0x05, 0x7a, 0x2b, 
	0x62, 0x4b, 0xf5, 0x0f, 0xe3, 0xcd, 0x19, 0x0d, 
	0x58, 0xf5, 0x68, 0xfd, 0x68, 0xff, 0x68, 0xf9, 
	0x59, 0x25, 0x89, 0x0d, 0x48, 0x53, 0x71, 0x39, 
	0x68, 0xff, 0x38, 0x9b, 0xfd, 0xc1, 0xfd, 0xc1, 
	0xfd, 0x83, 0xdc, 0x0d, 0x93, 0x89, 0xfd, 0xc1, 
	0xfd, 0xc1, 0xfd, 0x81, 0x9b, 0x89, 0xab, 0x0d, 
	0xec, 0x09, 0x40, 0x89, 0x38, 0x4b, 0x41, 0xa1, 
	0xa2, 0x7d, 0xbb, 0x7f, 0xb3, 0x7f, 0xa3, 0x7b, 
	0x62, 0x85, 0xfd, 0x41, 0xfc, 0x05, 0x21, 0x0b, 
	0x58, 0xf7, 0x68, 0xfd, 0x70, 0xfd, 0x50, 0xa3, 
	0x90, 0x49, 0x60, 0x4d, 0x61, 0x2f, 0x78, 0xfd, 
	0x71, 0x35, 0x71, 0x93, 0xdc, 0xc3, 0xb4, 0x49, 
	0xa3, 0x09, 0x9a, 0x55, 0x93, 0x4f, 0xfd, 0x41, 
	0xfd, 0xc3, 0xfc, 0xc9, 0x69, 0xc9, 0x69, 0x53, 
	0x99, 0x9b, 0xfb, 0xaf, 0xfa, 0xe9, 0x92, 0x23, 
	0x82, 0x35, 0xb3, 0x3f, 0xbb, 0x3f, 0xab, 0xb9, 
	0x62, 0x45, 0xfd, 0xc3, 0xf4, 0x45, 0x19, 0x0b, 
	0x58, 0xf9, 0x68, 0xfd, 0x69, 0x37, 0x58, 0x53, 
	0xd9, 0x97, 0x50, 0x9d, 0x69, 0x39, 0x70, 0xfd, 
	0x48, 0xe7, 0x8a, 0xd5, 0x9a, 0xd5, 0x9a, 0x63, 
	0xaa, 0xa3, 0xfb, 0x2b, 0xa2, 0x55, 0xcb, 0xc7, 
	0xfc, 0xc9, 0x92, 0x07, 0xa1, 0x9b, 0xda, 0x67, 
	0xfb, 0xb1, 0xfb, 0xf3, 0xfb, 0xb3, 0xeb, 0x29, 
	0x49, 0xa1, 0xaa, 0xff, 0xb3, 0x3f, 0xa2, 0xb7, 
	0x62, 0x45, 0xfd, 0xc1, 0xf4, 0x01, 0x21, 0x0d, 
	0x58, 0xfb, 0x60, 0xf9, 0x30, 0x59, 0x39, 0x93, 
	0x40, 0x59, 0x69, 0x37, 0x71, 0x3f, 0x48, 0xe9, 
	0x60, 0xd9, 0xea, 0x63, 0xfb, 0xf3, 0xfb, 0xb1, 
	0xfb, 0xf1, 0xfb, 0xf1, 0xc2, 0xe7, 0x49, 0x4f, 
	0x60, 0x49, 0xf2, 0x27, 0xfb, 0xb1, 0xfb, 0xf1, 
	0xfb, 0xf3, 0xfb, 0xf3, 0xfb, 0xb1, 0xba, 0x63, 
	0x51, 0xe3, 0x69, 0xb1, 0x8a, 0x37, 0x61, 0xa5, 
	0x7a, 0x0d, 0xfd, 0x89, 0xf4, 0x01, 0x20, 0xcd, 
	0x58, 0xf9, 0x58, 0xed, 0x40, 0x49, 0x49, 0x8d, 
	0x20, 0xd7, 0x58, 0xed, 0x50, 0xed, 0x48, 0x91, 
	0x89, 0xd9, 0xfb, 0x6d, 0xfb, 0xf5, 0xfb, 0xf3, 
	0xfb, 0xf3, 0xfb, 0xb1, 0xa1, 0xa1, 0x41, 0x5b, 
	0xc2, 0x65, 0xfb, 0xaf, 0xfb, 0xb3, 0xfb, 0xf1, 
	0xfb, 0xb3, 0xfb, 0xf1, 0xe2, 0x25, 0x61, 0x5f, 
	0xa2, 0xfd, 0x61, 0xe5, 0x51, 0x9f, 0x99, 0xf9, 
	0x93, 0x75, 0xc3, 0xd9, 0xeb, 0xc7, 0x20, 0xcd, 
	0x50, 0xb3, 0x48, 0x99, 0xf4, 0x8b, 0xf4, 0x89, 
	0x93, 0x51, 0x89, 0xd9, 0xb2, 0xe3, 0x69, 0x57, 
	0x59, 0x95, 0x92, 0x5d, 0xf2, 0xeb, 0xfb, 0xf3, 
	0xf2, 0xa7, 0x80, 0x97, 0x91, 0xf5, 0xa2, 0x7d, 
	0x59, 0x9f, 0x81, 0xdb, 0x8a, 0x5f, 0x82, 0x1f, 
	0x82, 0x5f, 0x91, 0xdf, 0x81, 0xe9, 0xb3, 0x3d, 
	0xbb, 0x3f, 0x8a, 0x35, 0x69, 0xe9, 0xb3, 0x3f, 
	0xab, 0x7f, 0x93, 0x33, 0x7a, 0x53, 0x29, 0x0d, 
	0x40, 0xad, 0x49, 0x13, 0xec, 0x87, 0xfc, 0xc1, 
	0xfc, 0xc9, 0x91, 0xcf, 0xea, 0xa5, 0x59, 0xcd, 
	0xb3, 0x89, 0xbb, 0xc9, 0x62, 0x15, 0x6a, 0x5f, 
	0x61, 0x17, 0x81, 0x6f, 0xaa, 0xbf, 0x7a, 0x31, 
	0x6a, 0x2d, 0x7a, 0xa9, 0x7b, 0x11, 0xc4, 0x8b, 
	0xdd, 0x11, 0x6a, 0x0d, 0x49, 0xe1, 0xa2, 0x7b, 
	0xbb, 0x7f, 0xa2, 0xbf, 0x49, 0x9f, 0xa2, 0x7f, 
	0xb3, 0x3f, 0xb3, 0x3f, 0x81, 0xef, 0x20, 0xcf, 
	0x48, 0xe7, 0x39, 0x95, 0x41, 0x8f, 0xec, 0x45, 
	0xfe, 0x03, 0xf4, 0x01, 0x6a, 0x0b, 0xe4, 0x01, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xfd, 0x47, 0xbb, 0x13, 
	0xc2, 0x61, 0x59, 0x97, 0x39, 0xd9, 0x62, 0x29, 
	0xab, 0x3f, 0xa3, 0x77, 0xac, 0x0f, 0xfd, 0xc1, 
	0xfd, 0xc1, 0xfd, 0x81, 0xf4, 0x05, 0x59, 0x95, 
	0x91, 0xf9, 0xbb, 0x7f, 0x99, 0xfb, 0x49, 0xe1, 
	0xc3, 0x3f, 0xab, 0x3f, 0x92, 0x39, 0x20, 0x8f, 
	0x50, 0xdb, 0x49, 0x11, 0xd2, 0xa5, 0x89, 0x8b, 
	0xc4, 0x01, 0xfd, 0x83, 0x62, 0x4b, 0xfd, 0xc3, 
	0xfe, 0x01, 0xfd, 0x81, 0xbb, 0x13, 0x70, 0xd7, 
	0xfb, 0xf1, 0xfb, 0xef, 0xaa, 0x21, 0x71, 0x5b, 
	0x82, 0x2b, 0x9b, 0x73, 0xac, 0x13, 0xfd, 0xc3, 
	0xfd, 0x85, 0xf5, 0x99, 0xdc, 0xd1, 0xdc, 0x8f, 
	0x69, 0xcb, 0x81, 0xe5, 0xbb, 0x3f, 0x59, 0xa7, 
	0x9b, 0x37, 0x40, 0x63, 0x40, 0x63, 0x18, 0xcd, 
	0x68, 0x51, 0x91, 0x95, 0xf3, 0xf1, 0xe3, 0xab, 
	0x4a, 0x0b, 0x69, 0xc3, 0x39, 0xcd, 0xfd, 0xc3, 
	0xfd, 0x43, 0x71, 0x01, 0x92, 0x31, 0x9a, 0xb9, 
	0x79, 0x5f, 0xda, 0x23, 0xfc, 0x33, 0xfb, 0xf1, 
	0xeb, 0xef, 0xa2, 0x61, 0x61, 0xcd, 0xc3, 0x47, 
	0x58, 0x41, 0x59, 0x25, 0x28, 0x8f, 0xec, 0x03, 
	0xfd, 0x41, 0x59, 0x83, 0x40, 0x99, 0x40, 0xdb, 
	0x38, 0xd5, 0x50, 0xef, 0x48, 0xf1, 0x18, 0xd1, 
	0xa0, 0xd5, 0x91, 0xdd, 0xfc, 0x33, 0xe4, 0x2f, 
	0x62, 0x0b, 0xed, 0x0f, 0x62, 0x8f, 0xfd, 0x83, 
	0xdb, 0x8d, 0x89, 0xe7, 0x71, 0xe9, 0xab, 0x7f, 
	0xb3, 0x79, 0x81, 0x5d, 0xea, 0xe7, 0xfb, 0xf3, 
	0xfb, 0xef, 0xfc, 0x31, 0xe3, 0x27, 0x81, 0x51, 
	0x48, 0xa9, 0x58, 0xf3, 0x28, 0x59, 0x40, 0x87, 
	0x40, 0x87, 0x48, 0xdd, 0x58, 0xef, 0x61, 0x35, 
	0x60, 0xf3, 0x68, 0xf7, 0x50, 0xaf, 0x18, 0xcf, 
	0xea, 0x21, 0x8a, 0x1f, 0xf4, 0x33, 0xec, 0x31, 
	0x51, 0xc3, 0xfd, 0xc3, 0x5a, 0x07, 0xed, 0x09, 
	0x40, 0x5b, 0xba, 0xff, 0x51, 0xa3, 0xa2, 0x7d, 
	0xb3, 0x3f, 0xb3, 0x7d, 0x41, 0x9d, 0x92, 0xa5, 
	0xfb, 0xf1, 0xfb, 0xb1, 0xfa, 0xeb, 0x71, 0x19, 
	0x71, 0x3b, 0x68, 0xfb, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x68, 0xfd, 0x70, 0xff, 0x70, 0xff, 
	0x68, 0xff, 0x78, 0xff, 0x58, 0xb5, 0x20, 0xd1, 
	0xf2, 0x23, 0x91, 0xdd, 0xf3, 0xf1, 0xeb, 0xf1, 
	0x51, 0xc1, 0xfd, 0x81, 0x5a, 0x09, 0x9a, 0xd5, 
	0x69, 0x29, 0xb3, 0x7f, 0x7a, 0x2f, 0x6a, 0x2f, 
	0xb2, 0xff, 0xab, 0x3d, 0xab, 0x3d, 0x82, 0x33, 
	0xa2, 0x1f, 0xfb, 0x6d, 0x79, 0x23, 0x50, 0x6d, 
	0x70, 0xfd, 0x70, 0xff, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xff, 0x50, 0xb3, 0x21, 0x0f, 
	0xd1, 0xdf, 0x79, 0x99, 0xe3, 0xf1, 0xfc, 0x31, 
	0x61, 0xc3, 0xfd, 0x03, 0x59, 0x87, 0x69, 0x27, 
	0xaa, 0xbf, 0xb3, 0x7f, 0x92, 0xf5, 0x49, 0x9f, 
	0x9a, 0xb3, 0xa2, 0xff, 0xa3, 0x3b, 0x7a, 0x2f, 
	0x59, 0x5d, 0xa1, 0xa3, 0x40, 0xa7, 0x61, 0x3b, 
	0x71, 0x3d, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x68, 0xfd, 0x68, 0xfd, 0x70, 0xfb, 0x70, 0xfb, 
	0x70, 0xfd, 0x70, 0xff, 0x50, 0xb3, 0x21, 0x0f, 
	0xe3, 0xcd, 0x8a, 0xcf, 0xfb, 0xef, 0xe2, 0xa5, 
	0x62, 0x05, 0xe3, 0xc1, 0x48, 0x8b, 0xbb, 0x3f, 
	0xbb, 0x3f, 0xb3, 0x3f, 0x8a, 0xf5, 0x72, 0x8b, 
	0xd4, 0x0d, 0x49, 0x91, 0x41, 0x95, 0x40, 0xe1, 
	0x60, 0xf3, 0x58, 0xf7, 0x68, 0xfb, 0x68, 0xfd, 
	0x68, 0xfd, 0x70, 0xfd, 0x68, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x60, 0xf7, 0x28, 0x1d, 0x28, 0x5f, 
	0x60, 0xf5, 0x70, 0xfd, 0x50, 0xf5, 0x18, 0xcf, 
	0xfb, 0xc1, 0x92, 0x47, 0xe2, 0x23, 0xda, 0x21, 
	0x52, 0x05, 0x50, 0xc1, 0x8a, 0x31, 0xb3, 0x3f, 
	0xbb, 0x3f, 0xb3, 0x3f, 0x82, 0x29, 0x9b, 0x43, 
	0xfe, 0x03, 0xfd, 0xc1, 0xb2, 0x81, 0x40, 0xdf, 
	0x68, 0xf9, 0x70, 0xff, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xff, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x40, 0x5f, 0xef, 0xff, 0x4d, 0xf9, 
	0x38, 0x61, 0x70, 0xff, 0x50, 0xf5, 0x19, 0x0b, 
	0xfb, 0xc1, 0x92, 0x87, 0xe2, 0x23, 0x8a, 0x1b, 
	0x52, 0x11, 0x99, 0x8f, 0xb1, 0x9f, 0x82, 0xb1, 
	0xb3, 0x7f, 0x69, 0xab, 0xc3, 0x4b, 0xf5, 0x41, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xfd, 0x41, 0x92, 0xcd, 
	0x58, 0xb1, 0x68, 0xfb, 0x68, 0xfd, 0x68, 0xfd, 
	0x70, 0xff, 0x70, 0xff, 0x70, 0xfd, 0x70, 0xfd, 
	0x78, 0xfd, 0x50, 0xaf, 0x33, 0x27, 0x8b, 0xed, 
	0x50, 0xad, 0x70, 0xff, 0x50, 0xf7, 0x18, 0xcd, 
	0xfc, 0x01, 0x82, 0xc7, 0xa9, 0x9d, 0x9a, 0x1d, 
	0x8a, 0x5d, 0xe3, 0x27, 0xfa, 0xe9, 0x92, 0x23, 
	0x92, 0x73, 0x51, 0x59, 0xf5, 0x01, 0xfe, 0x01, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xfd, 0x81, 0x8a, 0xc9, 
	0x60, 0xf5, 0x70, 0xfd, 0x58, 0xf3, 0x48, 0xe9, 
	0x59, 0x35, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x68, 0xfb, 0x58, 0xed, 0x48, 0xeb, 
	0x68, 0xf9, 0x70, 0xff, 0x58, 0xf5, 0x18, 0xd1, 
	0xfb, 0xc1, 0x82, 0xc7, 0xca, 0x63, 0xf3, 0xef, 
	0x68, 0x53, 0xfb, 0x6f, 0xfb, 0xb1, 0xfb, 0x6d, 
	0xba, 0x65, 0xc3, 0xdb, 0xfd, 0xc3, 0xfd, 0xc1, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xfd, 0x83, 0x9a, 0xcb, 
	0x68, 0xf5, 0x69, 0x37, 0x94, 0xf7, 0x86, 0xff, 
	0x10, 0xdb, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xff, 0x70, 0xfd, 0x58, 0xf5, 0x18, 0xd1, 
	0xfb, 0xc1, 0x82, 0xc5, 0xf3, 0xef, 0xeb, 0xaf, 
	0x40, 0x91, 0xfb, 0x6f, 0xfb, 0xf1, 0xfb, 0xf1, 
	0xfb, 0x6d, 0x79, 0x55, 0xe4, 0x4b, 0xed, 0xc5, 
	0xfd, 0xc1, 0xfd, 0xc1, 0xfd, 0x83, 0x92, 0xcb, 
	0x60, 0xf3, 0x58, 0xf5, 0x33, 0x69, 0xaf, 0x7f, 
	0x38, 0x59, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xff, 0x70, 0xfd, 0x58, 0xb3, 0x20, 0xd1, 
	0xfb, 0xc1, 0x92, 0xc7, 0xea, 0x63, 0x70, 0x51, 
	0xc1, 0xe1, 0xfb, 0xf1, 0xfb, 0xf1, 0xfb, 0xb3, 
	0xfb, 0xf1, 0xf2, 0x63, 0x59, 0xdd, 0x82, 0x5f, 
	0xd4, 0x43, 0xfd, 0xc3, 0xfd, 0x87, 0x92, 0x4b, 
	0x70, 0xf7, 0x70, 0xfd, 0x61, 0x35, 0x59, 0x31, 
	0x60, 0xf7, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xff, 0x70, 0xfb, 0x58, 0xf5, 0x20, 0xd1, 
	0xf3, 0xc1, 0x8a, 0xc7, 0x91, 0x57, 0x60, 0xd3, 
	0xf2, 0x65, 0xfb, 0xaf, 0xfb, 0xf1, 0xfb, 0xf3, 
	0xfb, 0xb3, 0xa1, 0xe1, 0x8a, 0xb5, 0x7a, 0x6f, 
	0x61, 0xcd, 0x7a, 0x4b, 0x72, 0x49, 0x59, 0x51, 
	0x58, 0xef, 0x68, 0xff, 0x70, 0xfd, 0x70, 0xfb, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfb, 0x60, 0xf5, 0x20, 0xd1, 
	0xf3, 0xc1, 0x8a, 0x87, 0xda, 0x61, 0x38, 0x91, 
	0x49, 0x99, 0xd2, 0x65, 0xfb, 0x6d, 0xfb, 0xf1, 
	0xfb, 0x6d, 0x69, 0x97, 0xab, 0x7f, 0x82, 0xef, 
	0x82, 0x6f, 0xbb, 0x3f, 0xb3, 0x7d, 0x9a, 0xbf, 
	0x50, 0x63, 0x70, 0xf9, 0x70, 0xfb, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x60, 0xf5, 0x18, 0xd1, 
	0xbb, 0x57, 0xba, 0x23, 0xfb, 0x6d, 0x48, 0x99, 
	0xb2, 0xff, 0x61, 0xab, 0x49, 0x9f, 0xca, 0x21, 
	0xa1, 0xe3, 0x8a, 0x73, 0xb3, 0x3f, 0xaa, 0xfd, 
	0x51, 0xa5, 0xa3, 0x7f, 0xb3, 0x3f, 0xb3, 0x7f, 
	0x50, 0xa5, 0x50, 0xaf, 0x69, 0x3b, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x58, 0xf3, 0x18, 0xd1, 
	0xda, 0x21, 0xfb, 0xf5, 0x60, 0x15, 0x89, 0xf3, 
	0xb3, 0x7f, 0xb3, 0x3d, 0xab, 0x3f, 0x9b, 0x3b, 
	0x71, 0xed, 0xa3, 0x77, 0xb3, 0x3f, 0xbb, 0x7f, 
	0x51, 0xa5, 0xab, 0x7d, 0xb3, 0x3d, 0xb3, 0x3d, 
	0xaa, 0xf9, 0x38, 0x9d, 0x68, 0xfb, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 
	0x70, 0xfb, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x68, 0xbb, 0x58, 0xf3, 0x18, 0xcf, 
	0xf2, 0x23, 0xfb, 0xf3, 0x38, 0x4f, 0x8a, 0x37, 
	0xb3, 0x3f, 0xb3, 0x3f, 0xb3, 0x3f, 0xb3, 0x7f, 
	0x82, 0xf1, 0x93, 0x79, 0xbb, 0x7f, 0xa2, 0xfb, 
	0x59, 0x63, 0x92, 0x35, 0x71, 0x6d, 0x40, 0x5d, 
	0x40, 0x9f, 0x71, 0xed, 0x48, 0x65, 0x69, 0x39, 
	0x68, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x60, 0x79, 0x58, 0xf3, 0x18, 0xd1, 
	0xf9, 0xe3, 0xfb, 0xf1, 0x38, 0x8f, 0x59, 0xa3, 
	0x92, 0x7b, 0xb3, 0x3f, 0xb3, 0x3f, 0xb3, 0x3f, 
	0x93, 0x75, 0xa3, 0x77, 0x79, 0xef, 0x51, 0x99, 
	0xb2, 0x23, 0x59, 0x5b, 0x38, 0x9f, 0x58, 0xf5, 
	0x48, 0xad, 0x40, 0x9b, 0x30, 0x57, 0x30, 0x59, 
	0x48, 0xf1, 0x69, 0x3b, 0x68, 0xf9, 0x68, 0xff, 
	0x68, 0xff, 0x68, 0xfd, 0x68, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x58, 0xf5, 0x18, 0xd1, 
	0xe1, 0x57, 0xfb, 0x6b, 0x38, 0x4d, 0xea, 0xe9, 
	0x81, 0xe1, 0x9a, 0xbb, 0xb2, 0xff, 0xb3, 0x3f, 
	0xb2, 0xff, 0x51, 0xa5, 0xa9, 0xdf, 0xfa, 0xe9, 
	0xfb, 0xf3, 0xe2, 0xeb, 0x48, 0xa1, 0x68, 0xfd, 
	0x68, 0xfd, 0x60, 0xf9, 0x60, 0xfb, 0x60, 0xf5, 
	0x48, 0xa3, 0x48, 0xa5, 0x50, 0xa9, 0x60, 0xf7, 
	0x68, 0xfd, 0x68, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x70, 0xfd, 0x70, 0xfb, 0x58, 0xf3, 0x18, 0xd1, 
	0xc0, 0xcb, 0xca, 0xa1, 0x38, 0xd1, 0xfb, 0xb1, 
	0xea, 0xe9, 0x81, 0xa5, 0xaa, 0x79, 0xc2, 0xff, 
	0xb3, 0x7f, 0x79, 0xf3, 0xb2, 0x1f, 0xfb, 0x2b, 
	0xfb, 0xf3, 0xfb, 0xf1, 0x78, 0x99, 0x50, 0xe7, 
	0x60, 0xf9, 0x70, 0xfd, 0x68, 0xfd, 0x68, 0xfd, 
	0x70, 0xfb, 0x70, 0xfd, 0x70, 0xfd, 0x70, 0xfd, 
	0x68, 0xfd, 0x68, 0xfd, 0x70, 0xff, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x58, 0xb3, 0x18, 0xcf, 
	0x61, 0x4f, 0xb3, 0x4f, 0x38, 0x89, 0xfc, 0x31, 
	0xfb, 0xef, 0xda, 0x23, 0x69, 0xdf, 0x92, 0x79, 
	0xb3, 0x3f, 0x89, 0xf5, 0x61, 0xe1, 0x99, 0x9f, 
	0xf3, 0xef, 0xfb, 0xaf, 0xfb, 0x29, 0x82, 0x1f, 
	0x38, 0x9b, 0x48, 0x63, 0x59, 0x31, 0x60, 0xf9, 
	0x68, 0xfb, 0x70, 0xfd, 0x70, 0xff, 0x70, 0xfd, 
	0x70, 0xfd, 0x68, 0xfd, 0x70, 0xff, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x58, 0xb3, 0x18, 0xcf, 
	0x48, 0x83, 0xfd, 0x0b, 0x30, 0x87, 0xfb, 0xf1, 
	0xfb, 0xf1, 0xda, 0x23, 0x79, 0x99, 0x69, 0xa1, 
	0x8a, 0x39, 0x61, 0xa7, 0xaa, 0xfd, 0x71, 0xef, 
	0x61, 0x99, 0xca, 0x61, 0xb2, 0x21, 0x81, 0xeb, 
	0xa2, 0xff, 0x81, 0xf5, 0x48, 0x5d, 0x50, 0xa5, 
	0x60, 0xf5, 0x70, 0xfd, 0x78, 0xff, 0x70, 0xff, 
	0x70, 0xfd, 0x68, 0xfd, 0x70, 0xff, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x58, 0xb3, 0x18, 0xcf, 
	0x48, 0x81, 0xfd, 0x4b, 0x28, 0x87, 0xf2, 0xa9, 
	0xe2, 0xe9, 0xa2, 0x1d, 0xfa, 0xe9, 0xf3, 0x2b, 
	0xab, 0x29, 0x81, 0xe3, 0x82, 0x31, 0xa2, 0xbf, 
	0xa2, 0xbd, 0x7a, 0xb1, 0x61, 0xeb, 0x82, 0x75, 
	0xb3, 0x3f, 0xb3, 0x3f, 0xa2, 0xff, 0x81, 0xf1, 
	0x41, 0x57, 0x48, 0xe7, 0x58, 0xb7, 0x68, 0xfd, 
	0x70, 0xfd, 0x70, 0xfd, 0x70, 0xff, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x58, 0xb3, 0x18, 0xcf, 
	0x49, 0x1b, 0xe4, 0xcf, 0xb3, 0x01, 0x71, 0x57, 
	0x61, 0xdb, 0xca, 0x61, 0xfb, 0xad, 0xfb, 0xb1, 
	0xfb, 0xaf, 0xd3, 0x29, 0x8a, 0x23, 0x5a, 0x25, 
	0x92, 0xb9, 0xab, 0x3f, 0x82, 0xaf, 0x7a, 0xab, 
	0xb3, 0x3f, 0xbb, 0x3f, 0xb3, 0x3f, 0xab, 0x3f, 
	0x49, 0x97, 0xbb, 0x09, 0x48, 0x97, 0x60, 0xb5, 
	0x68, 0xfd, 0x68, 0xfb, 0x70, 0xfd, 0x70, 0xff, 
	0x70, 0xff, 0x70, 0xfd, 0x58, 0xb3, 0x18, 0xcf, 
	0x48, 0xeb, 0xc4, 0x11, 0xfd, 0xc7, 0x30, 0x91, 
	0xa2, 0xfb, 0x69, 0xa9, 0x51, 0x61, 0xd2, 0xa7, 
	0xfb, 0xef, 0xfb, 0xaf, 0xfb, 0xf3, 0xdb, 0xa9, 
	0x61, 0xdd, 0x51, 0x9f, 0x39, 0x9d, 0x7a, 0x6d, 
	0xb3, 0x3f, 0xb3, 0x3f, 0xb3, 0x3f, 0xab, 0x3f, 
	0x49, 0x97, 0xfd, 0x81, 0xe4, 0x05, 0x48, 0x4f, 
	0x58, 0xf1, 0x60, 0xb7, 0x68, 0xfd, 0x70, 0xff, 
	0x70, 0xfd, 0x70, 0xfb, 0x50, 0xb1, 0x18, 0xcf, 
	0x40, 0xab, 0xab, 0x17, 0xfd, 0xc7, 0x38, 0xd5, 
	0xaa, 0xff, 0xbb, 0x7f, 0x92, 0x3f, 0x51, 0xe3, 
	0x79, 0x9f, 0xe3, 0xef, 0xfb, 0xaf, 0x92, 0x21, 
	0x61, 0xe9, 0xa2, 0x7d, 0x92, 0xf7, 0x69, 0xeb, 
	0xb3, 0x3f, 0xb3, 0x3f, 0xab, 0x3f, 0x92, 0xb9, 
	0x49, 0x93, 0xfd, 0xc1, 0xfd, 0xc1, 0xec, 0x47, 
	0x50, 0xd1, 0x40, 0xed, 0x60, 0xbd, 0x68, 0xff, 
	0x68, 0xfb, 0x68, 0xfb, 0x50, 0xf1, 0x21, 0x13, 
	0x48, 0xb1, 0x40, 0xdd, 0x6a, 0x4b, 0x38, 0x99, 
	0x9a, 0x7b, 0xb3, 0x3f, 0xb2, 0xff, 0xb3, 0x3d, 
	0x92, 0xaf, 0x92, 0x21, 0x69, 0x99, 0x51, 0xdf, 
	0x92, 0x79, 0xb3, 0x3f, 0xb3, 0x3f, 0x6a, 0x6b, 
	0x92, 0x7b, 0xb3, 0x3f, 0x81, 0xf3, 0x69, 0xed, 
	0x72, 0x2d, 0xbb, 0xc1, 0xfd, 0xc1, 0xfd, 0x81, 
	0xfd, 0x4f, 0x48, 0xcf, 0x60, 0xf9, 0x68, 0xfd, 
	0x68, 0xf9, 0x60, 0xfb, 0x48, 0xf3, 0x21, 0x13, 
	0x48, 0xb5, 0x50, 0xf1, 0x38, 0xd7, 0xaa, 0x21, 
	0x40, 0xa1, 0xbb, 0x7f, 0xb3, 0x7f, 0xb2, 0xff, 
	0x79, 0xe7, 0xf4, 0x33, 0xf3, 0xf3, 0xe3, 0x6b, 
	0x69, 0x5b, 0x49, 0xe1, 0x41, 0x97, 0x41, 0xd7, 
	0x51, 0x99, 0x4a, 0x1f, 0x61, 0xe9, 0x9a, 0xbb, 
	0xb3, 0x3f, 0x7a, 0x67, 0x51, 0xcb, 0xf4, 0x01, 
	0xdc, 0x0f, 0x28, 0x4b, 0x48, 0xed, 0x71, 0x3f, 
	0x60, 0xf7, 0x60, 0xfb, 0x48, 0xf3, 0x19, 0x13, 
	0x68, 0xf3, 0x70, 0xf7, 0x38, 0x5b, 0x81, 0x0b, 
	0x40, 0x99, 0xbb, 0x3d, 0xb2, 0xff, 0x93, 0x33, 
	0x91, 0x9f, 0xfb, 0xf3, 0xfb, 0xb3, 0xfb, 0xb1, 
	0xca, 0x63, 0x59, 0xcd, 0xfe, 0x09, 0xfe, 0x03, 
	0xfe, 0x07, 0xd4, 0x09, 0x71, 0xe3, 0xa2, 0xbd, 
	0xb3, 0x3f, 0xb2, 0xf9, 0x91, 0xfd, 0x3a, 0x1b, 
	0x51, 0x21, 0xa1, 0xbf, 0x50, 0xa3, 0x58, 0xaf, 
	0x60, 0xf9, 0x58, 0xf9, 0x48, 0xf1, 0x19, 0x13, 
	0x58, 0xb1, 0x70, 0xfb, 0x58, 0xf7, 0x48, 0x8d, 
	0x68, 0xd9, 0x92, 0xb9, 0xa2, 0xfd, 0x71, 0xa5, 
	0x91, 0x97, 0xfb, 0xf1, 0xfb, 0xef, 0xfb, 0xeb, 
	0xfc, 0x2d, 0x89, 0xd5, 0xd4, 0x89, 0xfd, 0xc5, 
	0xfd, 0xc9, 0xfd, 0x45, 0xb3, 0x03, 0x81, 0xe1, 
	0xaa, 0xff, 0xc3, 0x7d, 0xb3, 0x37, 0x4a, 0x23, 
	0x9a, 0x7d, 0xab, 0x7f, 0x92, 0x79, 0x40, 0xa1, 
	0x60, 0xff, 0x58, 0xf9, 0x48, 0xf1, 0x21, 0x13, 
	0x60, 0xb3, 0x78, 0xff, 0x78, 0xbf, 0x50, 0xe5, 
	0x48, 0x8f, 0x59, 0x99, 0x51, 0xd9, 0x79, 0x9b, 
	0xf2, 0x65, 0xfc, 0x31, 0xfb, 0xf1, 0xfb, 0xf1, 
	0xfb, 0xf1, 0xeb, 0x6b, 0x93, 0x51, 0xf4, 0xc5, 
	0xfd, 0x81, 0xfd, 0xc1, 0xfd, 0xc3, 0xf5, 0xcd, 
	0x59, 0x95, 0x79, 0xab, 0xbb, 0x7f, 0x41, 0xdd, 
	0xab, 0x3f, 0xab, 0x7f, 0xb3, 0x7f, 0x79, 0xef, 
	0x38, 0x1f, 0x69, 0x79, 0x48, 0xed, 0x29, 0x0f, 
	0x60, 0xb3, 0x70, 0xbb, 0x78, 0xbf, 0x68, 0xf3, 
	0x38, 0xd9, 0x7a, 0x1f, 0xeb, 0xed, 0xbb, 0x67, 
	0x61, 0xdd, 0x61, 0xe1, 0xda, 0xa5, 0xfc, 0x35, 
	0xfb, 0xb3, 0xfb, 0xf3, 0x92, 0x17, 0x9a, 0xc7, 
	0xfd, 0x43, 0xfd, 0x81, 0xfd, 0xc1, 0xfd, 0xc1, 
	0xfd, 0xcf, 0x9a, 0x93, 0x89, 0xeb, 0x49, 0xdf, 
	0x92, 0x7b, 0xb3, 0x3f, 0xb3, 0x3f, 0xb3, 0x7d, 
	0x40, 0x5f, 0x61, 0x39, 0x50, 0xf3, 0x20, 0xd3, 
	0x58, 0xb5, 0x68, 0xf9, 0x70, 0xbf, 0x61, 0x39, 
	0x40, 0xeb, 0x30, 0x95, 0xeb, 0xad, 0xc2, 0x63, 
	0x61, 0x65, 0x91, 0xf9, 0x51, 0x9f, 0x8a, 0x1f, 
	0xfb, 0xad, 0xc2, 0xa3, 0x49, 0xd9, 0x49, 0x9b, 
	0xcb, 0x81, 0xfd, 0x83, 0xfd, 0xc1, 0xfd, 0xc1, 
	0xfd, 0xc3, 0xe4, 0x49, 0x40, 0x51, 0x28, 0x55, 
	0x48, 0x5b, 0xa2, 0xfd, 0xab, 0x3f, 0xb3, 0x3f, 
	0x6a, 0x2f, 0x61, 0x33, 0x48, 0xef, 0x21, 0x11, 
	0x50, 0xf1, 0x60, 0xf9, 0x70, 0xfd, 0x68, 0xfb, 
	0x61, 0x37, 0x40, 0xa3, 0x60, 0x93, 0x89, 0xa9, 
	0xab, 0x3f, 0xab, 0x3f, 0xab, 0x3b, 0x8a, 0x73, 
	0x69, 0xe7, 0x59, 0x9d, 0xa2, 0xfb, 0xa2, 0xbb, 
	0x91, 0xe1, 0xb3, 0x09, 0xfd, 0x81, 0xfd, 0x81, 
	0xf4, 0xc3, 0x68, 0xd3, 0x50, 0xe3, 0x48, 0xa5, 
	0x59, 0x31, 0x51, 0x27, 0x6a, 0x2b, 0x72, 0x6b, 
	0x62, 0xa3, 0x59, 0x2f, 0x48, 0xf3, 0x21, 0x11, 
	0x50, 0xf1, 0x58, 0xf5, 0x70, 0xfd, 0x70, 0xfb, 
	0x69, 0x3b, 0x48, 0x69, 0x30, 0x5b, 0x92, 0x37, 
	0xb3, 0x3f, 0xb3, 0x3f, 0xb2, 0xff, 0xa2, 0xfb, 
	0x92, 0xf7, 0x51, 0x61, 0xa2, 0xff, 0xb3, 0x3f, 
	0x92, 0x71, 0x5a, 0x15, 0xa3, 0x49, 0xab, 0x8b, 
	0x82, 0x4b, 0x50, 0x61, 0x69, 0x29, 0x61, 0x27, 
	0x40, 0xab, 0x30, 0x9f, 0xa3, 0x25, 0xaa, 0xe5, 
	0x7a, 0x1b, 0x58, 0xef, 0x48, 0xb5, 0x21, 0x13, 
	0x48, 0xf1, 0x60, 0xf7, 0x60, 0xb9, 0x68, 0xf9, 
	0x68, 0xfb, 0x60, 0xf9, 0x61, 0x33, 0x50, 0xe9, 
	0x92, 0x79, 0xbb, 0x7d, 0xb3, 0x3d, 0xb3, 0x39, 
	0xaa, 0xfd, 0x79, 0xeb, 0x71, 0xab, 0x92, 0xf5, 
	0xb3, 0x79, 0x59, 0x1b, 0x92, 0xb5, 0x8a, 0x73, 
	0x30, 0x5b, 0x60, 0xdf, 0xbb, 0x3d, 0xb3, 0x7b, 
	0x38, 0x99, 0x50, 0x5d, 0xf3, 0xaf, 0xf3, 0xad, 
	0xba, 0xe7, 0x58, 0xeb, 0x48, 0xad, 0x29, 0x13, 
	0x48, 0xf3, 0x58, 0xf9, 0x60, 0xb9, 0x60, 0xb9, 
	0x68, 0xf9, 0x68, 0xfb, 0x60, 0xfb, 0x50, 0xad, 
	0x48, 0x63, 0xb3, 0x3d, 0xb3, 0x3d, 0xab, 0x3b, 
	0x7a, 0x2b, 0x69, 0x19, 0x99, 0xdd, 0x69, 0x99, 
	0x79, 0xe5, 0x42, 0x1d, 0xb3, 0x7d, 0xa2, 0xfb, 
	0x28, 0x5b, 0x48, 0xa3, 0x92, 0x33, 0xab, 0x7d, 
	0x38, 0x59, 0xba, 0x25, 0xf3, 0xab, 0xf3, 0x6b, 
	0xa2, 0x63, 0x58, 0xad, 0x48, 0xb1, 0x28, 0xd1, 
	0x50, 0xb3, 0x58, 0xf9, 0x60, 0xf9, 0x60, 0xb9, 
	0x60, 0xb9, 0x68, 0xf9, 0x68, 0xf9, 0x60, 0xf9, 
	0x58, 0xb1, 0x58, 0xa7, 0x8a, 0x77, 0x79, 0xa1, 
	0xc2, 0xe5, 0xeb, 0x2b, 0xf3, 0xf3, 0xf3, 0xb1, 
	0xba, 0xa7, 0xa9, 0xdd, 0x6a, 0x25, 0x61, 0xe5, 
	0x28, 0x93, 0x60, 0xf7, 0x50, 0xa7, 0x58, 0xa3, 
	0x9a, 0x7b, 0x89, 0xf1, 0x79, 0xe1, 0x58, 0xd9, 
	0x50, 0xa9, 0x60, 0xf9, 0x48, 0xb1, 0x28, 0xd1, 
	0x48, 0xb3, 0x58, 0xf7, 0x60, 0xb9, 0x60, 0xf9, 
	0x60, 0xb9, 0x60, 0xb7, 0x60, 0xf9, 0x68, 0xf9, 
	0x68, 0xf5, 0x58, 0xab, 0x60, 0xe3, 0xd2, 0xa5, 
	0xf3, 0xf3, 0xf3, 0xb1, 0xf3, 0xaf, 0xf3, 0xaf, 
	0xf3, 0x6d, 0xc2, 0x21, 0x82, 0x9f, 0xc3, 0x6b, 
	0x99, 0xe1, 0x61, 0x2f, 0x60, 0xf5, 0x48, 0xa5, 
	0x40, 0x61, 0x50, 0xa3, 0x40, 0x99, 0x48, 0xe9, 
	0x61, 0x37, 0x60, 0xf7, 0x48, 0xad, 0x20, 0xd1, 
	0x50, 0xb3, 0x50, 0xb5, 0x58, 0xb7, 0x60, 0xf9, 
	0x60, 0xfb, 0x60, 0xb7, 0x60, 0xb7, 0x68, 0xf9, 
	0x68, 0xf9, 0x60, 0xf7, 0x50, 0xa5, 0x48, 0x4d, 
	0xca, 0x23, 0xf3, 0xaf, 0xf3, 0xaf, 0xf3, 0xaf, 
	0xeb, 0xef, 0x79, 0x99, 0xea, 0xe7, 0xf3, 0xaf, 
	0xf3, 0xb1, 0x40, 0x61, 0x68, 0xfb, 0x68, 0xfb, 
	0x60, 0xf5, 0x68, 0xf7, 0x68, 0xf5, 0x68, 0xfb, 
	0x68, 0xfb, 0x58, 0xf9, 0x40, 0xed, 0x20, 0xd1, 
	0x48, 0xb3, 0x58, 0xf7, 0x60, 0xf9, 0x60, 0xb9, 
	0x60, 0xf9, 0x60, 0xf7, 0x58, 0xb7, 0x60, 0xf7, 
	0x60, 0xfb, 0x60, 0xf9, 0x60, 0xf9, 0x59, 0x35, 
	0x48, 0x5f, 0xb2, 0x65, 0xeb, 0xaf, 0xf3, 0xaf, 
	0xca, 0xa3, 0x79, 0x9b, 0xf3, 0xaf, 0xf3, 0xb1, 
	0xf3, 0x6f, 0x70, 0x97, 0x58, 0xe9, 0x61, 0x33, 
	0x60, 0xf9, 0x68, 0xfb, 0x68, 0xf9, 0x68, 0xfb, 
	0x58, 0xb7, 0x48, 0xad, 0x30, 0x5b, 0x21, 0x0d, 
	0x50, 0xf5, 0x58, 0xf7, 0x60, 0xf7, 0x68, 0xf9, 
	0x60, 0xf9, 0x50, 0x73, 0x60, 0xb7, 0x68, 0xf7, 
	0x60, 0xf7, 0x58, 0xb5, 0x60, 0xb7, 0x68, 0xfb, 
	0x58, 0xf5, 0x48, 0xeb, 0x48, 0xdf, 0x48, 0x4f, 
	0x48, 0x8b, 0xe9, 0xe1, 0xf3, 0x2b, 0xf3, 0xaf, 
	0xf3, 0xb1, 0xf3, 0x6f, 0xd9, 0xe3, 0xba, 0x63, 
	0x38, 0x9b, 0x38, 0x99, 0x38, 0x59, 0x30, 0x59, 
	0x30, 0x59, 0x61, 0xed, 0x81, 0xf9, 0x38, 0xcf, 
	0x50, 0xf3, 0x58, 0xf5, 0x58, 0xb3, 0x50, 0xb5, 
	0x58, 0xb5, 0x58, 0xb5, 0x58, 0xb5, 0x50, 0xb1, 
	0x50, 0xb3, 0x58, 0xf5, 0x58, 0xb1, 0x58, 0x73, 
	0x58, 0xb7, 0x60, 0xf7, 0x61, 0x33, 0x59, 0x2d, 
	0x58, 0xe3, 0x58, 0x17, 0x50, 0x17, 0x91, 0x5f, 
	0xc1, 0xe1, 0xda, 0x21, 0xe1, 0x9f, 0xe1, 0x9f, 
	0x9a, 0x61, 0x8b, 0x2d, 0x9b, 0x35, 0xa3, 0x37, 
	0xa3, 0x39, 0xab, 0x3d, 0x82, 0x3b, 0x20, 0xcd, 
	0x48, 0xab, 0x48, 0xaf, 0x48, 0xb1, 0x48, 0xb1, 
	0x48, 0xb1, 0x48, 0xb3, 0x48, 0xb1, 0x48, 0xb3, 
	0x48, 0xb1, 0x48, 0xb3, 0x48, 0xaf, 0x48, 0xb1, 
	0x48, 0xb1, 0x48, 0xb5, 0x48, 0xb1, 0x48, 0xad, 
	0x48, 0xb1, 0x38, 0xa9, 0x38, 0xe3, 0x30, 0x9d, 
	0x38, 0x91, 0x30, 0x8d, 0x30, 0x4b, 0xda, 0x1f, 
	0xb2, 0x23, 0x71, 0xad, 0x91, 0xb7, 0x91, 0xb7, 
	0x91, 0xb9, 0x91, 0xb9, 0x89, 0xf9, 0x30, 0x8d, 
	0x28, 0x57, 0x28, 0x97, 0x28, 0x99, 0x30, 0x9b, 
	0x30, 0x59, 0x30, 0x99, 0x28, 0x99, 0x28, 0x99, 
	0x28, 0x99, 0x28, 0x99, 0x28, 0x9b, 0x28, 0x9b, 
	0x30, 0x99, 0x30, 0x59, 0x30, 0x99, 0x28, 0x97, 
	0x38, 0xdf, 0x28, 0x99, 0x30, 0x99, 0x28, 0x95, 
	0x28, 0x93, 0x30, 0x51, 0x30, 0x4f, 0x48, 0x53, 
	0x38, 0x53, 0x30, 0x97, 0x38, 0x9b, 0x30, 0x9b, 
	0x30, 0x9b, 0x30, 0x59, 0x30, 0x97, 0x20, 0xcd, 
	
};

Vtx window_Plane_mesh_layer_4_vtx_0[24] = {
	{{{-5, 2, 210},0, {379, 635},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-5, 2, -210},0, {382, 1136},{0x0, 0x81, 0x0, 0xFF}}},
	{{{9, 2, -210},0, {390, 1142},{0x0, 0x81, 0x0, 0xFF}}},
	{{{9, 2, 210},0, {390, 627},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-5, 525, 210},0, {151, 627},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{9, 525, 210},0, {140, 620},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{9, 525, -210},0, {157, 1138},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-5, 525, -210},0, {165, 1130},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{9, 2, -210},0, {390, 1142},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 2, -210},0, {382, 1136},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 525, -210},0, {165, 1130},{0x0, 0x0, 0x81, 0xFF}}},
	{{{9, 525, -210},0, {157, 1138},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 2, 210},0, {379, 635},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{9, 2, 210},0, {390, 627},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{9, 525, 210},0, {140, 620},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-5, 525, 210},0, {151, 627},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{9, 2, 210},0, {-273, 341},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{9, 2, -210},0, {-154, 1436},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{9, 525, -210},0, {157, 1138},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{9, 525, 210},0, {140, 620},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-5, 2, -210},0, {382, 1136},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5, 2, 210},0, {379, 635},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5, 525, 210},0, {151, 627},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5, 525, -210},0, {165, 1130},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx window_Plane_mesh_layer_4_tri_0[] = {
	gsSPVertex(window_Plane_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(window_Plane_mesh_layer_4_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_window_f3d_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, window_glass2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(window_f3d_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_window_f3d_material[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx window_Plane_mesh_layer_4[] = {
	gsSPDisplayList(mat_window_f3d_material),
	gsSPDisplayList(window_Plane_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_window_f3d_material),
	gsSPEndDisplayList(),
};

Gfx window_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

