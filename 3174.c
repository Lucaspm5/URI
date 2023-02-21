#include <stdio.h>
#include <string.h>

int main() 
{
    int n, i, h, total_presentes = 0;
    char nome[100], grupo[100];
    int total_bonecos = 0, total_arquitetos = 0, total_musicos = 0, total_desenhistas = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        scanf("%s %s %d", nome, grupo, &h);

        if (strcmp(grupo, "bonecos") == 0) 
        {
            total_bonecos += h;
        }
        
        else if (strcmp(grupo, "arquitetos") == 0) 
        {
            total_arquitetos += h;
        } 
        
        else if (strcmp(grupo, "musicos") == 0) 
        {
            total_musicos += h;
        } 
        
        else if (strcmp(grupo, "desenhistas") == 0) 
        {
            total_desenhistas += h;
        }
    }

    total_presentes += total_bonecos / 8;
    total_presentes += total_arquitetos / 4;
    total_presentes += total_musicos / 6;
    total_presentes += total_desenhistas / 12;

    printf("%d\n", total_presentes);

    return 0;
}
