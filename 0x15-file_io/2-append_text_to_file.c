#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: File Name
 * @text_content: Content to be appended to file
 *
 * Return: 1 - On Success
 * -1 - On Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return  (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	o = open(filename, O_APPEND | O_WRONLY);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
