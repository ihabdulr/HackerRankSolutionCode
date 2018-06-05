/*
Problem:
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    
    if(headA==NULL || headB==NULL){
        auto ret = (headA==NULL)? headB : headA;
        return ret;
    }
   
    if(headA->data < headB->data){
        headA->next = MergeLists(headA->next, headB);
        return headA; 
    }
    else{
          headB->next = MergeLists(headA, headB->next);
        return headB;
    }
    
    
    
    
    
    
    
}
