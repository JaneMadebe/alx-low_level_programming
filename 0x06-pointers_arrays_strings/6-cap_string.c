#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: te string to be capitalized
 * Return: a pointer to the changed string
 */

char *cap_string(char *str)
{
int capitalize_next = 1;
for (int i = 0; str[i] != '\0'; i++)
{
	if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
	str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
	capitalize_next = 1;
	}
	else if (capitalize_next)
	{
	str[i] = toupper(str[i]);
	capitalize_next = 0;
	}
}
return (str);
}
