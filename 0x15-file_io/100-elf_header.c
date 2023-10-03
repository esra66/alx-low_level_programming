#include "main.h"

/*
 *  * File: 100-elf_header.c
 *   * Auth: Abel Berhanu
 */

/**
 *  * check_elf - Checks if a file is an ELF file.
 *   * @e_ident: A pointer to an array containing the ELF magic numbers.
 *    *
 *     * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *magic_numbers)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (magic_numbers[i] != 127 &&
				magic_numbers[i] != 'E' &&
				magic_numbers[i] != 'L' &&
				magic_numbers[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 *  * print_magic - Prints the magic numbers of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF magic numbers.
 *    *
 *     * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *magic_numbers)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", magic_numbers[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 *  * print_class - Prints the class of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *elf_class)
{
	printf("  Class:                             ");

	switch (elf_class[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_class[EI_CLASS]);
	}
}

/**
 *  * print_data - Prints the data of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *data_encoding)
{
	printf("  Data:                              ");

	switch (data_encoding[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", data_encoding[EI_CLASS]);
	}
}

/**
 *  * print_version - Prints the version of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *version)
{
	printf("  Version:                           %d",
			version[EI_VERSION]);

	switch (version[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 *  * print_osabi - Prints the OS/ABI of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *os_abi)
{
	printf("  OS/ABI:                            ");

	switch (os_abi[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", os_abi[EI_OSABI]);
	}
}

/**
 *  * print_abi - Prints the ABI version of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *abi_version)
{
	printf("  ABI Version:                       %d\n",
			abi_version[EI_ABIVERSION]);
}

/**
 *  * print_type - Prints the type of an ELF header.
 *   * @e_type: The ELF type.
 *    * @e_ident: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int elf_type, unsigned char *elf_class)
{
	if (elf_class[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
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
			printf("<unknown: %x>\n", elf_type);
	}
}

