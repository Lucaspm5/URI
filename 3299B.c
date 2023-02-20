#include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    int i, len, unlucky = 0;

    scanf("%s", n);

    len = strlen(n);
    for (i = 0; i < len - 1; i++) 
    {
        if (n[i] == '1' && n[i + 1] == '3') 
        {
            unlucky = 1;
            break;
        }
    }

    if (unlucky) {
        printf("%s es de Mala Suerte\n", n);
    } else {
        printf("%s NO es de Mala Suerte\n", n);
    }

    return 0;
}