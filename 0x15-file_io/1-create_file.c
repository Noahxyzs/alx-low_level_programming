#include "main.h"

/**
 * create_file - function name
 * @filename: pointer
 * @text_content: pointer
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int a, b;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fd, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
