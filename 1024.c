#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    int casos;
    scanf("%d", &casos);
    getchar();

    for(int i = 0; i < casos; i++) {
        char frase[1001];
        fgets(frase, 1001, stdin);
        int tamanho = strlen(frase);
        if (frase[tamanho-1] == '\n') {
            frase[tamanho-1] = '\0';
            tamanho--;
        }
        for (int j = 0; j < tamanho; j++) {
            if (isalpha(frase[j])) {
                frase[j] += 3;
            }
        }
        for (int j = 0, k = tamanho-1; j < k; j++, k--) {
            char temp = frase[j];
            frase[j] = frase[k];
            frase[k] = temp;
        }
        int metade = tamanho/2;
        for (int j = metade; j < tamanho; j++) {
            frase[j] -= 1;
        }
        printf("%s\n", frase);
    }
    return 0;
}