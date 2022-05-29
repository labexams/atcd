#include<stdio.h>
void main(){
    char in[100],f='A';
    printf("Enter string:");
    gets(in);
    for(int i=0;in[i]!='\0';i++){
        switch (f) {
            case 'A':f=in[i]=='a'?'B':'A';
                break;
            case 'B':f=in[i]=='a'?'C':'F';
                break;
            case 'C':f=in[i]=='a'?'D':'F';
                break;
            case 'D':f=in[i]=='a'?'D':'H';
                break;
            case 'E':f=in[i]=='a'?'B':'A';
                break;
            case 'F':f=in[i]=='a'?'G':'E';
                break;
            case 'G':f=in[i]=='a'?'F':'C';
                break;
            case 'H':f=in[i]=='a'?'G':'E';
        }
    }
    if(f=='E' || f=='D' || f=='G' || f=='H')printf("\nAccepted");
    else printf("\nRejected");
}
