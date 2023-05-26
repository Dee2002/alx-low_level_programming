#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
* error_exit - Prints an error message and exits with the specified code.
* @message: The error message to print.
* @exit_code: The exit code.
*/
void error_exit(char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
* print_elf_header_info - Prints the information contained in the ELF header.
* @header: A pointer to the ELF header structure.
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
int i = 0;
printf("ELF Header:\n");
printf("  Magic:   ");
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             ELF%d\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("Solaris\n");
break;
case ELFOSABI_AIX:
printf("AIX\n");
break;
case ELFOSABI_FREEBSD:
printf("FreeBSD\n");
break;
case ELFOSABI_OPENBSD:
printf("OpenBSD\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
* main - Displays the information contained in the ELF header of an ELF file.
* @argc: The number of arguments.
* @argv: The array of arguments.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
if (argc != 2)
error_exit("Usage: elf_header elf_filename", 98);

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Can't open file", 98);

if (read(fd, &header, sizeof(header)) != sizeof(header))
error_exit("Error: Can't read file", 98);

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file", 98);

print_elf_header_info(&header);

if (close(fd) == -1)
error_exit("Error: Can't close file", 100);

return (0);
}
