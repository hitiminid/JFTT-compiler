# JFTT Compiler
The following repository contains a compiler for simple programming language.

## Instructions
### Compiling
In order to compile code, invoke Makefile (command `make`). This complies both flex (`scanner.l`) and bison (`gram.ypp`) files.
Command `make interpeter` compiles interpreter (`g++ -Wall -std=c++11 interpreter.cc -o interpreter`).

### Running 
Passing code to standard input of compiler file results in displaying output code on standard output  (`./compiler < data.imp`).
`./compiler < data.imp > result.mr` command saves output code to `result.mr` file.
Code is run in an interpreter by running `./interpreter [file name]` - e.g. `./interpreter result.mr`.

### Makefile

Makefile contains three implemented commands - `run`, `test` and `clean`.
* `make run` passes the data from `data.imp` file to compiler and displays output code using command line.
* `make test` passes the same data but saves the output to `result.mr`, that is passed next to the interpreter `./interpreter result.mr`
* `make clean` deletes the following files: `interpreter`, `compiler` and `lex.yy.c`.

## Requirements and used software

Compiler has been created and tested on both Ubuntu 14.04 oraz Fedora 26 systems.  
Requirements: 
* C++11
* Bison 3.0.2
* flex  2.5.35

