#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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


int main(int argc, char *argv[]){
    if(argc!=2)puts("wrong cmd!");

    int a[99],L,i;
    L=strlen(argv[1]);
    for(i=0;i<L;i++){
        a[i]=argv[1][i];
    }
    for(i=0;i<L;i++){
        printf("%c",a[i]+1);   
    }


    puts("\nType in words to break the code\n");
    eni2();
    return 0;
}
