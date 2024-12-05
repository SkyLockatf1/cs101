#include <stdio.h>

int main(){
    int i = 151;
    int total = 0;
    if(i < 30){
        printf("免費");
    }else if(i >= 480){
        printf("240元");        
    }else{
        if(i%30){
            total = ((i/30))*30+30;
        }else{
            total = ((i/30))*30;
        }
        printf("%d 元", total);
    }
}