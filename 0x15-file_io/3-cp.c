#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
* error_exit - Prints an error message and exits with the specified code.
* @message: The error message to print.
* @exit_code: The exit code.
*/
void error_exit(char *message, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(exit_code);
}

/**
* main - Copies the content of a file to another file.
* @argc: The number of arguments.
* @argv: The array of arguments.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int file_from, file_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
error_exit("Usage: cp file_from file_to", 97);

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_exit("Error: Can't read from file", 98);

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
error_exit("Error: Can't write to file", 99);

while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written != bytes_read || bytes_written == -1)
error_exit("Error: Can't write to file", 99);
}

if (bytes_read == -1)
error_exit("Error: Can't read from file", 98);

if (close(file_from) == -1)
error_exit("Error: Can't close fd", 100);

if (close(file_to) == -1)
error_exit("Error: Can't close fd", 100);

return (0);
}
