#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
       long long int ts,js,i,c=0;
        scanf("%lld",&ts);
        for(js=1;js<=ts;js++)
        {
            if(js%2==0 && ts%2==0)
            {
                ts=ts/2;
                js=js/2;
            }
            else if(js%2!=0 && ts%2!=0)
            {
            }
            else if(js%2!=0 && ts%2==0)
            {
            }
            else
            {
                c=ts/2;
                break;
            }
        }
        printf("%lld\n",c);
    }
	return 0;
}

