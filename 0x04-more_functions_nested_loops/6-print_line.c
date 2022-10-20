void print_line(int n)
{
        if (n < 1)
        {
                _putchar('\n');
        }
        else
        {
                int i = 0;

                while (i < n)
                {
                        _putchar(95);
                        i++;
                }
                _putchar('\n');
        }
}
