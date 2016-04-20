/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    int length1=0, length2=0;
    Node *current1 =headA;
    Node *current2 =headB;
    while(current1!=NULL)
        {
        length1++;
        current1 = current1->next;
        }
    while(current2!=NULL)
        {
        length2++;
        current2 = current2->next;
        }
    if(length1!=length2)
        {
        return 0;
    }
    if(headA ==NULL && headB==NULL)
        {
        return 1;
        }
    else if((headA==NULL && headB!=NULL)||(headA!=NULL && headB==NULL))
        {
        return 0;
        }
    else{
        for(current1=headA, current2=headB; current1!=NULL,current2!=NULL; current1 =current1->next, current2=current2->next)
        {if(current1->data !=current2->data)
            {
            return 0;
            }
        }
        return 1;
         }
}
