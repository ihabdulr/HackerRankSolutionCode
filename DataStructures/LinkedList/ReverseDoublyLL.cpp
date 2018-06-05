/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
   
   Node* tmp = NULL;
   Node* current = head;
    
    while(current){
        tmp = current->next; 
        current->next = current->prev;
        current->prev = tmp; 
        current = tmp;
        
        if(current) 
             head = current;     
    }
   
    
    return head;
}
