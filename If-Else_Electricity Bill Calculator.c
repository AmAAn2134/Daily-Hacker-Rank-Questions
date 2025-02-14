#include <stdio.h>

int main() {
int n;
    float dis,amt,totalamt;
    scanf("%d",&n);
    if(n>=0 && n<= 100){
        amt = 5*n;
        dis=amt*.10;
        totalamt = amt - dis;
        printf("The electricity bill is: %.2f.",totalamt);
    }
    else if( n>100 && n<=300){
        amt = 5*100 + 7*(n-100);
        if(amt<=1200){
        dis=amt*.10;
        }
        totalamt = amt - dis;
        printf("The electricity bill is: %.2f.",totalamt);
    }
    else if( n>300){
         amt = 5*100 + 7*200 + 10*(n-300);
        totalamt = amt;
        printf("The electricity bill is: %.2f.",totalamt);
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}