//
//  graph.hpp
//  Lab05
//
//  Created by Jigme Sherpa on 9/28/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#ifndef graph_hpp
#define graph_hpp
#include <vector>
#include <iostream>
using namespace std;

class Node
{
public:
    string name_;
    int weight_;
    vector <Node> edges;
    string sourceNode;
    Node();
    Node(string passed_name);
    void addEdge(Node* newEdge);
};


class Graph
{
public:
    Graph();
    int SearchGraph(string vertex_name);
    void AddVertex(string vertex_name);
    void AddEdge(string source, string target, int weight);
    void addToGraph(string vertex_name, string edge,int weight);
    void ToGraphviz(string file_name);
    void PrimMST();
    vector <Node> vertices;
};
#endif /* graph_hpp */
