#include<stdio.h>
//Ayush Sharma
//scholar id:2012105
int main()
{
    char n[1000];
    scanf("%s",n);
    int i=0;
    int ch=0;
    int count=0;
    int idx1=-1,idx2=-1;
    while(n[i]!='\0')
    {
        if((n[i]>='A' && n[i]<='Z') || (n[i]>='a' && n[i]<='z') || (n[i]>='0' && n[i]<='9'))
            ch=1;
        else if((n[i]=='.' || n[i]=='-'  || n[i]=='_' || n[i]=='@') && (i!=0 && n[i+1]!='\0'))
            ch=1;
      else
        {
            ch=-1;
            break;
        }
        if(n[i]=='@')
        {
            count++;
            idx1=i;
        }
        if(count>1)
        {
            ch=-1;
            break;
        }
        if(n[i]=='.')
        {
            idx2=i;
        }
        i++;
    }
    if(idx2-idx1<2)
        ch=-1;
    if(ch==1)
        printf("Valid address of Email\n");
    else
        printf("Invalid address of Email\n");
}
