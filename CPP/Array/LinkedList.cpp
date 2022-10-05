#include<iostream>
using namespace std ;

// this program creates and display a linked list

struct node
{
    int data ;
    struct node *next ;

}*first;
void create( int arr[] , int n ) // function to create a linked list 
{
    struct node *temp , *last ;

    first = new node ;
    first->data = arr[0] ;
    first->next = NULL ;

    last = first ;

    for( int i = 1 ; i < n ; i++)
    {

        temp = new node ;

        temp->data = arr[i] ;
        temp->next = NULL ;
        last->next = temp ;
        last = temp ;
    }
}
void Insert( struct node *p , int pos , int x) // function to insert node at any position 
{
    if(pos < 0 || pos > 5) // cnt is total no of nodes
    {
        return ;
    }

     struct node *t ;

     if(p==0){
     t = new node ;
     t -> data = x ;
     t -> next = first ;

     t->next = first ;
     first = t ;
     }

     else
     {
         p = first ;

         for( int i = 0 ; i < pos-1 && p != NULL ; i++)
         {
             p = p->next ; // traversing the nodes
         }
         t = new node ;
         t->data = x ;
         t->next = p->next ;
         p->next = t ;
     }
}

void display( struct node *p ) // function to display a linked list 
{
    while(p)
    {
        cout << " " << p->data ;
        p = p->next ;
    }
}



int main()
{

    Insert(first,0,5) ;
    Insert(first,1,8) ;
    Insert(first,2,6) ;

    display(first) ;
}
