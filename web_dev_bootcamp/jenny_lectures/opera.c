#include<stdio.h> // Including header file
#include <conio.h>
int main(){

  int myChar; // creating a variable to store the input 
  myChar = getch(); // use getchar to fetch input
  printf("You entered:  %c", myChar); // print input on screen
  return 0;
}
