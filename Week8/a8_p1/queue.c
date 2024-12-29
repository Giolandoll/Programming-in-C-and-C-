/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq){
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq){
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq){
	return pq->items == 0;
}

int queue_item_count(const Queue *pq){
	return pq->items;
}

//Function to add an element to the back of the queue.
int enqueue(Item item, Queue *pq){
    
        
        //Creating new element and allocating memory for it
        Node *element;
        element = (Node*) malloc(sizeof(Node));

        if(element == NULL){
            printf("Memory allocation failed");
            return -1;
        }
        
        element->item = item;//Giving new value to element
        element->next = NULL;

        //Checking if the queue is empty and making a decision on that
        if(queue_is_empty(pq)){          
            pq->front = element;
        }else{
            pq->rear->next = element;  
        }

        //Setting rear to the new element
        pq->rear = element;
        pq->items++;
        return 0;
}



//Function to remove the front element of the queue.
int dequeue(Item *pitem, Queue *pq){

    //Creating a temptr to hold the node to delete
    Node * temptr = pq->front;

    //Case if the item count of the queue is zero
    if(pq->items == 1){
        pq->front = NULL;
        pq->rear = NULL;
        pq->items--;
        *pitem = temptr->item;
        free(temptr);//Freeing space allocated for node
        return 0;
    }
    
    //In the event that the queue does not have 1 element.
    pq->front = pq->front->next;
    *pitem = temptr->item;
    pq->items--;
    free(temptr);//Freeing space allocated for node

    return 0;
}

//Function to print each element of the list
void print_func(Queue *pq){
    Node *cursor = pq->front;
    printf("content of the queue: ");
    for(int i = 0; i <pq->items; i++){
        printf("%d ", cursor->item);
        cursor = cursor->next;//Moving to the next element.
    }
    printf("\n");
}


void empty_queue(Queue *pq){
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}