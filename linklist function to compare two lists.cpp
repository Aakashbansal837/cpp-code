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
    if(headA == NULL || headB == NULL){
            return 0;
        }
    if(headA->next == NULL || headB->next == NULL){
            return 0;
        }
    while(1 == 1){
        if(headA->next == NULL && headB->next == NULL){
            return 1;
        }
        else if(headA->next == NULL || headB->next == NULL){
            return 0;
        }
        else{
            if (headA->data != headB->data){
                return 0;
            }
            else{
                headA=headA->next;
                headB=headB->next;
            }
        }
    }
}

