#include<stdio.h>
char a[50];
int i=0;
int L(),S(),L1();
void main(){
        printf("Enter the string:");
        scanf("%s",&a);
        S();
        if(a[i]=='\0')
                printf("String is accepted\n");
        else
                printf("String is rejected\n");
}

S(){
        if(a[i]=='('){
                printf("Match (\n");
                i++;
                L();
                if(a[i]==')'){
                        printf("Match )\n");
                        i++;
                }
        }
        else if(a[i]=='a'){
                printf("Match a\n");
                i++;
        }
        else{
                printf("The string is not accepted\n");
        }
}

L(){
        S();
        L1();
}

L1(){
        if(a[i]==','){
                printf("Match ,\n");
                i++;
                S();
L1();
        }
