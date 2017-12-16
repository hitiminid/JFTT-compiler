%{
// C code
#include <stdio.h>
#include <string.h>
int yylex();
%}


%union {
    char* str;
}

// program structure
%token VAR BEG END
// control statements
%token IF THEN ELSE ENDIF
//while loop
%token WHILE DO ENDWHILE
// for loop
%token FOR FROM TO ENDFOR DOWNTO
// IO
%token READ WRITE
// compare statements
%token ASSGN EQ NEQ GT GE LT LE
// operations
%token ADD SUB MUL DIV MOD
// numbers and variables
%token num PID SEM
// right and left brackets used for arrays
%token LEFT_BR RIGHT_BR


%left '-' '+'
%left '*' '/'
// where is modulo ???
%right '^' // do I need it?

%%

program         : VAR vdeclarations BEG commands END { }

vdeclarations   : vdeclarations  PID {
                    printf(" declaration complete ");
                }
                | vdeclarations  PID LEFT_BR num RIGHT_BR
                |

commands     : commands  command { }
             | command           {  }


command      : identifier  ASSGN  expression SEM
             | IF  condition  THEN  commands  ELSE  commands  ENDIF
             | IF  condition  THEN  commands  ENDIF
             | WHILE  condition  DO  commands  ENDWHILE
             | FOR  PID  FROM  value TO  value DO  commands  ENDFOR
             | FOR  PID  FROM  value  DOWNTO  value DO  commands  ENDFOR
             | READ  identifier SEM {

             }
             | WRITE  value SEM

expression   : value
             | value ADD value
             | value SUB value
             | value MUL value
             | value DIV value
             | value MOD value

condition    : value EQ value
             | value NEQ value
             | value LT  value
             | value GT  value
             | value LE  value
             | value GE  value

value        : num
             | identifier {   }

identifier   : PID
             | PID LEFT_BR PID RIGHT_BR
             | PID LEFT_BR num RIGHT_BR

%%
int main() {
  yyparse();
  return 0;
}

int yyerror (char *msg) {
    printf("ERROR\n");
}
