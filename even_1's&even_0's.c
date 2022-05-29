#include<stdio.h>
void main(){
    char in[100],f='A';
    printf("Enter string:");
    gets(in);
    for(int i=0;in[i]!='\0';i++){
        switch (f) {
            case 'A':f=in[i]=='0'?'B':'C';
                break;
            case 'B':f=in[i]=='0'?'A':'D';
                break;
            case 'C':f=in[i]=='0'?'D':'A';
                break;
            case 'D':f=in[i]=='0'?'C':'B';
        }
    }
    if(f=='A')printf("\nAccepted");
    else printf("\nRejected");
}
