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
    // Complete this function
    // Do not write the main method.
    Node *currentA = headA, *currentB = headB;
    int lengthA =0, lengthB =0;
    int lengthDiff =0;
 //Find the length of both  Linked  Lists
    while(currentA != NULL) {
        lengthA++;
        currentA = currentA ->next;
    }
    
    while(currentB != NULL) {
        lengthB++;
        currentB = currentB->next;
    }
    
    if(lengthA > lengthB)
        {
        currentA = headA;
        currentB = headB;
        lengthDiff = lengthA - lengthB;
    }
    else {
        currentA = headB;
        currentB = headA;
        lengthDiff = lengthB - lengthA;
    }
//Move for lengthDiff steps in the longer list
    for(int i=0; i<lengthDiff; i++)
        {
        currentA = currentA ->next;
    }
        
    while(currentA != NULL && currentB != NULL)
        {
        if(currentA == currentB)
            return currentA ->data;
        currentA = currentA->next;
        currentB = currentB->next;
    }
    return currentA ->data;
   

}
