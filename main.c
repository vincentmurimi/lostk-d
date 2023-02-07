#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A program to solve quadratic equations

    float a,b,c,root1,root2;

    printf ("Enter the value of a,\n");
    scanf("%f",&a);


     printf ("Enter the value of b,\n");
    scanf("%f",&b);

     printf ("Enter the value of c,\n");
    scanf("%f",&c);


    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);


    printf("%f value of root1,\n",root1);
    printf("%f value of root2,\n",root2);




    return 0;
}
