#include<stdio.h>
#include<string.h>
void q0(char c);
void q1(char c);
void q2(char c);
void q3(char c);
int dfa=0;
void check(char str[]);

int main(){
    char string[100];
    char choice;
    while (1)
    {

        printf("Enter the string: ");
        scanf("%s", string);
        check(string);
        if (dfa == 2)
        {
            printf("String accepted\n");
        }
        else
        {
            printf("String not accepted\n");
        }
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);
        if (choice == 'N' || choice == 'n')
        {
            break;
        }
        
    }
}

void check(char str[]){
    int i,len=strlen(str);
    for(i=0;i<len;i++){
        if(dfa==0){
            q0(str[i]);
        }
        else if(dfa==1){
            q1(str[i]);
        }
        else if(dfa==2){
            q2(str[i]);
        }
        else{
            q3(str[i]);
        }
    }
}

void q0(char c){
    if(c=='a' || c=='b'){
        dfa=1;
    }
    else{
        dfa=3;
    }
}
void q1(char c){
    if(c=='a' || c=='b'){
        dfa=1;
    }
    else{
        dfa=3;
    }
}
void q2(char c){
    if(c=='a' || c=='b'){
        dfa=2;
    }
    else{
        dfa=3;
    }
}
void q3(char c){
    dfa=3;
}