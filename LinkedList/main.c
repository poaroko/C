#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct linkedlist{
    int data;
    struct likedlist *next;
} linkedList;
int main(){
    linkedList node1 = {1, NULL};
    linkedList node2 = {2, NULL};
    linkedList node3 = {3, NULL};
    node1.next = &node2;
    node2.next = &node3;
    
    linkedList *buffer = &node1;
	while(buffer){
	  printf("%d\n", buffer->data);
	  buffer = buffer->next;
	}

    return 0;
}
