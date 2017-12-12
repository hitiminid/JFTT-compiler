%{
// C code
%}
//Bison declarations
%token VAR END IF THEN ELSE ENDIF WHILE DO ENDWHILE FOR FROM TO num BEG ENDFOR DOWNTO READ WRITE pidentifier
%left '-' '+'
%left '*' '/'
%right '^'

%%

program        : VAR  vdeclarations BEG  commands  END

vdeclarations : vdeclarations  pidentifier
                | vdeclarations  pidentifier[num]
                |

commands     : commands  command
             | command

command      : identifier  ":="  expression;
             | IF  condition  THEN  commands  ELSE  commands  ENDIF
             | IF  condition  THEN  commands  ENDIF
             | WHILE  condition  DO  commands  ENDWHILE
             | FOR  pidentifier  FROM  value TO  value DO  commands  ENDFOR
             | FOR  pidentifier  FROM  value  DOWNTO  value DO  commands  ENDFOR
             | READ  identifier;
             | WRITE  value;

expression  : value
             | value "+" value
             | value "-" value
             | value "*" value
             | value "/" value
             | value "%" value

condition   : value "=" value
             | value "<>" value
             | value "<" value
             | value ">" value
             | value  "<=" value
             | value  ">=" value

value        : num
             | identifier

identifier  : pidentifier
             | pidentifier[pidentifier]
             | pidentifier[num]

%%
int main() {
    yyparse();
}

int yyerror (char *msg) {
    printf("ERROR\n");
}
