#include<stdio.h>
int main(void){
    int i;
    puts("write anything to make enigma\n");
    while(1){
    i=getchar();
    i++;
    if(i==11)continue;/*since ASC11 for new line character is 10*/
    printf("%c",i);
    }

    return 0;}
