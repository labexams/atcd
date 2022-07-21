Lex Program:
%{
#include<stdio.h>
#include "y.tab.h"
%}
%%
[0-9]+ {yylval.dval=atof(yytext);
return DIGIT;
}
\n|. return yytext[0];
%%
  
  
Yacc Program:


%{
#include<stdio.h>
%}
%union
{
double dval;
}
%token <dval> DIGIT
%type <dval> expr
%type <dval> term
%type <dval> factor

%%
line: expr '\n' {printf("%g\n",$1);};
expr: expr '+' term {$$=$1 + $3 ;} | term;
term: term '*' factor {$$=$1 * $3 ;} | factor;
factor: '(' expr ')' {$$=$2 ;} | DIGIT;
%%
int main()
{
yyparse();
}
yyerror(char *s)
{
printf("%s",s);
}








O/P:
[20311A1289@Putty-Server ~]$ vi yacc.l
[20311A1289@Putty-Server ~]$ lex yacc.l
[20311A1289@Putty-Server ~]$ vi yacc.y
[20311A1289@Putty-Server ~]$ yacc -d yacc.y
[20311A1289@Putty-Server ~]$ gcc lex.yy.c y.tab.c -ll -lm
[20311A1289@Putty-Server ~]$ ./a.out
5*6
30
