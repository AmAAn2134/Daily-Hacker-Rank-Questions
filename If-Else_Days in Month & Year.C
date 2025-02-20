#include <stdio.h>
#include <string.h>

int main() {
 int year,months;
    scanf("%d",&months);
    scanf("%d",&year);
    if(months>=1 && months<=12 && year>=1){
        
    
      if(months==4 || months==6 || months==9 || months==11 ){
          printf("30");
      }
        else if(months == 2){
            if(year%4==0){
                if(year%100==0){
                    if(year%400==0){
                        //leap
                        printf("29");
                    }
                    else{
                        //no
                        printf("28");
                    }
                }
                else{
                    //leap
                    printf("29");
                }
            }
            else{
                //no leap
                printf("28");
            }
           
          
        }
       else{
           printf("31");
       }
    }
        if(months<1 || months>12){
            printf("Invalid Month\n");
        }
        if(year<=0){
            printf("Invalid Year\n");
        }
    return 0;
}