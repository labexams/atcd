#include<stdio.h>
void main(){
    char in[100],f='A';
    printf("Enter string:");
    gets(in);
    for(int i=0;in[i]!='\0';i++){
        switch (f) {
            case 'A':f=in[i]=='a'?'B':'D';
                break;
            case 'B':f=in[i]=='a'?'C':'E';
                break;
            case 'C':f=in[i]=='a'?'A':'F';
                break;
            case 'D':f=in[i]=='a'?'E':'A';
                break;
            case 'E':f=in[i]=='a'?'F':'B';
                break;
            case 'F':f=in[i]=='a'?'D':'C';
        }
    }
    if(f=='A')printf("\nAccepted");
    else printf("\nRejected");
}
