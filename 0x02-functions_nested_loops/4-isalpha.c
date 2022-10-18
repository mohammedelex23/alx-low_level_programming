/**
 * _isalpha - the function
 * @c: a letter
 * Description: return 1 for letter
 * and 0 for not
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
