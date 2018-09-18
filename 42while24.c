#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    //for(k=0;k<5;k++)
    while (k<5)
    {
         //use something different in "while" version
        sum = sum + k;
        k++;
    }

    printf ("sum="); printf ("%d\n",sum);

    //k=5;

    //while (k>0)
    for (k=9; k>0;k--)
    {
        //k=k-1; //use something different in "for" version
        printf ("%6d\n", k);
    }
{
printf ("Blastoff!");
}
}
