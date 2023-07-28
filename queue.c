#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

int queue[MAX];
int front= -1, rear=-1;


void insert(int queue[]){
    int val;
    printf("Kac eklemek istiyorsun ?");
    scanf("%d",&val);
    if(rear==MAX-1) printf("Overflow \n");
    else if(front==-1&&rear==-1){
        front=rear=0;
    }
    else{
        rear++;
    }
    queue[rear]=val;
    
}

void delete_q(int queue[]){
    if(front==-1||front>rear) printf("Underflow\n");
    else{
        printf("%d elemani silindi\n", queue[front]);
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}

void peek(int queue[]){
    if(front==1||front>rear) printf("Kuyruk bos.\n");
    else{
        printf("Eleman %d", queue[front]);
    }
}

void display(int queue[]){
    if(front == -1 || front>rear) printf("Kuyruk bos...\n");
    else{
        int i;
        for(i = front; i<=rear; i++){
            printf("%d", queue[i]);
        }
        printf("\n");
    }
}



int main(){
    insert(queue);
    insert(queue);
    insert(queue);
    insert(queue);
    insert(queue);
    insert(queue);
    display(queue);
    delete_q(queue);
    delete_q(queue);
    delete_q(queue);
    display(queue);
    peek(queue);
    
}






