#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        int n,i,c1=0,a[10000],c2=0;
        scanf("%d ",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d ",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==5)
            {
                c1=c1+1;
            }
            else if(a[i]==10)
            {
                if(c1<1)
                {
                    break;
                }
                else
                {
                    c1=c1-1;
                }
                c2++;
            }
            else if(a[i]==15)
            {
                if(c2>=1)
                {
                    c2=c2-1;
                }
                else if(c1>=2)
                {
                    c1=c1-2;
                }
                else
                {
                    break;
                }
            }
        }
        if(i==n)
        printf("YES\n");
        else
        printf("NO\n");
    }
	return 0;
}

