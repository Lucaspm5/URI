#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007

void buscabinaria(unsigned int *notas, unsigned int n, unsigned int k)
{
    int i, j, inicio = 0, fim = k - 1, meio;
    int maiores[k];

    for (i = 0; i < k; i++)
    {
        maiores[i] = notas[i];
    }

    for (i = 1; i < k; i++)
    {
        j = i - 1;
        int chave = maiores[i];
        while (j >= 0 && maiores[j] < chave)
        {
            maiores[j + 1] = maiores[j];
            j--;
        }
        maiores[j + 1] = chave;
    }
    for (i = k; i < n; i++)
    {
        if (notas[i] > maiores[k - 1])
        {
            j = k - 2;
            while (j >= 0 && notas[i] > maiores[j])
            {
                j--;
            }
            j++;
            for (int x = k - 1; x > j; x--)
            {
                maiores[x] = maiores[x - 1];
            }
            maiores[j] = notas[i];
        }
    }

    unsigned long long int soma = 0;

    for (i = 0; i < k; i++)
    {
        soma += maiores[i];
    }

    printf("%llu\n", soma % MOD);
}

int main() 
{
    unsigned n, k, i;
    unsigned notas[1000000];

    while (scanf("%u %u", &n, &k) != EOF)
    {
        for (i = 0; i < n; i++) {
            scanf("%u", &notas[i]);
        }
        buscabinaria(notas, n, k);
    }

    return 0;
}