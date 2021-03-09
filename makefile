scan: main.o fsa.o scanner.o testScanner.o
	g++ main.o fsa.o scanner.o testScanner.o -o scanner

main.o: main.cpp testScanner.h token.h fsa.h scanner.h
	g++ -c main.cpp

test_scanner.o: testScanner.cpp testScanner.h scanner.h token.h fsa.h
	g++ -c testScanner.cpp

scanner.o: scanner.cpp scanner.h token.h fsa.h 
	g++ -c scanner.cpp

fsa_table.o: fsa.cpp fsa.h
	g++ -c fsa.cpp

clean:
	rm -rf scanner *.o
