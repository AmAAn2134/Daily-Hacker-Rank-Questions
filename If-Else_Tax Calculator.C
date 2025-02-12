#include <stdio.h>

int main() {
    
    float tax,income;
    scanf("%f",&income);
    
    
    if(income<=250000 && income>=0){
        tax=0.00;
        printf("%0.2f",tax);
    }
    else if(income>250000 && income<=500000){
        tax=(income-250000)*.05;
        printf("%0.2f",tax);
    }
    else if(income>500000 && income<=1000000){
        tax= (.05*250000) + (income-500000)*.20;
       printf("%0.2f",tax);
    }
    
    else if(income >1000000){
        tax=(.05*250000) + (.2 * 500000) + (income-                 1000000)*.30;
        printf("%0.2f",tax);
    } 
     
    else {
        printf("INVALID");
    }
    
    return 0;
}