#include <stdio.h>

int is_fibonacci(int n) 
{
    int a = 0, b = 1, c = 0;
    
    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c == n;
}

int main() 
{
    int k;

    scanf("%d", &k);

    int fib_not = 0, num = 1;

    while (fib_not < k) 
    {
        num++;
        if (!is_fibonacci(num)) 
        {
            fib_not++;
        }
    }

    printf("%d\n", num);

    return 0;
}
