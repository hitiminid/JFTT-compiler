%{
#include "gram.tab.h"
#include <stdlib.h>
int yylex();
//todo: comments
%}

NUMBER        [0-9]+
IDENTIFIER    [_a-z]+

%%



[ \t\r\n]+    {                      }

"VAR"         {
  // printf("VAR");/
  return(VAR);
}
"BEGIN"       {
  // printf("BEGIN");
  return(BEG);
}
"END"         {
  // printf("END");
  return(END);
 }

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

[_a-z]+       {
  // printf(" y ");
  yylval.str = (char *)strdup(yytext);
  return(PID);
}


[0-9]+        {
  // printf(" x ");
  yylval.str = (char *)strdup(yytext);
  return(num);
}

":="          {
  // printf(":=");
  return(ASSGN);       }
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


.             {printf(" x ");}
%%

int yywrap(void) {
    return 1;
}
