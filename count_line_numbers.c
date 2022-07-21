%%
\n {ECHO;yylineno++;}
.* { printf("%d\t%s",yylineno,yytext);}
%%
yywrap(){}
main()
{ 
  yylineno=1;
  yylex(); 
}
