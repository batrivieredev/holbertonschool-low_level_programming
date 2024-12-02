#include "main.h"

/**
 * append_text_to_file - function that appends text to the end of the file
 * @filename: filename to append text to
 * @text_content: NULL terminated string
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, numwrote, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	/* return -1 if file doesn't exist or no privilege to write */
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	/* if NULL string and file exists return 1 */
	if ((text_content == NULL) && (fd != -1))
	{
		close(fd);
		return (1);
	}

	length = 0;
	while (text_content[length] != '\0')
		length++;

	numwrote = write(fd, text_content, length);

	/* if write failed or didn't write full string */
	if (numwrote == -1 || numwrote != length)
		return (-1);

	return (1);
}
