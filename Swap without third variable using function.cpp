#include <stdio.h>
int swap(int a,int b)

{
    int swap(int a,int b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("TWO SWAPPED NUMBERS:\n%d \n%d",a,b);
}

int main()
{
    int a,b;
    printf("ENTER TWO VALUES \n");
    scanf("%d%d",&a,&b);
    swap(a,b);
}