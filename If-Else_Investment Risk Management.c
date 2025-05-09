#include <stdio.h>

int main() {
    int age,income,rt;
    scanf("%d",&age);
    scanf("%d",&income);
    scanf("%d",&rt);
    
     if(age < 30){
       printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
 }
    else if(age>=30 && age<=50){
        if(income > 75000){
            if(rt == 3){
                  printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            }
        else{
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
    }
    else if(income <=30000){
         if(rt == 1)printf("Low Risk Portfolio: Suitable for conservative investments.");
         else if(rt == 2)printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
        else if(income <=75000){
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }

    }
    else if(age >50){
        if(income > 75000){
            if(rt ==3){
               printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
               // printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
             else{
                   printf("Low Risk Portfolio: Suitable for conservative investments.");
        }
  }
            else{
                   printf("Low Risk Portfolio: Suitable for conservative investments.");
            }      
    }
    return 0;
}