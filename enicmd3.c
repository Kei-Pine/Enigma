#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int eni2(int n,int L){
    int a[100],i;
        for(i=0;i<L;i++){
            a[i]=getchar();
            if(a[i]==10)break;
        }   
        for(i=0;i<L;i++){
            printf("%c",a[i]-n);
        }
    puts("\nthat's it!");    
}


int main(int argc, char *argv[]){
    if(argc!=3)puts("wrong cmd!\nformat::cmdname word NaturalNum");

    int a[99],L,i,n;
    L=strlen(argv[1]);
    n=atoi(argv[2]);
    for(i=0;i<L;i++){
        a[i]=argv[1][i];
    }
    for(i=0;i<L;i++){
        printf("%c",a[i]+n);   
    }

    puts("\nType in words to break the code\n");
    eni2(n,L);
    return 0;
}
