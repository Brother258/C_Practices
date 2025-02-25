#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;

};

struct node *head = NULL;


//Inert at the Begining in the LinkedList
void insertAtBegining(int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;

}


//Traversed LinkedList

void traverseLinkedList(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}



//Insert at the end of the LinkedList

void insertAtEnd(int num){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = NULL;

    if(head==NULL){
        head = newnode;
    }
    else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}



//Search in the LinkedList

int search(int n){
    int flag =0;
    struct node *temp = head;
    while(temp != NULL){
        if(n==temp->data){
            flag=1;
            break;
        }
        temp = temp->next;
    }

    return flag;
}

int main(){
    insertAtBegining(5);
    insertAtBegining(6);
    insertAtBegining(7);
    insertAtBegining(8);
    insertAtEnd(4);
    traverseLinkedList();

    int n,flag;
    printf("Enter a number to search : ");
    scanf("%d",&n);

    flag = search(n);

    if(flag==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }


return 0;
}
