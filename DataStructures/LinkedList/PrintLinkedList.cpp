/*

Problem: Given a pointer to the head node of a linked list, print its elements in order, one element per line. 
If the head pointer is null (indicating the list is empty), don’t print anything.

SCORE: 10/10

*/

void Print(Node *head)
{
 
    if(head){
        std::cout << head->data << std::endl; 
        Print(head->next);
    }
    
    
}
