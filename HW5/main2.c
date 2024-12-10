#include <stdio.h>

int main(){
    double PI = 0;
    int sign = 1; // 1=+ -1=-
    int x = 300000;
    for(int i=1;i<=x;i+=2){
        if(sign==1){
            PI +=4.0/i*sign;
            sign = -1;
        }else{
            PI += 4.0/i*sign;
            sign = 1;
        }
        if((int)(PI*100000+0.5)/100000.0 ==3.14159){
            printf("x:%d Value:%.5f (5 places of decimals)\n",i,PI);
            break;
        }
    }
    return 0;
}