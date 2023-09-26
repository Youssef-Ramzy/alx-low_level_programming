/**
 * rev_string - reverses a string
 *
 * @s: string parameter
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int length, index;
	char character;

	for (length = 0; s[length] != '\0'; ++l)
		;
	for (index = 0; index < length / 2; ++index)
	{
		character = s[index];
		s[index] = s[length - 1 - index];
		s[length - 1 - index] = character;
	}

}
