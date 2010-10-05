#ifndef _MY_LINKED_LIST_
#define _MY_LINKED_LIST_

#include <iostream>

using namespace std;

template <class Data>
class Node
{
  public:
  Data value;
  Node* next;

  Node(Data v);
  ~Node();

  void insert(Node<Data>* node);
  void print(ostream& out) const;
};

template <class Data>
Node<Data>::Node(Data v)
:value(v), next(NULL)
{
}

template <class Data>
Node<Data>::~Node()
{
  cout<<"Node::~Node for "<<value<<endl;
  if (next) {
    delete next;
    next=NULL;
  }
}

template <class Data>
void Node<Data>::insert(Node<Data>* node)
{
  if (node) {
    if (next) {
      Node<Data>* copyNext=next;
      next=node;
      node->next=copyNext;
    }
    else {
      next=node;
      node->next=NULL;
    }
  }
}

template <class Data>
void Node<Data>::print(ostream& out) const
{
  cout<<"Node<Data>:"<<value<<endl;
  //non-recursive
  const Node<Data>* nextNode=next;
  while (nextNode) {
    out<<"Node<Data>:"<<nextNode->value<<endl;
    nextNode=nextNode->next;
  }
}

class LinkedList
{
  public:
  Node<int>* head;
};

#endif // _MY_LINKED_LIST_
