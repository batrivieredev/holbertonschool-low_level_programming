#include "main.h"

/**
 * handle_error - Prints an error message and exits the program
 * @message: The error message format
 * @filename: The filename to include in the error message
 * @exit_code: The exit code to use when exiting the program
 *
 * Return: void
 */
void handle_error(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

/**
 * close_file - Closes a file descriptor and handles errors
 * @file: The file to close
 */
void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * copy_content - Copies content from one file to another
 * @file_from: The source file descriptor
 * @file_to: The destination file descriptor
 */
void copy_content(int file_from, int file_to)
{
	ssize_t read_bytes;
	ssize_t write_bytes;
	char buffer[1024];

	while ((read_bytes = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
			handle_error("Error: Can't write to %s\n", "file_to", 99);
	}
	if (read_bytes == -1)
		handle_error("Error: Can't read from file %s\n", "file_from", 98);
}

/**
 * main - Entry point of the program, copies the content of a file to another
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, otherwise an error code
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		handle_error("Error: Can't read from file %s\n", argv[1], 98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close_file(file_from);
		handle_error("Error: Can't write to %s\n", argv[2], 99);
	}
	copy_content(file_from, file_to);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
