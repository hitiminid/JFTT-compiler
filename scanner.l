%{
#include <stdlib.h>
void yyerror(char *);
%}

DIGIT           [0-9]+
PIDENTIFIER     [_a-z]+

%%

[ \t\n]+ { // used for eating up whitespace
    //should be empty - there is no action
}

{DIGIT} {
    //yylval = atoi(yytext);  // number should be parsed

}

{PIDENTIFIER} {  }



%%

int main(int argc, char **argv)
{
	yylex();
}
