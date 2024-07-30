/*printf string length*/
/**
 * _strlen - Return the length of a string
 * @str: String pointer
 *
 * Return: Length of the string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
