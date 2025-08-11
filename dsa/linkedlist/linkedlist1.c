#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int value;
    struct node* link ;// self refernetial

};

int main ()
{
    struct node* head ;
    head = (struct node*)malloc(sizeof(struct node));
    head ->value= 45;
    head->link =NULL;

    struct node* current ;
    current =(struct node*)malloc(sizeof(struct node));
    current->value= 48;//updating the value in current node
    current->link=NULL;//assingning null to the llink of current

    head->link=current;//update the link part of the second node;

    return 0;
    //success


}