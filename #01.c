#include <stdio.h>

int par(int x)
{
    if(x%2 == 0)
    {
        printf("Par\n");
    }else{ 
        printf("Impar\n");
    }
}
int main(void)
{
    int x;
    scanf("%d",&x);
    printf("%d",par(x));
    return 0;
}