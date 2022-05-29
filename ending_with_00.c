#include<stdio.h>
void main(){
    char in[100], f='A';
    printf("Enter the string:");
    gets(in);
    for(int i=0;in[i]!='\0';i++){
        switch (f) {
            case 'A':f = in[i]=='0'?'B':'A';
                break;
            case 'B':f = in[i]=='0'?'B':'C';
                break;
            case 'C':f = in[i]=='0'?'B':'A';
                break;
        }
    }
    if(f=='C')printf("\nAccepted");
    else printf("\nRejected");
}
