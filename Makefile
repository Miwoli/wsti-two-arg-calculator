compiler=g++
VPATH=src:o_files

__: main
main : main.o calculator.o
	$(compiler) o_files/main.o ./o_files/calculator.o -o calculator.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

calculator.o : calculator.cpp
	$(compiler) -c ./src/calculator.cpp -o ./o_files/calculator.o