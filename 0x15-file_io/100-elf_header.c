#include <stdio.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>


/**
 * errorResponse -  prints error message and returns the respective error code
 * @error_code: the code of the encountered error
 * @fileName: the erroneous file
 * Return: the error code
 */
int errorResponse(int error_code, const char *fileName)
{
	const char *msg = NULL;

	switch (error_code)
	{
		case 1:
			msg = "Usage: header elf_filename\n";
			break;
		case 2:
			msg = "Error: Can't read from file %s\n";
			break;
		case 3:
			msg = "Error: Not an ELF file\n";
			break;
		case 4:
			msg = "Error: Can't write content of %s\n";
			break;
		case 5:
			msg = "Error: Can't close fd %s\n";
			break;
		default:
			break;
	}
	if (msg)
	{
		dprintf(STDERR_FILENO, msg, fileName);
	}
	return (98);
}


/**
 * print_header - computes the ELF Data
 * @header: the header object
 * Return: the ELF Data in str format
 */
char *get_data(Elf64_Ehdr header)
{
	char *res;

	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			res = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			res = "2's complement, big endian";
			break;
		default:
			res = "Invalid data encoding";
			break;
	}

	return (res);



}

/**
 * print_header - computes the ELF Class
 * @header: the header object
 * Return: the ELF Class in str format
 */
char *get_class(Elf64_Ehdr header)
{
	char *res;

	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			res = "ELF32";
			break;
		case ELFCLASS64:
			res = "ELF64";
			break;
		default:
			res = "Invalid class";
			break;
	}

	return (res);
}


/**
 * print_header - computes the ELF OS/ABI
 * @header: the header object
 * Return: the ELF OS/ABI in str format
 */
char *get_os_abi(Elf64_Ehdr header)
{
	char *res;

	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			res = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			res = "UNIX - HP-UX";
			break;
		case ELFOSABI_LINUX:
			res = "UNIX - Linux";
			break;
		case ELFOSABI_SOLARIS:
			res = "UNIX - Solaris";
			break;
		case ELFOSABI_FREEBSD:
			res = "UNIX - FreeBSD";
			break;
		case ELFOSABI_NETBSD:
			res = "UNIX - NetBSD";
			break;
		case ELFOSABI_OPENBSD:
			res = "UNIX - OpenBSD";
			break;
		case ELFOSABI_ARM:
			res = "UNIX - ARM";
			break;
		case ELFOSABI_STANDALONE:
			res = "UNIX - Standalone (embedded)";
			break;
		default:
			res = "Unknown OS";
			break;
	}

	return (res);
}

/**
 * print_header - computes the ELF Type
 * @header: the header object
 * Return: the ELF type in str format
 */
char *getType(Elf64_Ehdr header)
{
	char *res;

	switch (header.e_type)
	{
		case ET_NONE:
			res = "NONE (No file type)";
			break;
		case ET_REL:
			res = "REL (Relocatable file)";
			break;
		case ET_EXEC:
			res = "EXEC (Executable file)";
			break;
		case ET_DYN:
			res = "DYN (Shared object file)";
			break;
		case ET_CORE:
			res = "CORE (Core file)";
			break;
		default:
			res  = "Unknown file type";
			break;
	}

	return (res);
}


/**
 * print_header - print the content of the ELF header
 * @header: the header object
 * Return: 0 (Always success)
 */
int print_header(Elf64_Ehdr header)
{
	int i;

	printf("ELF header:\n");
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", get_class(header));
	printf("  Data:                              %s\n", get_data(header));
	printf("  Version:                           %d",
	       header.e_version);
	if(header.e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");
	printf("\n");
	printf("  OS/ABI:                            %s\n",
	       get_os_abi(header));
	printf("  ABI Version:                       %hu\n",
	       header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", getType(header));
	printf("  Entry point address:               0x%lx\n", header.e_entry);

	return (0);

}

/**
 * main - entry point (displays the information contained
 * in the ELF header at the start of an ELF file)
 * @argc: number of args.
 * @argv: command line args.
 * Return: 0 if success else respective error code.
 */
int main(int argc, char *argv[])
{

	int res;
	char *filename;
	Elf64_Ehdr header;
	FILE *fd;

	if (argc != 2)
		return (errorResponse(1, ""));

	filename = argv[1];
	fd  = fopen(filename, "r");
	if (!fd)
		return (errorResponse(2, filename));

	if (fread(&header, sizeof(header), 1, fd) != 1)
		return (errorResponse(2, filename));

	if (memcmp(header.e_ident, "\x7f""ELF", 4) != 0)
		return (errorResponse(3, filename));

	res =  print_header(header);

	if (fclose(fd) == EOF)
		return (errorResponse(5, filename));

	return (res);
}
