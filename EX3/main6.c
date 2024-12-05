#include <stdio.h>

int main(){
    int i = 3000;
    int total = 0;
    if (i<=1500){
        total +=70;
    }else {
        if(i%100){
            total += 70+(i-1500)/100*10+10;

        }else{
            total +=70+(i-1500)/100*10;
        }
    }
    printf("%d元\n",total);
    return 0;
}