/*

PROBLEM:
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
  
SCORE: 10/10
*/
Node* Reverse(Node *head)
{
    Node* curr = NULL;
    Node* next;
    
    while(head){
        next = head->next;
        head->next = curr;
        curr = head;
        head = next;
        
    }
    
    return curr;
    
    
    
}
