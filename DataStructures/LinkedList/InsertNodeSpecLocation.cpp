/*
PROBLEM:
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
  
  SCORE: 10/10
*/
Node* InsertNth(Node *head, int data, int position)
{
  Node** p = &head;
for(int i = 0; i < position; ++i)
    p = &(*p)->next;
*p = new Node {data, *p};
return head;
}
