#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File Name
 * @text_content: Text to be written to file
 *
 * Return: 1 - On Success
 * -1 - On Failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, r, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
