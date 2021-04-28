
#include <iostream>
#include "Graph.h"
#include <iomanip>


int main(int argc, char *argv[]){
  graph g;
  std::vector<graph::vertex_label> cpath_rpt;

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

  g.cpath(argv[2], argv[3], cpath_rpt);
  std::cout << "\n\n----------------------- All non-dominated paths from " <<  argv[2] <<  " to " << argv[3] << ": ---------------------------------\n";

    std::cout << std::setw(8) << "COST" << std::setw(8) << "TIME" << "\n";    
    for(auto k : cpath_rpt[g.name2id(argv[3])].tradeoffCurve){
      std::cout << std::setw(8) << std::get<0>(k) << std::setw(8) << std::get<1>(k) << "\n"; 
    }

    std::cout << "\nFor a cost budget of " << argv[4] << ":\n\n";
    g.displayCPath(cpath_rpt, std::stoi(argv[4]), g.name2id(argv[2]), g.name2id(argv[3]));

  return 0;
}

