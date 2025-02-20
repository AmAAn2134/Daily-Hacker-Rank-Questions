#include <stdio.h>

int main() {
    int num,flag=0;
    scanf("%d",&num);
    if(num>0){
    if(num % 2 ==0 && num > 10){
        flag++;
    }
     if(num % 3 ==0 && num > 15){
        flag++;
    }
     if(num % 7 ==0){
        flag++;
    }
    
    if(flag == 3){
                printf("The verdict for the number %d is: SUPERNATURAL",num);
    }
    else if (flag == 2){
                printf("The verdict for the number %d is: MIRACULOUS",num);
    }
    else if (flag == 1){
                printf("The verdict for the number %d is: MAGICAL",num);
    }
    else{
                printf("The verdict for the number %d is: NORMAL",num);
    }
    }
    else {
                printf("The verdict for the number %d is: INVALID",num);
    }
    return 0;
}