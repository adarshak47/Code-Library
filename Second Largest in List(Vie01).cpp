#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
#define a LLONG_MIN
// unsigned long long c[a]; 
int main() {

    double max1=a,max2=a;
    long long n,i,c=0;
    scanf("%lld",&n);
    double b[n];
    for(i=0;i<n;i++)
    {
        scanf("%lf",&b[i]);
        if(b[i]==b[0])
            c++;
    }
    if(n<2)
    {
        printf("%d",-1);
        return 0;
    }
    if(c==n)
    {
        printf("%d",-1);
        return 0; 
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>max1)
        {
            max1=b[i];
        }
            
    }
   
     for(i=0;i<n;i++)
    {
        if(b[i]>max2 && b[i]<max1)
        {
            max2=b[i];
        }
            
    }
    printf("%0.0lf\n",max2);
    return 0;
}
