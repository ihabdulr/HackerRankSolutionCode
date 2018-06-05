/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
   
    Node* tHeadA = headA;
    Node* tHeadB = headB;
    
    while(tHeadA!=NULL){
        tHeadB = headB;
            while(tHeadB!=NULL){
                if(tHeadA==tHeadB){
                    return tHeadB->data;
                }   
                 tHeadB = tHeadB->next;
            }
        tHeadA = tHeadA->next;
        if(tHeadA == tHeadB) return tHeadA->data;
        }
        
    return headA->data;
    }
       
        
  

