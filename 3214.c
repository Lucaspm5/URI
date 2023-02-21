#include <stdio.h>

int main(void)
{
    int E, F, C;
    scanf("%d %d %d", &E, &F, &C);

    int total_vazia = E + F;
    int total_bebidas = 0;

    while (total_vazia >= C)
    {
        int new_drinks = total_vazia / C;
        total_bebidas += new_drinks;
        total_vazia = total_vazia % C + new_drinks;
    }

    printf("%d\n", total_bebidas);
    return 0;
}
