#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]){
    if(argc!=2)puts("wrong cmd ! \n");
    int i,a[99],L;
    L=strlen(argv[1]);
    for(i=0;i<=L;i++){
        a[i]=argv[1][i];
    }

    for(i=0;i<=L;i++){
       printf("%c",a[i]+1);

    }
    
    printf("\n%d letters\n",L);
    return 0;
}