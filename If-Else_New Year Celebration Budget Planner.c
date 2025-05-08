#include <stdio.h>
int main(){
    int budget,numofGuests,fCPG,dc,Mcost,ext,Tcost;
     scanf("%d",&budget);
     scanf("%d",&numofGuests);
     scanf("%d",&fCPG);
     scanf("%d",&dc);
     scanf("%d",&Mcost);
     scanf("%d",&ext);
    Tcost = (fCPG*numofGuests) + dc + Mcost + ext;
    if(budget >= Tcost){
        if (numofGuests > 5 && numofGuests <= 50){
            if(fCPG*numofGuests < 0.5*budget || dc < 0.3*budget){
                if(numofGuests > 25){
                    if(Mcost >0){
                        printf("Celebration Approved");
                    }
                    else{
                        printf("Celebration Denied");
                    }   
                }
                else{
                    printf("Celebration Approved");
                }
            }
            else{
                printf("Celebration Denied");
                return 0;
            }
        }
        else{
                printf("Celebration Denied");
            return 0;
        }
    }
    else{
        printf("Celebration Denied");
    }
    return 0;
}