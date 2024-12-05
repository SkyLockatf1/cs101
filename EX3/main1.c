# include <stdio.h>
int main(){
    int i = 8;
    if(i > 0 && !(i & (i - 1))){
        printf("%s\n","是");
    }else{
        printf("%s\n","否");
    }
    return 0;   
}