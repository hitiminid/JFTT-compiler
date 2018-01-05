program:
	@flex scanner.l
	@bison gram.ypp -d
	@g++ lex.yy.c gram.tab.cpp -o compiler -std=c++11 -Wno-write-strings


run:
	@./compiler < data.txt

test:
	@./compiler < data.txt > result
	@./interpreter result
