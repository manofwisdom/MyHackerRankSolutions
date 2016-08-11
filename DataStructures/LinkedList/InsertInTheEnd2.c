/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method

    Node *q, *p =head;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data =data;

    if(head==NULL)
      {
          head =newNode;
          newNode->next=NULL;
        return head;
      }
    else
        {
        while(p!=NULL)
            {
            q =p;
            p =p->next;
        }
        q->next=newNode;
        newNode->next =NULL;
        return head;
    }
}

