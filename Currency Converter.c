#include <stdio.h>
int main()
{
    float rupees;
    printf("ENTER THE AMOUNT IN RUPEES: ");
    scanf("%f",&rupees);
    printf("RUPEES TO DOLLARS: %f \n",rupees*0.012);
    printf("RUPEES TO EUROS: %f \n",rupees*0.011);
    printf("RUPEES TO YEN: %f \n",rupees*1.77);
    printf("RUPEES TO RUBEL: %f \n",rupees*1.16);
    return 0;
}