
#include <iostream>
#include "Graph.h"


int main(int argc, char *argv[]){
  graph g;

  if(argc != 5) {
    std::cout << "usage:  ./cpath <filename> <source-vertex> <destination-vertex> <budget>\n";
    return 0;
  }
  else {
    if(!g.read_file(argv[1])){
      std::cout << "could not open file '" << argv[1] << "'\n";
      return 0;
    }
  }

  std::cout << "\nADJACENCY-LIST REPRESENTATION:\n\n";
  g.display();
  std::cout << "\nEND ADJACENCY LIST:\n\n";

  std::cout << "NOT IMPLEMENTED" << std::endl;

  return 0;
}

