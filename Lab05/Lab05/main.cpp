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
    mygraph.addToGraph("a","b");
    mygraph.addToGraph("a","c");
    mygraph.addToGraph("d","g");
    mygraph.addToGraph("c","b");
    mygraph.addToGraph("a","g");
    mygraph.ToGraphviz("graph1.dot");
}