void print_alphabet_x10(void)
{
    int i = 0;
    for (i; i < 10; i++)
    {
        char letter = 'a';

        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        _putchar('\n');
    }
}
