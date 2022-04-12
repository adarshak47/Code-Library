#include <stdio.h>
int fun(long long int x)
{
    int r,d=0;
    while(x>0)
    {
        r=x%10;
        d=d+r;
        x=x/10;
    }
    return(d);
}
int main(void) 
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        int n,s1=0,s2=0;
        long long int a,b,i;
        scanf("%d ",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld %lld",&a,&b);
            a=fun(a);
            b=fun(b);
            if(a>b)
            s1++;
            else if(b>a)
            s2++;
            else
            {
                s1++;
                s2++;
            }
        }
        if(s1>s2)
        printf("0 %d\n",s1);
        else if(s2>s1)
        printf("1 %d\n",s2);
        else
        printf("2 %d\n",s1);
    }
	return 0;
}

