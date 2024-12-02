#include "main.h"

/**
 * read_textfile - read text file and print it to POSIX stdout
 * @filename: filename to open and read
 * @letters: number of letter to read and print
 *
 * Return: 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, numread, numwrote;
	char *buf;


	if (filename == NULL)
		return (0);

	/* OPEN */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	/* READ */
	numread = read(fd, buf, letters);
	close(fd);
	if (numread == -1)
	{
		free(buf);
		return (0);
	}

	/* WRITE */
	numwrote = write(STDOUT_FILENO, buf, numread);
	free(buf);

	if (numread != numwrote)
		return (0);

	return (numwrote);
}
