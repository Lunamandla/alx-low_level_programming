#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return 0;
	}
	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		return 0;
	}

	char *buffer = (char *)malloc(letters + 1);
	       if (buffer == NULL)
	       {
		       fclose(file);
		       return 0;
	       }
	ssize_t bytes_read = fread(buffer, 1, letters, file);
	{
		if (bytes_read <= 0)
		{
			fclose(file);
			free(buffer);
			return 0;
		}
		buffer[bytes_read] = '\0';

		ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			fclose(file);
			free(buffer);
			return 0;
		}

		fclose(file);
		free(buffer);

		return bytes_written;
}

int main()
{
	const char *fileame = "filename.txt";
	size_t letters_to_read = 468;
	size_t bytes_printed = read_textfile(filename, letters_to_read);

	if (bytes_printed == 0)
	{
		printf("Failed to read, and print the file.\n");
	}
	else
	{
		printf("Successfuly read and printed %zd letters from the file.\n", bytes_printed);
	}
	return 0;
}
		
