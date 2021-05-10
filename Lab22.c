#include <stdio.h>
#include <string.h>

typedef int(*Student)(int num);
typedef float(*Student1)(float num1);
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

int set_age(int age) {
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
  int intNum1;
  float newGPA;
  struct Student std1; // create struct type Student

  //DEFAULT STUDENT DATA
  strcpy(std1.name, "timmy");
  std1.CWID = 1337;
  std1.GPA = 3.7;
  std1.age = 14;
  printStudent(std1);

  printf("\nEnter a Name: ");
  scanf("%s",newName);
  std1.ptr2 = setName;
  strcpy(std1.name, std1.ptr2(newName));

  printf("Enter a CWID: ");
  scanf("%d",&intNum1);
  std1.ptr = setCWID;
  std1.CWID = std1.ptr(intNum1);

  printf("Enter the GPA: ");
  scanf("%f",&newGPA);

  std1.ptr1 = setGPA;
  std1.GPA = std1.ptr1(newGPA);

  printf("Enter a age: ");
  scanf("%d",&intNum1);
  std1.ptr = set_age;
  std1.age = std1.ptr(intNum1);
  printStudent(std1);

  return 0;

}

void printStudent(struct Student std); //prints the data again
