#include "header.h" 
 

// void Echo(char str[]){
//     int i = 5;
//     int c = 0,d = 0;
     
//     // printf("%s\n",str+5);
//     while(str[i]!=0)
//     {
//         if(str[i]==34 && c == 0){
//             c = 1;
//         } 
//         else if(str[i]==34 && c == 1){
//             c = 0;
//         }
//         else if(c==1){
//             if(d==0 && str[i]==32){
//                 printf("%c",str[i]);
//                 d = 1;
//             }
//             else{
//                 printf("%c",str[i]);
//                 d = 0;
//             }
//         }
//         else printf("%c",str[i]);
//     }
// }

void Echo(char str[], int i){
    i = i+4;
    while (str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    if(str[i] != 34){
        const char s[2] = " ";
        char *token;
        token = strtok(str+i, s);
        while( token != NULL ) { 
            printf( " %s", token ); 
            token = strtok(NULL, s); 
        }
    }
    else{
        int ix = i+1;
        while(str[ix]!=34){
            printf("%c",str[ix]);
            ix++;
        }
        ix++;
        // printf("\n");
        if(ix < strlen(str)){
            const char s[2] = " ";
            char *token;
            token = strtok(str+ix, s);
            while( token != NULL ) { 
                printf( " %s", token ); 
                token = strtok(NULL, s); 
            }
        }

    }
    printf("\n");
} 


// int main(){
//     char str[999];
//     // scanf("%[^\n]s",str);
//     getline;
//     printf("%s\n",str);
//     Echo(str);

// }