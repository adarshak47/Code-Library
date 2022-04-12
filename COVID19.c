#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int a[10];
    int top;
};
void push(struct stack *stk,int data)
{
    stk->top++;
    stk->a[stk->top]=data;
}
int stacktop(struct stack stk)
{
    return(stk.a[stk.top]);
}
int isempty(struct stack stk)
{
    return(stk.top==-1);
}
int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        struct stack stk;
        struct stack stkm;
        stk.top=-1;
        stkm.top=-1;
        int n,i,*x,a,b,m;
        scanf("%d",&n);
        x=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<n;i++)
        {
            a=i;
            b=i+1;
            m=1;
            while((b!=n) && ((x[b]-x[a])<3))
            {
                m++;
                a++;
                b++;
            }
            a=i;
            b=i-1;
            while((b>-1) && ((x[a]-x[b])<3))
            {
                m++;
                a--;
                b--;
            }
            if((isempty(stk)) || (m>stacktop(stk)))
            push(&stk,m);
            if((isempty(stkm)) || (m<stacktop(stkm)))
            push(&stkm,m);
        }
        
            printf("%d %d\n",stacktop(stkm),stacktop(stk));

    }
          	return 0;
}

