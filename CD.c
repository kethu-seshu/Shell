#include "header.h" 
char curr_dir[500];
char  prev_dir[500];

void cd(char* str, char main_dir[1000],int i )
{
    i = i+2;
    while (str[i] == ' ' || str[i] == '\t' )
    {
        i++;
    }
    if(strcmp(str+i,"~")==0 || (strlen(str)==2))
    {
        getcwd(prev_dir,sizeof(prev_dir));
        int stat=chdir(main_dir);
        if(stat!=0){
            printf("can't change directory");
            perror("cd ~ :");
            printf("\n");
        }   
        // printf("\n");
    }
    

    else if(strcmp(str+i,"-")==0){     
        
        getcwd(curr_dir,sizeof(curr_dir));
        int stat=chdir(prev_dir);
        if(stat!=0){
            printf("can't change directory");
            perror("cd - :");
            // printf("\n");
        }
        else printf("%s",prev_dir);
        strcpy(prev_dir,curr_dir);
        printf("\n");
    }
    // else if (str+i == 0) ;
    else if(str+i !=""){
        // printf("%d\n",str+i);
        getcwd(prev_dir,sizeof(prev_dir));
        int stat=chdir(str+i);
    
        if(stat!=0){
            printf("can't change directory");
            perror("cd :");
            printf("\n");
        }
        
    }
    

}