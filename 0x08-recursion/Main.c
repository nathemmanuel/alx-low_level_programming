#include <stdio.h>

int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb);
    printf("%d", nb + print(nb - 1));
    nb --;
    puts("Runs");
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}
