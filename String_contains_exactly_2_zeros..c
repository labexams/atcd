%%
1*01*01* { printf(" \t Accepted");}
.* { printf(" \t Rejected");}
%%
yywrap(){}
main()
{ 
  yylex();
}
