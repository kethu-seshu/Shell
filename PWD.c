#include <stdio.h>
void PWD(){   
    char pwd[1000];

    if(getcwd(pwd,sizeof(pwd))==0){
        printf("Path Doesn't Exist");
        perror("PWD():");
    }
    else{
        printf("%s",pwd);
    }
    printf("\n");
} 