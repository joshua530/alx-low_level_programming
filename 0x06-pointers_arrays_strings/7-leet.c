#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337
 *
 * @str: the string to capitalize
 *
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int len, str_pos, to_convert_pos;
	char to_convert[] = "aAeEoOtTlL";
	int codes[] = {4, 3, 0, 7, 1};
	int char_index, code_index;
	int len_to_convert;

	len = strlen(str);
	len_to_convert = strlen(to_convert);

	for (str_pos = 0; str_pos < len; ++str_pos)
	{
		for (to_convert_pos = 0; to_convert_pos < len_to_convert; ++to_convert_pos)
		{
			if (str[str_pos] == to_convert[to_convert_pos])
			{
				code_index = to_convert_pos / 2;
				str[str_pos] = codes[code_index] + '0';
			}
		}
	}
	return (str);
}
