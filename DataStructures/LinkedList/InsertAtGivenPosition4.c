/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *q, *newNode, *p =head;
    newNode =(Node *)malloc(sizeof(Node));
    int count =1;
    newNode->data =data;
    if(position==0)
        {
        newNode->next =head;
        head =newNode;
        return head;
    }
    else
        {
        while(p!=NULL && count<=position)
            {
            count++;
            q =p;
            p =p->next;
        }
        newNode->next =p;
        q->next =newNode;
        return head;
    }

}
