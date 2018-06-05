/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
 Node* SortedInsert(Node *head,int data)  
 {  
   // Complete this function  
   // Do not write the main method.   
   Node *temp = new Node;  
   temp->data = data;  
   temp->next = NULL;  
   temp->prev = NULL;  
   if(head == NULL){  
     head = temp;  
       return head;
   }
   else if(data <= head->data){
          temp->next = head;
          head->prev = temp;
          return temp;
      }
       else{
           Node* prev = head;
           Node* current = head->next;
           while(current!=NULL){
               
               if(prev->data <= data && data <= current->data){
                   prev->next = temp; 
                   current->prev = temp;
                   temp->prev = prev;
                   temp->next = current;
                   
                   return head;     
               }
               prev = current;
               current = current->next;
               
           }
           prev->next = temp;
           temp->prev = prev;
           
           return head;
               
           
           
       }
                
   return head;  
 }  
