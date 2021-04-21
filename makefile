
all: cpath

clean:
	rm -f cpath

cpath: cpaths.cpp Graph.h
	g++ -std=c++11 cpaths.cpp -o cpath

# bfs: bfs.cpp Graph.h
# 	g++ -std=c++11 bfs.cpp -o bfs

# topo: topo.cpp Graph.h
# 	g++ -std=c++11 topo.cpp -o topo

# epaths: epaths.cpp Graph.h
# 	g++ -std=c++11 epaths.cpp -o epaths