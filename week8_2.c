#include<stdio.h>
int main()
{
    int a,b=0;
    for(int i=1; i<=4 ; ++i)
    {
        printf("Enter ur num : ");
        scanf("%d",&a);
        if(a%2==0)
        {++b;}
    }
    printf("%d",b);
    return 0;
}