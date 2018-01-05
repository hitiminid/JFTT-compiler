program:
	@flex scanner.l
	@bison gram.ypp -d
	@g++ lex.yy.c gram.tab.cpp -o parse -std=c++11 -Wno-write-strings


run:
	@./parse < data.txt

test:
	@./parse < data.txt > result
	@./interpreter result
