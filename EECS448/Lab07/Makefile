#	Author: John Gibbons modified by Alex Bardas
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o Test.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o Test.o -o prog

main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

#Add needed Test.o recipe and compiler command
Test.o: Test.cpp Test.h LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c Test.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
