/*
●  Prompt the user to enter the number of values to be summed
●  Create a dynamic array of that size
●  Repeatedly prompt the user to enter values until the array is full
●  Print the sum of the values
●  You will then ask the user for 3 integers and for each value you will say whether it is in the array or not.  If the value is not in the array you will append it to the array
● Delete the dynamic array before terminating the program
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *integers = NULL; //pointer to array
  int size = 0; //size of the array
  int i = 0;
  int value = 0; //num searched for in array
  int sum = 0; //sum of the entered integers
  char isFound; //whether the value was found in the array (y for yes/n for no)

  printf("Enter the number of values to add up in an array: ");
  scanf("%d",&size);

  integers = (int*)malloc(sizeof(int)*size); //dynamically create array

  for(i=0; i<size; i++) { // add ints into the array
    printf("Enter the %d integer: ",i+1);
    scanf("%d", &integers[i]);
  }

  for(i = 0; i < size; i++) { //add up all #'s in array
    sum += integers[i];
  }


  printf("Sum of array: %d\n", sum); //display function for sum

  int count;
  for(count = 0; count < 3; count++) { // for loop to search in array (search for 3 vals)
    // input the number of search
    printf("Enter the value to search for within the array: ");
    scanf("%d",&value);
    isFound = 'n'; //whether value was found

    for(i = 0; i < size; i++) { //to search fo values
      if(integers[i] == value) { //if num is found, mark as found and leave loop
        isFound = 'y';
        break;
      }
    }

    if(isFound == 'y') { //if the value was found
      printf("%d is found in the array\n",value);
    } else {// value not found + add val to array
      printf("%d is not found in the array\n",value);
      int* temp = (int*)malloc(sizeof(int)*(size+1)); // temp array +1 size of original array
      for(i = 0; i < size; i++) { // loop to copy the elements from integers into temp
        temp[i] = integers[i];
      }
      temp[size] = value; // insert value at the end
      size++; // increment size of array by 1
      free(integers); // release the memory allocated to integers
      integers = temp; // update integers to point to temp
      }
  }

  free(integers); //frees allocated memory
  integers = NULL; //set value to NULL
  return 0;
}
