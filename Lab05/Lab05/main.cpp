//
//  main.cpp
//  Lab05
//
//  Created by Jigme Sherpa on 9/27/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include <iostream>
#include "graph.hpp"

using namespace std;

int main()
{
    Graph mygraph;
    mygraph.AddVertex("a");
    mygraph.AddVertex("j");
    mygraph.AddVertex("k");
    mygraph.AddVertex("f");
    mygraph.AddVertex("d");
    mygraph.AddEdge("d","f",1);
    mygraph.AddEdge("k","d",6);
    mygraph.AddEdge("a","j",3);
    mygraph.AddEdge("j","k",4);
    mygraph.ToGraphviz("graph1.dot");
}