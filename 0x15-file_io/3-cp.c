#include "holberton.h"
#include <stdio.h>
/**
 * main - copies the content of a file to another file
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int ff, ft, r, w;
	char buffer[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	while ((r = read(ff, buffer, 1024)) != 0)
	{
		if (r == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(ft, buffer, r);
		if (w == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (close(ff) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	}
	if (close(ft) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);
	}
	return (0);
}
