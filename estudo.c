#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escrever(char *f);

int main(void)
{
    char nome[] = {"Conto.txt"};

    escrever(nome);

    return 0;
}

void escrever(char *f)
{
    FILE *arq = fopen(f,"w");

    char texto[500];

    if(arq)
    {
        printf("DIGITE UMA FRASE OU UM CARACTER PARA FINALIZAR\n");
        fgets(texto,500,stdin);

        while(strlen(texto) > 1)//se for == ou != a 1 ele para
        {
            fputs(texto, arq);//usada para escrever uma string em um arquivo
            //fputc('\n',arq);
            fgets(texto,500,stdin);
            //scanf("%*c");
        }
        fclose(arq);
    }else{
        printf("ERROR!\n");
    }
}