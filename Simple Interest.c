#include <stdio.h>
int main()
{
    float SI,P,R,T;
    printf("ENTER THE VALUE OF P: ");
    scanf("%f",&P);
    printf("ENTER THE VALUE OF R: ");
    scanf("%f",&R);
    printf("ENTER THE VALUE OF T: ");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("THE ANSWER IS: %f",SI);
}