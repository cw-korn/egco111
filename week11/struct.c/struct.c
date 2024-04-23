#include <stdio.h>
#include <math.h>

typedef struct
{
   int activeP, reactiveP;
} apparentP;

void read(apparentP *);


main()
{
    apparentP x[2];
    read(x);
    printf("%d + j%d\n", x[0].activeP, x[1].reactiveP);
    printf("%f kVA\n", sqrt((x[0].activeP)*(x[0].activeP)+(x[1].reactiveP)*(x[1].reactiveP)));
}

void read(apparentP px[])
{
        printf("Active Power kW: ");
        scanf("%d",&px[0].activeP);
        printf("Reactive Power kVar: ");
        scanf("%d", &(px+1)->reactiveP);
}