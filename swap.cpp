#include <iostream>
using namespace std;

void swap(int* a, int* b){ //a and b are pointers to integers
  int tmp = *a; //*a will give you the value of x because a is pointing to x. *a means dereference a
  *a = *b; //*b will give you value of y (20)
  *b = tmp; //change wherever b is pointing to tmp 
}

int main(){
  int x = 10, y = 20;
  cout<< " x = "<<x<<" y = "<<y<<endl;
  swap(&x,&y); //want to swap the address of a and b 
  cout<<" x = "<<x<<" y = "<<y<<endl;
}
