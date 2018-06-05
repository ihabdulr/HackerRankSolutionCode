/*
PROBLEM:
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
  
  SCORE: 10/10
*/
int CompareLists(Node *headA, Node* headB)
{
    
    if(headA==NULL && headB==NULL) return 0;
    if(headA!=NULL && headB!=NULL){
        if(headA->data == headB->data){
            if(headA->next==NULL && headB->next ==NULL)
                return 1;
            else 
                return CompareLists(headA->next, headB->next);
        }
    }
    
    return 0;
  
}
