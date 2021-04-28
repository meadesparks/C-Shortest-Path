
all: cpath

clean:
	rm -f cpath

cpath: cpaths.cpp Graph.h
	g++ -std=c++11 cpaths.cpp -o cpath

