
#include <iostream>
#include "Graph.h"


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

  std::cout << "\nADJACENCY-LIST REPRESENTATION:\n\n";
  g.display();
  std::cout << "\nEND ADJACENCY LIST:\n\n";

  g.cpath(argv[2], argv[3], cpath_rpt);
  std::cout << "-----------------------from cpaths.cpp---------------------------------\n";
  // for(int i = 0; i < report.size(); i++){
    //std::cout << "vertex name is: " << vertices[i].name << std::endl;          
    for(auto k : cpath_rpt[g.name2id(argv[3])].tradeoffCurve){
      std::cout << "\tcost is: " <<  std::get<0>(k) << " and time is: " << std::get<1>(k) << std::endl;
    }

    g.displayCPath(cpath_rpt, std::stoi(argv[4]), g.name2id(argv[2]), g.name2id(argv[3]));
    // for(auto j : report[i].predArray){
    //   std::cout << "\tpred is: " << id2name(j) << std::endl;
    // }
    // while(!report[i].predArray.empty()){
    //   std::cout << "\tpred -- " << id2name(report[i].predArray.top()) << std::endl;
    //   report[i].predArray.pop();
    
  // }
  std::cout << "NOT IMPLEMENTED" << std::endl;

  return 0;
}

