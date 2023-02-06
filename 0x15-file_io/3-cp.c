#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument pointer
 * return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}
/**
 * copy_file - function to copy
 * @src: source
 * @dest: destination
 * return: output
 */
void copy_file(const char *src, const char *dest)
{
	int x, y, z;
	char buff[1024];

	x = open(src, O_RDONLY);
	if (!src || x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", src);
		exit(98);
	}
	y = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((z = read(x, buff, 1024)) > 0)
	{
		if (write(y, buff, z) != z || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", dest);
			exit(99);
		}
	}
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", src);
		exit(98);
	}
	if (close(x) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %d\n", x);
		exit(100);
	}
	if (close(y) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %d\n", y);
		exit(100);
	}
}
