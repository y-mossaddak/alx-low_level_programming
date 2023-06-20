int print_sign(int n)
{
    if (n > 0)
    {
        return 1;
        putchar(43);
    }
    else
    {
        if (n < 0)
        {
            return -1;
            putchar(45);
        }
    }
    return 0;
    putchar(48);
}
