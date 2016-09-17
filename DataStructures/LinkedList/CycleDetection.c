/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node *slow =head, *fast =head;
    while(fast && slow)     //while fast and slow are not null, repeat. The comments below describe for the first iteration only
        {
        if(!head)           //if linked list in null
            return false;
        fast = fast->next;
        if(fast == NULL)    //if linked list contains one node and has no loop
            return false;
        if(fast == slow)    //if linked list has a loop
            return true;
        fast = fast->next;
        slow = slow->next;
        if(fast== slow)     //after multiple iterations if fast and slow meet then there is a loop
            return true;
    }
     return false;    
}
