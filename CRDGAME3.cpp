#include <iostream>
using namespace std;

int main() {
 int t;
    scanf("%d ",&t);
    while(t--)
    {
        int p,r,c,d;
        scanf("%d %d ",&p,&r);
        c=p/9;
        d=r/9;
        if(p%9!=0)
        c++;
        if(r%9!=0)
        d++;
        if(c<d)
        printf("0 %d\n",c);
        else
        printf("1 %d\n",d);
    }
	return 0;
}
