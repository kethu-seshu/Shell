#include "header.h" 
 
#include "Display.c"
#include "Echo.c"
#include "PWD.c"
#include "CD.c"


int main(){
    char main_dir[1000],str[99999];
    getcwd(main_dir, sizeof(main_dir));
    // printf(" hi\n");
    while(1){
        display(main_dir);
        scanf("%[^\n]%*c", str);
        int i = 0;
        while (str[i] == ' ' || str[i] == '\t')
        {
            i++;
        }
        // printf("%c\n",str[i]);
        if(str[i]== 'e' && str[i+1]== 'c' &&str[i+2]== 'h' &&str[i+3]== 'o'){
            Echo(str,i);
        }
        else if(str[i]== 'p' && str[i+1]== 'w' &&str[i+2]== 'd'){
            PWD();
        }
        else if(str[i]== 'c' && str[i+1]== 'd'){
            cd(str,main_dir,i);
        }
        // else if(str[i] == 0);
        else{
            printf("%s : command not found\n",str);
            // perror("");
            // break;

        }
        // if(str == )
        // printf("\n");
    }
}
