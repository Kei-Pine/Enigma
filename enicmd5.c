#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){

        FILE *fin, *fout;
                
        if(argc!=3)puts("wrong cmd!\nformat::cmdname inputFile outputFile");
        if((fin=fopen(argv[1],"r"))== NULL){
                printf("couldnt open\n");
                return 1;
        }
        fseek(fin, 0, SEEK_END);
        long file_length = ftell(fin);
        
        if((fout=fopen(argv[2],"w"))==NULL){
                printf("couldnt open %s\n",argv[2]);
                return 1;
        }
        fseek(fin,0,SEEK_SET);
        int x[file_length],i,g;
        printf("Type in your secret digit(natural number)");
        scanf("%d",&g);
                
            for(i=0;i<=file_length;i++){
            x[i]=fgetc(fin);
            puts("still working\n");
            }
        
   
            for(i=0;i<=file_length;i++){
                fprintf(fout,"%c",x[i]+g);
                }
            printf("%d letters icluded\n",i);
            printf("File length: %ld bytes\n", file_length);
    


        fclose(fin);
        fclose(fout);
        return 0;
        }