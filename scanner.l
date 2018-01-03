%option yylineno
%{

#include "gram.tab.hpp"
#include <stdlib.h>
extern "C" int yylex();

%}

NUMBER        [0-9]+
IDENTIFIER    [_a-z]+
WHITESPACES   [ \t\r\n]+
%x COMMENT

%%

"(" 	      { BEGIN(COMMENT);      }
<COMMENT>")"  { BEGIN(INITIAL);      }
<COMMENT>.    {                      }
<COMMENT>"\n" {                      }


<COMMENT><<EOF>> { printf("Error: unterminated comment\n"); yyterminate(); }

{WHITESPACES} {                      }

"VAR"         { return(VAR);         }
"BEGIN"       { return(BEG);         }
"END"         { return(END);         }

"IF"          { return(IF);          }
"THEN"        { return(THEN);        }
"ELSE"        { return(ELSE);        }
"ENDIF"       { return(ENDIF);       }

"WHILE"       { return(WHILE);       }
"DO"          { return(DO);          }
"ENDWHILE"    { return(ENDWHILE);    }

"FOR"         { return(FOR);         }
"FROM"        { return(FROM);        }
"TO"          { return(TO);          }
"ENDFOR"      { return(ENDFOR);      }
"DOWNTO"      { return(DOWNTO);      }

"READ"        { return(READ);        }
"WRITE"       { return(WRITE);       }

{IDENTIFIER}  {
    yylval.string = (char *)strdup(yytext);
    return(PID);
}

{NUMBER}      {
    yylval.string = (char *)strdup(yytext);
    return(num);
}

":="          { return(ASSGN);       }
"="           { return(EQ);          }
"<>"          { return(NEQ);         }
">"           { return(GT);          }
">="          { return(GE);          }
"<"           { return(LT);          }
"<="          { return(LE);          }

"+"           { return(ADD);         }
"-"           { return(SUB);         }
"*"           { return(MUL);         }
"/"           { return(DIV);         }
"%"           { return(MOD);         }
";"           { return(SEM);         }

"["           { return(LEFT_BR);     }
"]"           { return(RIGHT_BR);    }

.             {                      }
%%

int yywrap(void) {
    return 1;
}
