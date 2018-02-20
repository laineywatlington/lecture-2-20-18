#include <iostream>
using namespace std;

void swap(int a, int b){
  int tmp = a;
  a = b;
  b = tmp;
}

int main(){
  int x = 10, y = 20;
  cout<< " x = "<<x<<" y = "<<y<<endl;
  swap(x,y);
  cout<<" x = "<<x<<" y = "<<y<<endl;
}
