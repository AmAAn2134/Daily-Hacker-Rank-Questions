#include <stdio.h>

int main() {
int num,num1,num2;
    scanf("%d",&num);
    // num 0
    if(num == 1){ 
        printf("Player chooses the Left path.\n");
         scanf("%d",&num1);
        // num1
        if(num1==1){
            printf("Poor choice, Game Over!");
            return 0;
        }
    // num2
         else if(num1==2){
             printf("Player found a bridge.\n");
             scanf("%d",&num2);
             if(num2==1) printf("Player crosses the bridge safely.\n");
             if(num2==2) {
                 printf("Poor luck, Game Over!");
             return 0;
             }
        }
    }
         
        else  if(num == 2){
        printf("Player chooses the Middle path.\n");
        int sol;
         scanf("%d",&sol);
        
        if(sol==582){
            printf("Player solved the puzzle.\n");
        }
             else{
                 printf("Foolish player, Game Over!");
                 return 0;
             }
        }
    else if(num == 3){
        printf("Player chooses the Right path.\n");
        // printf("What number comes next in the sequence: 2, 6, 12, 20, __?");
        int puzzle;
         scanf("%d",&puzzle);
        if(puzzle == 30)
        {
            printf("Player solved the puzzle.\n");
        }
             else{
                 printf("Foolish player, Game Over!");
                 return 0;
             }
            }
                int fr;
         scanf("%d",&fr);
                if(fr == 1) {
                    printf("All that glitters is not gold, Game Over!");
                    return 0;
                }
               else if(fr == 2) {
                    printf("All your efforts were for nothing, Game Over!");
                    return 0;
                }
               else  if(fr == 3) {
                   printf("Congratulations!! You won the treasure.");
    return 0;
               }
}