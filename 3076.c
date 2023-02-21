#include <stdio.h>
#include <math.h>

int main(void)
{
    int ano;
    while (scanf("%d", &ano) != EOF)
    {
        int seculo = ceil((double) ano / 100.0);
        printf("%d\n", seculo);
    }
    return 0;
}
