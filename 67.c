#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the value of N = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {

        for(col=row; col>=1; col--)
        {
            printf("%d",col);
        }





        printf("\n");

    }



return 0;


}

