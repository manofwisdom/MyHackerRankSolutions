/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    int lengthSLL=0;
    Node *current =head, *p =head;
    while(current!=NULL)
        {
        current =current->next;
        lengthSLL++;
    }
    int positionFromHead;
    positionFromHead = lengthSLL-positionFromTail -1;
    int count=0;
    while(count!=positionFromHead && count <lengthSLL && p!=NULL)
        {
        count++;
        p=p->next;
    }
    return p->data;


}
