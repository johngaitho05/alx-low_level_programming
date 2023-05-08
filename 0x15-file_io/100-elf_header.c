#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>


/**
 * print_entry32 - print entry for 32bit machine
 * @file: the EFL pointer
 */
void print_entry32(char *file)
{
	int index;

	printf("80");
	for (index = 26; index >= 22; index--)
	{
		if (file[index] > 0)
			printf("%x", file[index]);
		else if (file[index] < 0)
			printf("%x", 256 + file[index]);
	}
	if (file[7] == 6)
		printf("00");
}

/**
 * print_entry64 - prints the entry address for 64bit machine
 * @file: the EFL pointer
 */
void print_entry64(char *file)
{
	int index;


	for (index = 26; index > 23; index--)
	{
		if (file[index] >= 0)
			printf("%02x", file[index]);

		else if (file[index] < 0)
			printf("%02x", 256 + file[index]);

	}
}

/**
 * print_entry - prints entry point address
 * @file: the EFL pointer
 */
void print_entry(char *file)
{
	char sys;

	printf("  Entry point address:               0x");

	sys = file[4] + '0';
	switch (sys)
	{
		case '1':
			print_entry32(file);
			break;
		case '2':
			print_entry64(file);
			break;
	}
	printf("\n");
}

/**
 * print_type - prints type
 * @file: the EFL pointer
 */
void print_type(char *file)
{
	char sys_type = file[16];


	if (file[5] != 1)
		sys_type = file[17];

	printf("  Type:                              ");

	switch (sys_type)
	{
		case 0:
			printf("NONE (No file type)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", sys_type);
			break;
	}
}

/**
 * print_os_abi - prints OS/ABI
 * @file: the EFL pointer
 */
void print_os_abi(char *file)
{
	char abi = file[7];

	printf("  OS/ABI:                            ");

	switch (abi)
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 2:
			printf("UNIX - NetBSD\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %x>\n", abi);
			break;
	}


}


/**
 * print_version - prints Version
 * @file: the EFL pointer
 */
void print_version(char *file)
{
	int version = file[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - prints data
 * @file: the EFL pointer
 */
void print_data(char *file)
{
	char data = file[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}
/**
 * print_magic - prints magic info.
 * @file: the EFL pointer
 */
void print_magic(char *file)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", file[bytes]);

	printf("\n");

}

/**
 * print_header - check the version system.
 * @file: the EFL pointer
 */
void print_header(char *file)
{
	char sys = file[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(file);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");

	print_data(file);
	print_version(file);
	print_os_abi(file);
	printf("  ABI Version:                       %d\n", file[8]);
	print_type(file);
	print_entry(file);
}

/**
 * check_elf - check if it is an elf file.
 * @file: the EFL pointer
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *file)
{
	int addr = (int)file[0];
	char E = file[1];
	char L = file[2];
	char F = file[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char file[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	ret_read = read(fd, file, 27);

	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(file))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	print_header(file);
	close(fd);

	return (0);
}
