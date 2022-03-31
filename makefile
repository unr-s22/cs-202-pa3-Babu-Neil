currency: main.o Money.o Account.o
	g++ -std=c++11 -o currency Money.o Account.o main.o
main.o:	main.cpp
	g++ -std=c++11 -c main.cpp

Money.o:	Money.cpp	Money.h
	g++ -std=c++11 -c Money.cpp

Account.o: Account.cpp	Account.h
	g++ -std=c++11 -c Account.cpp

clean:
	rm *.o