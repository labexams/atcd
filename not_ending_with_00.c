#include<stdio.h>
void main(){
    char in[100],f='A';
    printf("Enter string:");
    gets(in);
    for(int i=0;in[i]!='\0';i++){
        switch (f) {
            case 'A':f=in[i]=='0'?'B':'A';
                break;
            case 'B':f=in[i]=='0'?'C':'A';
                break;
            case 'C':f=in[i]=='0'?'B':'A';
        }
    }
    if(f=='B' || f=='A')printf("\nAccepted");
    else printf("\nRejected");
}
