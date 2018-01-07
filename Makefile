program:
	@flex scanner.l
	@bison gram.ypp -d
	@g++ lex.yy.c gram.tab.cpp -o compiler -std=c++11 -Wno-write-strings

run:
	@./compiler < data.imp

test:
	@./compiler < data.imp > result.mr
	@./interpreter result.mr

interpreter:
	@g++ -Wall -std=c++11 interpreter.cc -o interpreter

clean:
	rm interpreter compiler lex.yy.c
