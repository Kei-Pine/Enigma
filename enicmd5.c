#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
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
        int c,i,g;
        char spin[4] = {'|', '/', '-', '\\'};
        printf("Type in your secret digit(natural number)");
        scanf("%d",&g);
                
            for(i=0;i<file_length;i++){
            c=fgetc(fin);
            printf("\r Loading %c %d %%", spin[i % 4],(i*100/file_length)+1);
            fflush(stdout);
            Sleep(file_length);

            fprintf(fout,"%c",c+g);
            }
        
        printf("\n All Done!\n");
            printf("%d letters icluded\n",i);
            printf("File length: %ld bytes\n", file_length);
    


        fclose(fin);
        fclose(fout);
        return 0;
        }
