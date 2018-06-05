/*
Problem:
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
  
  Score: 10/10
*/
Node* Delete(Node *head, int position)
{
    Node* temp = head;
    
    if(position==0) head = head->next;
    else{
    for(int i=0; i<position-1; ++i){
        temp = temp->next;
    }
        temp->next = temp->next->next;
    }
  // Complete this method
    return head;
}




