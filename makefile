lab7: lab7driver.o hash.o
	g++ -o lab7 lab7driver.o hash.o

lab7driver.o: lab7driver.cpp
	g++ -c -g lab7driver.cpp

hash.o: hash.cpp
	g++ -c -g hash.cpp

clean:
	rm *.o lab7		
