#include<stdio.h>

//Ayush Sharma
//Scholar id :2012105

int main()

{

    char n[500];

    printf("Enter the value\n");

    scanf("%s",n);

    int i=0;

    int d1=0,d2=0;

    while(n[i]!='\0')

    {

        if(n[i]=='.')

        {

            d1++;

            if(n[i+1]!='\0')

            d2=1;

        }

        i++;

    }

    if(d1==1 && d2==1)

    printf("Valid\n");

    else

    printf("Invalid\n");

}

