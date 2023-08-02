/**
 * _strlen_recursion - finds length of string
 * @s: checks the string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_finder - finds palindromes
 *
 * @s: string to find palindrome of
 * @l: last offset of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int find_palindrome(char *s, int j)
{
	if (j < 1)
		return (1);
	if (*s == *(s + j))
		return (find_palindrome(s + 1, j - 2));
	return (0);
}

/**
 * is_palindrome - returns if string is palindrome or not
 *
 * @s: string to test
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (find_palindrome(s, len - 1));
}
