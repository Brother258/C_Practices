#include <stdio.h>
    int top=-1,size=5;
    int arr[5];

void push(int element){
    if(top==size-1){
        printf("Stack overflow\n");
    }

    else{
        top=top+1;
        arr[top]=element;
        printf("Pushed %d\n",arr[top]);
    }

}

void pop(){
    if(top==-1){
        printf("Underflow\n");
    }

    else{
        printf("Popped %d\n",arr[top]);
        top=top-1;

    }

}

void display(){

    if(top!=-1){
        for(int i=0;i<=top;i++){
            printf("%d ",arr[i]);
        }
    }

    else{
        printf("\nStack is empty");
    }
}

int main(){

    push(5);
    push(10);
    push(15);

//    push(20);
//    push(25);
//    push(30);
//    pop();

    pop();
    pop();
    pop();

    display();

return 0;
}
