#include<stdio.h>
int main()
{
    int i,c=1,n,j,k,ch;
    char a[32];
    do
    {for(i=0;i<32;i++)
        a[i]=' ';
    n=random(12,21);
    a[0]=random(97,26);
    do
    {
        i=random(1,n-3);
        if(a[i]==' ')
        {
            a[i]=random(97,26);
            break;
        }
    }while(c==1);
    do
    {
        i=random(1,n-3);
        if(a[i]==' ')
        {
            a[i]=random(65,26);
            break;
        }
    }while(c==1);
    do
    {
        c=0;
        i=random(1,n-3);
        if(a[i]==' ')
        {
            a[i]=random(48,10);
            break;
        }
    }while(c==1);
    c=0;
    do
    {
         if(c==1)
                break;
        i=random(1,n-3);
        if(a[i]==' ')
        {
            for(k=0;;)
            {
                j=random(33,94);
                if((j>=48&&j<=57)||(j>=65&&j<=90)||(j>=97&&j<=122))
                   c=0;
                else
                {
                    c=1;
                    a[i]=j;
                    break;
                }
        }}
    }while(c==1);
    a[n-1]=random(65,26);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
            for(k=0;;)
        {
            j=random(33,94);
            a[i]=j;
            break;
        }
        }
    }
    for(i=0;i<32;i++)
    printf("%c ",a[i]);
    printf("\ngenerate more (1/0)");
    scanf("%d",&ch);
    }while(ch!=0);
    return 0;
}

int random(int a,int b)
{
    int *p,i;
        p=(int*)malloc(sizeof(char));
        i=((*p)%b)+a;
    return i;
}

