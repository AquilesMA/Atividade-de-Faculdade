#include <stdio.h>
#include <stdbool.h>

int main()
{

    int x;
    printf("Digite um numero vagabundo:\n");
    scanf("%d", &x);

    if (x <= 20)
    {
        while (true)
        {
            if (x % 2 == 0)
            {
                printf("Vai ser par fdp burro da prr\n");
            }
            else
            {
                printf("Vai ser impar\n");
            }
        }
    }
    else if (x > 20)
    {
        printf("Deu erro");
    }

    return 0;
}
