#include <iostream>
using namespace std;

int main() {


    int t;
    scanf("%d ",&t);
    while(t--)
    {
        long long int n,k,a[1000],min=99999999,j;
        scanf("%lld %lld ",&n,&k);
        for(int i=0;i<n;i++)
        {
            scanf("%lld ",&a[i]);
            if(k%a[i]==0 && k/a[i]<min)
            {
                min=k/a[i];
                j=a[i];
            }
            
        }
        if(min==99999999)
        printf("-1\n");
        else
        printf("%d\n",j);
        
    }
	return 0;
}
