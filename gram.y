%{

%}
%token num IF WHILE FOR FROM TO DOWNTO DO ENDFOR READ WRITE pidentifier VAR BEGIN END THEN ENDIF ELSE ENDWHILE


%left '-' '+'
%left '*' '/'
%precedence NEGATIVE
%right '^'


%%
program:        VAR vdeclarations BEGIN commands END

vdeclarations: vdeclarations  pidentifier
                | vdeclarations  pidentifier[num]
                |

commands:     commands  command
             | command

command:      identifier  ":="  expression;
             | IF  condition  THEN  commands  ELSE  commands  ENDIF
             | IF  condition  THEN  commands  ENDIF
             | WHILE  condition  DO  commands  ENDWHILE
             | FOR  pidentifier  FROM  value TO  value DO  commands  ENDFOR
             | FOR  pidentifier  FROM  value  DOWNTO  value DO  commands  ENDFOR
             | READ  identifier;
             | WRITE  value;

expression:   value
             | value '+' value
             | value '-' value
             | value '*' value
             | value '/' value
             | value '%' value

condition:    value '=' value
             | value  "<>" value
             | value "<" value
             | value ">" value
             | value  "<=" value
             | value  ">=" value

value:        num
             | identifier

identifier:   pidentifier
             | pidentifier[pidentifier]
             | pidentifier[num]

%%

int main() {
    yyparse();
}

int yywrap(){
    return 1;
}

int yyerror(char *msg) {
  return 0;
}
