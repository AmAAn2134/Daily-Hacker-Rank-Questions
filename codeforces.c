/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int count =0;
long long power(int a,int b){
    count++;
    if(b==0) return 1;
    if(b==1) return a;
    int midp=power(a,b/2);
    if(b%2==0) return midp*midp;
    else midp*midp*a;
}
int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    long long ans=power(a,b);
    printf("%lld",ans);
    printf("\n%d",count);
  return 0;
}
// 3
// 5
// 1 2 3 4 5
// 3
// 1 2 2
// 4
// 1 1 1 1