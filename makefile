scan: main.o fsa_table.o scanner.o
	g++ main.o fsa_table.o scanner.o -o scanner

main.o: main.cpp token.h fsa_table.h scanner.h
	g++ -c main.cpp

scanner.o: scanner.cpp scanner.h token.h fsa_table.h 
	g++ -c scanner.cpp

fsa_table.o: fsa_table.cpp fsa_table.h
	g++ -c fsa_table.cpp

clean:
	rm -rf scan *.o
