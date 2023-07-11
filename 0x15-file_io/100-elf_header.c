#include "main.h"

/**
 * print_addr - prints address
 * @ptr: magic.
 * Return: no return.
 */

#define ELF_MAGIC_SIZE 4

// Structure representing the ELF header
typedef struct {
    uint8_t magic[ELF_MAGIC_SIZE];
    uint8_t class;
    uint8_t data;
    uint8_t version;
    uint8_t os_abi;
    uint8_t abi_version;
    uint16_t type;
    uint64_t entry_point;
} ElfHeader;

// Function to print the ELF header information
void printElfHeaderInfo(const ElfHeader *header) {
    printf("Magic: %02X %02X %02X %02X\n", header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
    printf("Class: %d-bit\n", (header->class == 1) ? 32 : 64);
    printf("Data: %s endian\n", (header->data == 1) ? "Little" : "Big");
    printf("Version: %d\n", header->version);
    printf("OS/ABI: %d\n", header->os_abi);
    printf("ABI Version: %d\n", header->abi_version);
    printf("Type: %d\n", header->type);
    printf("Entry point address: 0x%lx\n", header->entry_point);
}

// Function to read and validate the ELF header
int readElfHeader(int fd, ElfHeader *header) {
    ssize_t bytesRead;

    bytesRead = read(fd, header, sizeof(ElfHeader));
    if (bytesRead != sizeof(ElfHeader)) {
        fprintf(stderr, "Error reading ELF header\n");
        return 0;
    }
    
    // Check the ELF magic bytes
    if (header->magic[0] != 0x7F || header->magic[1] != 'E' || header->magic[2] != 'L' || header->magic[3] != 'F') {
        fprintf(stderr, "Not an ELF file\n");
        return 0;
    }
    
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }
    
    const char *filename;
    int fd;

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Failed to open file: %s\n", filename);
        return 1;
    }
    
    ElfHeader header;
    if (!readElfHeader(fd, &header)) {
        close(fd);
        return 98;
    }
    
    printElfHeaderInfo(&header);
    
    close(fd);
    return 0;
}
