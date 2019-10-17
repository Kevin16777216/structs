#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Student {
  char* name;
  double grade;
};

void printStudent(struct Student stud){
  printf("%s:%lf\n",stud.name,stud.grade);
}
void setStudentName(struct Student* stud, char* newName){
  stud->name = newName;
}
void setStudentGrade(struct Student* stud, double newGrade){
  stud->grade = newGrade;
}
void setRandomNameAndGrade(struct Student* stud){
  setStudentGrade(stud, 70 + rand() % 30);
  char* items[8];
  items[0] = "Jason";
	items[1] = "Jerry";
	items[2] = "Jolene";
	items[3] = "Jessica";
	items[4] = "Jonathan";
  items[5] = "Julia";
  items[6] = "Julian";
  items[7] = "Juile";
  setStudentName(stud, items[rand()%8]);

}
int main(void) {
  printf("Picking names for Students ...\n");
  srand(time(NULL));
  struct Student s1;
  struct Student s2;
  setRandomNameAndGrade(&s1);
  setRandomNameAndGrade(&s2);
  printStudent(s1);
  printStudent(s2);
  printf("(s1)Changing %s grade to 90\n",s1.name,90);
  setStudentGrade(&s1,90);
  printStudent(s1);
  printf("(s2)Changing %s name to Terry\n",s2.name);
  setStudentName(&s2,"Terry");
  printStudent(s2);
  return 0;
}
