/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head==NULL)
        {
        return NULL;
    }
    else if(head->next==NULL)
        {
        return head;
    }
    else
        {
        Node *secondElement = head->next;
        head->next =NULL;
        Node *reverseRest =Reverse(secondElement);
        secondElement->next =head;
        return reverseRest;
    }
}
