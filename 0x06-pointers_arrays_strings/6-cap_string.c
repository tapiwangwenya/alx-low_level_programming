#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * strings are seperated by: space, tabulation, new line, ,, ;,
 * ., !, ?, ", (, ), {, and }.
 * @s: parameter
 * author: tapiwangwenya
 * Return: string
 */
char *cap_string(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		/* for every character that begins each word*/
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		/* for any of the seperators that might begin a string*/
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
		|| s[count] == ',' || s[count] == ';' || s[count] == '.'
		|| s[count] == '.' || s[count] == '!' || s[count] == '?'
		|| s[count] == '"' || s[count] == '(' || s[count] == ')'
		|| s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}

