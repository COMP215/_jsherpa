//
//  graph.cpp
//  Lab05
//
//  Created by Jigme Sherpa on 9/28/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include "graph.hpp"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;


Node::Node()
{
    edges = {};
}

Node::Node(string passed_name)
{
    name_ = passed_name;
    edges = {};
}

void Node::addEdge(Node* new_edge)
{
    edges.push_back(*new_edge);
}

Graph::Graph()
{
    vertices = {};
};

void Graph::AddVertex(string vertex_name)
{
    Node* vertexNode = new Node;
    vertexNode->name_ = vertex_name;
    vertices.push_back(*vertexNode);
}

void Graph::AddEdge(string source, string target, int weight)
{
    Node* newEdge = new Node;
    newEdge->name_ = target;
    newEdge->weight_= weight;
    vertices[SearchGraph(source)].edges.push_back(*newEdge);
    //vertices[i]weight_ = weight;
}

void Graph::addToGraph(string vertex_name, string edge, int weight)
{
    if (vertices.size() == 0)//graph is empty
    {
        Node* vertexNode = new Node;
        Node* edgeNode = new Node;
        vertexNode->name_ = vertex_name;
        edgeNode->name_ = edge;
        edgeNode->weight_ = weight;
        edgeNode->sourceNode = vertex_name;
        vertexNode->edges.push_back(*edgeNode);
        vertices.push_back(*vertexNode);
    }else{
        for(int i = 0; i<vertices.size();i++)//check if vertex is in graph
        {
            cout<<vertices[i].name_ << endl;
            if(vertex_name == vertices[i].name_)//vertex already exists
            {
                Node* newEdge = new Node;
                newEdge->name_ = edge;
                vertices[i].edges.push_back(*newEdge);
                newEdge->weight_ = weight;
            }
            else if (i==vertices.size()-1)//vertex does not exist
            {
                Node* vertexNode = new Node;
                Node* edgeNode = new Node;
                vertexNode->name_ = vertex_name;
                edgeNode->name_ = edge;
                vertexNode->edges.push_back(*edgeNode);
                vertices.push_back(*vertexNode);
                edgeNode->weight_ = weight;
            }
        }
    }
}


void Graph::ToGraphviz(string file_name)
{
    ofstream outfile;
    outfile.open(file_name);
    outfile << "graph G {" << endl;
    outfile<<"node [shape=square];"<<endl;
    outfile<<"node [color= blue];"<<endl;

    for (int i = 0; i < vertices.size(); i++)
    {
       // cout << "going in loop 1" << endl;
        //cout << "going in if" << endl;
        //if (vertices[i].edges.size() > 0)
        {
            for(int j = 0; j < vertices[i].edges.size(); j++)
            {
                //cout << "going in  loop 2 " << endl;
                cout << vertices[i].name_ << "--"  << vertices[i].edges[j].name_ << " [ Label = "<<vertices[i].edges[j].weight_<<" ];"<< endl;
                outfile <<vertices[i].name_ << "--"  << vertices[i].edges[j].name_ << " [ Label = "<<vertices[i].edges[j].weight_<<" ];"<< endl;
            }
        }
        // cout << "going in else" << endl;
        //else{
        //      cout << vertices[i].name_ << endl;
        //}
    
    }
    outfile << "}";
    outfile.close();
}

int Graph::SearchGraph(string vertex_name)
{
    for(int i = 0; i<vertices.size(); i++)
    {
        if(vertex_name == vertices[i].name_)
        {
            return i;
        }
    }
    return 0;
}

void Graph::PrimMST(){
    
    
}

