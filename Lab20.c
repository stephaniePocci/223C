#include <stdio.h>
#include <stdlib.h>

typedef struct Node { //create Node struct
  int data;
  struct Node *next; //points to next node
} Node;


int main() {
  int i = 0;
  int count = 0;

    Node *head = NULL;
    Node *temp;
    printf("How many numbers are in the list?\n");
    scanf("%d", &count);
    for (i = 0; i < count; ++i) { //accept user input until size of list is reached
      temp = (Node *) malloc(sizeof(Node)); //malloc creates a pointer for the node
      printf("Enter a number:\n");
      scanf("%d", &(temp -> data)); //stores inputted # in data pointer
      temp -> next = head;
      head = temp;
    }

    printf("Traverse the list of nodes!\n");
    temp = head;
    for (i = 0; i < count; ++i) { //print out user input until no more data to print
      printf("Node %d's Value is %d\n", i + 1, temp -> data);
      temp = temp -> next;
    }
  return 0;
}
