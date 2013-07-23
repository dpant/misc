#include<iostream>
using namespace std;

unsigned int binary_mult(unsigned int num1,unsigned int num2){
  unsigned int result = 0;
  int shift=0;
  while(num2){
	if(num2 %2 == 1){
	  result += num1<<shift;
	}
	num2 = num2 >>1;
	shift++;
  }
  return result;
}

int main(){
  unsigned int i = 11;
  unsigned int j = 22;
  cout << binary_mult(11,22) <<endl;
  return 0;
}
