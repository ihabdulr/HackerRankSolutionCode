/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* temp = head, *prev = head; 
    while(temp!=NULL){
        prev = prev->next;
        temp = temp->next->next;
        if(temp==prev)return true;
    }
    return false;
}
