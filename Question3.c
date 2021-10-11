#include<stdio.h>
//Ayush Sharma
//scholar id:2012105
int main()
{
    int a,d;
    printf("Enter the order of 2D matrix\n");
    scanf("%d %d",&a,&d);
    int dha[a][d];
    printf("Enter the 2D array\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
            scanf("%d",&dha[i][j]);
    }
 int n=a*d;
    int b[n];
    int k=0;
    printf("Inital 2D Array:\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
            printf("%d ",dha[i][j]);
        printf("\n");
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
            b[k]=dha[i][j];
            k++;
        }
    }
    printf("\n Final 1D array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
}
