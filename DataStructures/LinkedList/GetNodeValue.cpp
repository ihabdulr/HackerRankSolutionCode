/*
Problem:
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  
  struct Node
  {
     int data;
     struct Node *next;
  }
  
Score: 10/10
*/
int GetNode(Node *head,int positionFromTail)
{
  Node* get_count = new Node; 
  get_count = head; 
  int count = 0;
  
  while(get_count->next != NULL){
      get_count = get_count->next;
      count++;
  }
    
  int actpos = (count - positionFromTail);
  Node* pos = new Node;
  pos = head; 
  count =0;
  while(count < actpos){
      pos = pos->next; 
      count++;
  }
  
    
    return pos->data;
 
    
    
}
