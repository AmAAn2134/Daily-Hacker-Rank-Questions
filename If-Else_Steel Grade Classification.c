#include <stdio.h>

int main() {
int hardness,TS;
    float carbon;
    
    scanf("%d",&hardness);
    scanf("%f",&carbon);
    scanf("%d",&TS);
    if(hardness > 50 && carbon < 0.7 && TS> 5600){
        printf("The grade of the steel is: 10\n");
        printf("All of the conditions met.");
    }
     if(hardness > 50 && carbon < 0.7 && TS <= 5600){
        printf("The grade of the steel is: 9\n");
        printf("Two conditions met.");
    }
    if(hardness > 50 && carbon >= 0.7 && TS> 5600){
        printf("The grade of the steel is: 7\n");
        printf("Two conditions met.");
    }
    if(hardness <= 50 && carbon < 0.7 && TS> 5600){
        printf("The grade of the steel is: 8\n");
        printf("Two conditions met.");
    }
    if(hardness > 50 && carbon >=0.7 && TS< 5600){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
    }
    if(hardness <= 50 && carbon >=0.7 && TS> 5600){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
    }
    if(hardness <= 50 && carbon < 0.7 && TS< 5600){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.");
    }
    if(hardness <=50 && carbon >= 0.7 && TS < 5600){
        printf("The grade of the steel is: 5\n");
        printf("None of the conditions met.");
    }
    
    return 0;
}