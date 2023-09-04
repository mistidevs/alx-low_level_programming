#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>

void display_header(unsigned char *e_ident, Elf64_Ehdr *header);
void print_magic(unsigned char *e_ident);
char *get_class(unsigned char class);
char *get_data(unsigned char data);
char *get_version(unsigned char version);
char *get_osabi(unsigned char osabi);
char *get_type(unsigned short type);

/**
* main - preprocessing and error detection
* @ac: argument counter
* @av: argument vector
*
* Return: 0 and/or error exit
*/

int main(int ac, char **av)
{
int fd, fc;
ssize_t nread;
Elf64_Ehdr edhr;
unsigned char e_ident[EI_NIDENT];
if (ac != 2)
{
	dprintf(2, "Usage: %s elf file\n", av[0]);
	exit(98); }
fd = open(av[1], O_RDONLY);
if (fd == -1)
{
	dprintf(2, "Can't open %s\n", av[1]);
	exit(98); }
nread = read(fd, e_ident, EI_NIDENT);
if (nread != EI_NIDENT)
{
	dprintf(2, "Can't read %s\n", av[1]);
	exit(98);
}
if (e_ident[EI_MAG0] != ELFMAG0 ||
	e_ident[EI_MAG1] != ELFMAG1 ||
	e_ident[EI_MAG2] != ELFMAG2 ||
	e_ident[EI_MAG3] != ELFMAG3)
{
	dprintf(2, "Error: Not an ELF file");
	exit(98);
}
if (lseek(fd, 0, SEEK_SET) == -1)
{
	dprintf(2, "Not able to lseek %s\n", av[1]);
	exit(98); }
nread = read(fd, &edhr, sizeof(edhr));
if (nread != sizeof(edhr))
{
	dprintf(2, "Can't read %s\n", av[1]);
	exit(98); }
fc = close(fd);
if (fc == -1)
{
	dprintf(2, "Error Closing %s\n", av[1]);
	exit(98); }
display_header(e_ident, &edhr);
return (0);
}

/**
 * display_header - Displays the information contained in the ELF header
 * @e_ident: The ELF identification bytes
 * @edhr: The ELF header structure
 */

void display_header(unsigned char *e_ident, Elf64_Ehdr *edhr)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	print_magic(e_ident);
	printf("  Class:                             %s\n",
							get_class(e_ident[EI_CLASS]));
	printf("  Data:                              %s\n",
							get_data(e_ident[EI_DATA]));
	printf("  Version:                           %d %s\n", e_ident[EI_VERSION],
							get_version(e_ident[EI_VERSION]));
	printf("  OS/ABI:                            %s\n",
							get_osabi(e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", get_type(edhr->e_type));
	printf("  Entry point address:               %#lx\n", edhr->e_entry);
}

/**
 * print_magic - Prints the magic bytes of the ELF identification
 * @e_ident: The ELF identification bytes
 */

void print_magic(unsigned char *e_ident)
{
int i;

for (i = 0; i < EI_NIDENT; i++)
	printf("%02x ", e_ident[i]);
printf("\n");
}

/**
 * get_class - Returns the string representation of the ELF class
 * @class: The ELF class byte
 * Return: A string corresponding to the class
 */

char *get_class(unsigned char class)
{
switch (class)
{
	case ELFCLASSNONE:
		return ("none");
	case ELFCLASS32:
		return ("ELF32");
	case ELFCLASS64:
		return ("ELF64");
	default:
		return ("<unknown>");
}
}

/**
 * get_data - Returns the string representation of the ELF data encoding
 * @data: The ELF data encoding byte
 * Return: A string corresponding to the data encoding
 */

char *get_data(unsigned char data)
{
switch (data)
{
	case ELFDATANONE:
		return ("none");
	case ELFDATA2LSB:
		return ("2's complement, little endian");
	case ELFDATA2MSB:
		return ("2's complement, big endian");
	default:
		return ("<unknown>");
}
}

/**
 * get_version - Returns the string representation of the ELF version
 * @version: The ELF version byte
 * Return: A string corresponding to the version
 */

char *get_version(unsigned char version)
{
switch (version)
{
	case EV_NONE:
		return ("(none)");
	case EV_CURRENT:
		return ("(current)");
	default:
		return ("(<unknown>)");
}
}

/**
 * get_osabi - Returns the string representation of the ELF OS/ABI
 * @osabi: The ELF OS/ABI byte
 * Return: A string corresponding to the OS/ABI
 */

char *get_osabi(unsigned char osabi)
{
switch (osabi)
{
	case ELFOSABI_NONE:
		return ("UNIX - System V");
	case ELFOSABI_HPUX:
		return ("HP-UX");
	case ELFOSABI_NETBSD:
		return ("NetBSD");
	case ELFOSABI_LINUX:
		return ("Linux");
	case ELFOSABI_SOLARIS:
		return ("Sun Solaris");
	case ELFOSABI_IRIX:
		return ("SGI Irix");
	case ELFOSABI_FREEBSD:
		return ("FreeBSD");
	case ELFOSABI_TRU64:
		return ("Compaq TRU64 UNIX");
	case ELFOSABI_ARM:
		return ("ARM");
	case ELFOSABI_STANDALONE:
		return ("Standalone (embedded) application");
	default:
		return ("<unknown>");
}
}


/**
 * get_type - Returns the string representation of the ELF type
 * @type: The ELF type
 * Return: A string corresponding to the type
 */

char *get_type(unsigned short type)
{
switch (type)
{
	case ET_NONE:
		return ("NONE (None)");
	case ET_REL:
		return ("REL (Relocatable file)");
	case ET_EXEC:
		return ("EXEC (Executable file)");
	case ET_DYN:
		return ("DYN (Shared object file)");
	case ET_CORE:
		return ("CORE (Core file)");
	default:
		return ("<unknown>");
}
}
