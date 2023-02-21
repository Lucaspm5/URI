#include <stdio.h>
#include <math.h>

typedef struct
{
    double a,b,c;
}pontos;
/////////////////////
typedef struct
{
    double x1,x2;
}resultado;
/////////////////////
int main(void)
{
    pontos p;
    resultado r;

    scanf("%lf %lf %lf",&p.a,&p.b,&p.c);

    double delta = pow(p.b,2) - 4 *p.a *p.c;

    if(p.a == 0|| delta < 0)
    {
        printf("Impossivel calcular\n");
    }else{
        r.x1 = (-p.b + sqrt(delta)) / (2 * p.a);
        r.x2 = (-p.b - sqrt(delta)) / (2 * p.a);

        printf("R1 = %.5lf\n", r.x1);
        printf("R2 = %.5lf\n", r.x2);
    }
    return 0;
}