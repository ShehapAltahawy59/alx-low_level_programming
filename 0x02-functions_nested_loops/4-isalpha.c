/**
 * _isalpha - chesk if c is alpha
 * @c:the character to check
 * return: 1 if alpha 0 other
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
