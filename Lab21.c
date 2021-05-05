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
  int *integers = NULL;
  int n = 0;
  int i = 0;
  int value = 0;
  int flag = 0;
  int sum = 0;

  printf("Enter the number of values to be summed: ");
  scanf("%d",&n);

  integers = (int*)malloc(sizeof(int)*n); //dynamically create array
  //array size n

  for(i=0; i<n; i++) { // add ints into the array
    printf("Enter integer %d: ",i+1);
    scanf("%d",&integers[i]);
  }

  for(i=0; i<n; i++) { //add up all #'s in array
    sum += integers[i];
  }


  printf("Sum: %d\n",sum); //display function for sum

  int c;
  for(c=0; c<3; c++) { // for loop to search in array (search for 3 vals)
  // input the number of search
  printf("Enter the integer to search: ");
  scanf("%d",&value);
  flag = 0; //whether value was found

  for(i=0; i<n; i++) { //to search fo values
    if(integers[i] == value) { //if num is found, mark as found and leave loop
      flag = 1;
      break;
    }
  }

  if(flag) { //if the value was found
    printf("%d found in the array\n",value);
  } else {// value not found + add val to array
    printf("%d not found in the array\n",value);
    int* temp = (int*)malloc(sizeof(int)*(n+1)); // temp array +1 size of original array
    for(i=0; i<n; i++) { // loop to copy the elements from integers into temp
      temp[i] = integers[i];
    }
    temp[n] = value; // insert value at the end
    n++; // increment n by 1
    free(integers); // release the memory allocated to integers
    integers = temp; // update integers to point to temp
    }
  }

  free(integers); //frees allocated memory
  integers = NULL; //set value to NULL
  return 0;
}
