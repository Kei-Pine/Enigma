#include<stdio.h>

int eni1(void){
    int a[100],i;
    for(i=0;i<100;i++){
        a[i]=getchar();
        if(a[i]==10)break;
    }   
    
    puts("Here's new enigma\n");
    for(i=0;i<100;i++){
        printf("%c",a[i]+1);
        if(a[i]==10)break;
    }
    puts("\n");
}
int eni2(void){
    int a[100],i;
        for(i=0;i<100;i++){
            a[i]=getchar();
            if(a[i]==10)break;
        }   
        for(i=0;i<100;i++){
            printf("%c",a[i]-1);
            if(a[i]==10)break;
        }
    puts("that's it!");    
}

int main(void){
    puts("type smt within 100 characters");
    eni1();
    puts("type in enigma");
    eni2();

    return 0;
}