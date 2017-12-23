program:
	flex scanner.l
	bison gram.ypp -d
	g++ lex.yy.c gram.tab.cpp -o parse


run:
	./parse < data.txt
