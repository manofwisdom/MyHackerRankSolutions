//This uses single pointer variable of type Node
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
    Node *current = head;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    int count=0;

    if(position ==0)
        {
        newNode->next =head;
        head = newNode;
        return head;
    }
    else
        {
        while(current!=NULL && count < position-1) //Since the head node is considered at position 0
            {
            current = current->next;
            count++;
        }
        newNode->next = current->next;
        current->next = newNode;
        return head;
    }   
}
