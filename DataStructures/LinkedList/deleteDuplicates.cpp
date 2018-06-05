/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  if(head==NULL) return head; 
  if(head->next == NULL) return head;
  else{
      Node*current = new Node; 
      current = head;
      Node* temp = new Node;
      while(current->next != NULL){
          if(current->data == current->next->data){
              temp = current->next->next;
              current->next = temp;
              
          }
          else current = current->next;
      }
      
  }  
   
    return head;
}
