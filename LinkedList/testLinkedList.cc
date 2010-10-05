#include "LinkedList.h"

int main(int argc, char** argv)
{
  Node<int>* head = new Node<int>(0);
  int count=1;
  int maxcount=100;
  while (count < maxcount) {
    head->insert( new Node<int>(count++));
  }
  head->print(cout);
  delete head; head=0;

  Node<float>* fhead = new Node<float>(0);
  float fcount=1.5;
  float fmaxcount=20;
  while (fcount < fmaxcount) {
    fhead->insert( new Node<float>(fcount++));
  }
  fhead->print(cout);
  delete fhead; fhead=0;
  return 0;
}
