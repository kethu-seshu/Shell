#include "header.h" 

void display(char main_dir[1000]){

    char sys_name[100],user_name[100],disp_dir[1000];
    

    if(gethostname(sys_name, sizeof(sys_name))==-1){
        printf("invalid host name\n") ;
        perror("gethostname(): ") ;
        printf("\n");
    }

    uid_t uid = getuid();
    struct passwd* user_details = getpwuid(uid);

    if(user_details){

        strcpy(user_name,user_details->pw_name);
    }
    else{

        perror("getpwuid() :");
    }

    // getlogin_r(user_name, sizeof(user_name));
    // printf("%s:::::\n",user_name);
    getcwd(disp_dir, sizeof(disp_dir));

    int stat=0;

    if(strcmp(main_dir,disp_dir) < 0){

          for(int i=0;i<strlen(main_dir);++i){
              if(main_dir[i]!=disp_dir[i]){
                  stat=1;
                  break;
              }
          }
          if(stat==0){
             printf("<%s@%s:~/%s>", user_name, sys_name,disp_dir+strlen(main_dir)+1);
          }
          else{
              printf("<%s@%s:%s>", user_name, sys_name,disp_dir);
          }

    }
    else if(strcmp(main_dir,disp_dir) == 0){
         printf("<%s@%s:~>", user_name, sys_name);
    }
    else{
      printf("<%s@%s:%s>", user_name, sys_name,disp_dir);
        // printf(" : ");
    }

   //printf("\n");
    
}

// int main()
// {

//     // display();
// }

