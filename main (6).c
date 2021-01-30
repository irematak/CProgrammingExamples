#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int ha,ma;
printf("Enter hour and minute:");
scanf("%d %d",&ha,&ma);
float angle=(30*ha)-(5.5*ma);
if(angle<0)
    angle+=360;
printf("Angle between hour and minute hands :%.2f",angle);
    return 0;
}