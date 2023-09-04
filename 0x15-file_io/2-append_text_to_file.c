#include "main.h"

/**
 * append_text_to_file - Asdds text at the end.
 * @filename: file name pointer
 * @text_content: str to add to the end.
 * Return: function fails,filename = NULL,not there,lacks WR permision (-1).
 * else 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, q, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	q = write(o, text_content, len);

	if (o == -1 || q == -1)
		return (-1);

	close(o);

	return (1);
}
