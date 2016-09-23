/*
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
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node *newList = NULL;
   if(!headA)
   {return headB;}
   if(!headB)
   {return headA;}
   if(headA ->data <= headB->data)
       {
       newList = headA;
       newList->next = MergeLists(headA->next,headB);
   }
   else
       {
       newList = headB;
       newList->next = MergeLists(headA, headB->next);
   }
    return newList;
   
            
}
