#include<stdio.h>
int main(void){
    int a[100],i;
    puts("type smt within 100 characters");
    for(i=0;i<100;i++){
        a[i]=getchar();
        if(a[i]==11)continue;
        printf("%c",a[i]+1);
    }   
    return 0;
}