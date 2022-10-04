#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* next;
};

//Code for detecting the cycle;
node* detect(node* &head)
{
    node* slow =head;
    node* fast=head;

    while(fast->next!=NULL || fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return slow;
        }
    }

    return NULL;
}

//code for detecting intersection node
node* intersectionNode(node* head)
{
    node* meet=detect(head);
    node* start=head;
    
    while(meet!=start)
    {
        meet=meet->next;
        start=start->next;
    }

    return start;
}


int main()
{

}