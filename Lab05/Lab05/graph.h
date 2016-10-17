//
//  graph.h
//  Lab05
//
//  Created by Jigme Sherpa on 9/27/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#ifndef graph_h
#define graph_h
#include <vector>



class Vertex {
public:
    string data_;
    vector(Edge);

};

class Edge{
public:
    Edge(Vertex* origin, Vertex* Destination);
    Vertex * origin;
    Vertex * Destination;
    
    
};

class Graph{
public:
    vector(Vertex);
    addVertex(string data, Vertex* origin);
    
};


#endif /* graph_h */
