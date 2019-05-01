#include<stdio.h>
int even(int a[])
{
    int i,s=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
    }
    return s;
}
int odd(int b[])
{
    int i,t=0;
    for(i=0;i<10;i++)
    {
        if(b[i]%2==1)
            t=t+b[i];
    }
    return t;
}
int main()
{

    int i,arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("All even addition is: %d\n",even(arr));
    printf("All odd addition is: %d",odd(arr));

}
