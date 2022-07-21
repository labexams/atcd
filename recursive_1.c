#include<stdio.h>
#include<stdlib.h>
char a[50];
int i=0,error;
void E1();
void T();
void T1();
void F();


void E(){
        T();
        E1();
}

void T(){
        F();
        T1();
}

void F(){
        if(a[i]=='('){
                printf("Match (\n");
                i++;
                E();
                if(a[i]==')'){
                        printf("Match )\n");
                        i++;
                }
        }
        else if(a[i]=='i' && a[i+1]=='d'){
                printf("Match id\n");
                i=i+2;
        }
        else{
                printf("The string is not accepted\n");
                exit(0);
        }
}
void T1(){
        if(a[i]=='*'){
                printf("Match *\n");
                i++;
                F();
                T1();
        }
        else error;
}

void E1(){
        if(a[i]=='+'){
                printf("Match +\n");
                i++;
                T();
                E1();
        }
        else error;
}

void main(){
        printf("Enter the string:");
        scanf("%s",&a);
        E();
        if(a[i]=='\0')
                printf("String is Accepted\n");
        else
                printf("String Rejected\n");
}
11. Recursive descent(S->(L)/a     L->L,S/S)
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
