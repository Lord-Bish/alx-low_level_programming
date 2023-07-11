#include "main.h"

/**
 * print_addr - prints address
 * @ptr: magic.
 * Return: no return.
 */

#define ELF_MAGIC_SIZE 4

/* Structure representing the ELF header */
typedef struct {
    ssize_t magic[ELF_MAGIC_SIZE];
    ssize_t class;
    ssize_t data;
    ssize_t version;
    ssize_t os_abi;
    ssize_t abi_version;
    ssize_t type;
    ssize_t entry_point;
} ElfHeader;

/* Function to print the ELF header information */
void printElfHeaderInfo(const ElfHeader *header) {
    printf("Magic: %02lX %02lX %02lX %02lX\n", header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
    printf("Class: %d-bit\n", (header->class == 1) ? 32 : 64);
    printf("Data: %s endian\n", (header->data == 1) ? "Little" : "Big");
    printf("Version: %ld\n", header->version);
    printf("OS/ABI: %ld\n", header->os_abi);
    printf("ABI Version: %ld\n", header->abi_version);
    printf("Type: %ld\n", header->type);
    printf("Entry point address: 0x%ld\n", header->entry_point);
}

/* Function to read and validate the ELF header */
int readElfHeader(int fd, ElfHeader *header) {
    ssize_t bytesRead;

    bytesRead = read(fd, header, sizeof(ElfHeader));
    if (bytesRead != sizeof(ElfHeader)) {
        fprintf(stderr, "Error reading ELF header\n");
        return 0;
    }
    
    /* Check the ELF magic bytes */
    if (header->magic[0] != 0x7F || header->magic[1] != 'E' || header->magic[2] != 'L' || header->magic[3] != 'F') {
        fprintf(stderr, "Not an ELF file\n");
        return 0;
    }
    
    return 1;
}

int main(int argc, char *argv[]) {
    
    ElfHeader header;
    const char *filename;
    int fd;
    
    if (argc < 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Failed to open file: %s\n", filename);
        return 1;
    }
    
    if (!readElfHeader(fd, &header)) {
        close(fd);
        return 98;
    }
    
    printElfHeaderInfo(&header);
    
    close(fd);
    return 0;
}
