scan: main.o fsa.o scanner.o
	g++ main.o fsa.o scanner.o -o scanner

main.o: main.cpp token.h fsa.h scanner.h
	g++ -c main.cpp

scanner.o: scanner.cpp scanner.h token.h fsa.h 
	g++ -c scanner.cpp

fsa_table.o: fsa.cpp fsa.h
	g++ -c fsa.cpp

clean:
	rm -rf scan *.o
