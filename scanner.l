%{
#include "gram.tab.h"
#include <stdlib.h>
void yyerror(char *);
%}

NUMBER        [0-9]+
IDENTIFIER    [_a-z]+

%%

"+"           { return(ADD);         }
"-"           { return(SUB);         }
"*"           { return(MULT);        }
"/"           { return(DIV);         }
"%"           { return(MOD);         }

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

{IDENTIFIER}  { return(pidentifier); }
{NUMBER}      { return (num);        }

%%

int yywrap(void) {
    return 1;
}
