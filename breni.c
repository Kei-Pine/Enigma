#include<stdio.h>
int main(void){
    int eni;
    puts("type in enigma\n");
    while(1){
        eni=getchar();
        eni--;
        if(eni==9)continue;
        printf("%c",eni);

    }
    return 0;}
