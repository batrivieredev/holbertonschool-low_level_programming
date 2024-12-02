#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename to create
 * @text_content: text to enter into file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length, numwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	length = 0;
	while (text_content[length] != '\0')
		length++;


	numwrite = write(fd, text_content, length);
	close(fd);

	if (length == -1 || length != numwrite)
		return (-1);

	return (1);
}
