#include <stdio.h>
#include <string.h>

typedef int(*Student)(int num);
typedef float(*Student1)(float num);
typedef char*(*Student2)(char name[]);

struct Student {
  char name[20];
  int CWID;
  float GPA;
  int age;
  // function ptrs
  Student ptr;
  Student1 ptr1;
  Student2 ptr2;
};

  void printStudent(struct Student std) {
  printf("\nName: %s\n", std.name);
  printf("CWID: %d\n", std.CWID);
  printf("GPA: %0.1f\n", std.GPA);
  printf("Age: %d\n", std.age);
}

//setter functions
int setAge(int age) {
  return age;
}

int setCWID(int cwid) {
  return cwid;
}

float setGPA(float gpa) {
  return gpa;
}

char* setName(char name[]) {
  return name;
}


int main(int argc , char **argv) {

  char newName[20];
  int num;
  float newGPA;
  struct Student std1; // create struct type Student

  //DEFAULT STUDENT DATA
  strcpy(std1.name, "timmy");
  std1.CWID = 1337;
  std1.GPA = 3.7;
  std1.age = 14;
  printStudent(std1); //prints the default data

  printf("\nEnter a name: ");
  scanf("%s",newName);
  std1.ptr2 = setName;
  strcpy(std1.name, std1.ptr2(newName));

  printf("Enter a CWID: ");
  scanf("%d",&num);
  std1.ptr = setCWID;
  std1.CWID = std1.ptr(num);

  printf("Enter the GPA: ");
  scanf("%f",&newGPA);

  std1.ptr1 = setGPA;
  std1.GPA = std1.ptr1(newGPA);

  printf("Enter a age: ");
  scanf("%d",&num);
  std1.ptr = setAge;
  std1.age = std1.ptr(num);
  printStudent(std1);

  return 0;

}

void printStudent(struct Student std); //prints the data again
