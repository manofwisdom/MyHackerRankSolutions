/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *temp, *q, *p =head;
    int count=1;
    if(position ==0 && head->next!=NULL)
        {
        temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    else if(position ==0 && head->next==NULL)
        {
        free(head);
        return NULL;
    }
    else
        {
        while(p!=NULL && count<=position)
            {
            count++;
            q=p;
            p=p->next;
        }
        temp =p;
        q->next=p->next;
        free(temp);
        return head;

    }
}
