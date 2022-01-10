#include<stdio.h>
#include<stdlib.h>
#define n 5
struct node {
	int data;
	struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int data);
int dequeue();
void display();
int main() {
	int want_continue, r, data, choice;
	struct node *front = NULL, *rear = NULL;
	do {
		printf("enter the value of choice");
		scanf("%d", &choice);
		switch(choice) {
			case 1:printf("enter the value of data");
				scanf("%d", &data);
				enqueue(data);
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
		}
	printf("enter the value of want_continue");
	scanf("%d", &want_continue);
	}while(want_continue == 1);
	return 0;
}
void enqueue(int data) {
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	if(front == NULL) {
		front = rear = temp;
	}
	else {
		rear -> next = temp;
		rear = temp;
}
}
int dequeue() {
	struct node *p;
	p = front;
	if(front == NULL) {
		printf("Queue is empty");
	}
	else {
		front  = front -> next;
		free(p);
	}
}
void display(){
	while(front != NULL) {
		printf("%d\t", front -> data);
		front = front -> next;
}
}
	
	
	
		
	
				
	
