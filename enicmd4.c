#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){

        FILE *fin, *fout;
                int x[1000],i,g;
        if(argc!=3)puts("wrong cmd!\nformat::cmdname inputFile outputFile");
        if((fin=fopen(argv[1],"r"))== NULL){
                printf("couldnt open\n");
                return 1;
        }
                if((fout=fopen(argv[2],"w"))==NULL){
                printf("couldnt open %s\n",argv[2]);
                return 1;
        }

            printf("Type in your secret digit(natural number)");
            scanf("%d",&g);

                for(i=0;i<1000;i++){
            x[i]=fgetc(fin);
            if(x[i]==EOF)break;
                }

                for(i=0;i<1000;i++){
            if(x[i]==EOF)break;
            fprintf(fout,"%c",x[i]+g);

        }


        fclose(fin);
        fclose(fout);
        printf("%d letters icluded\n",i);
        return 0;
        }
