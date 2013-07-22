#include<iostream>
using namespace std;

int maxSum(int *a,int len,int *start,int *end){
  int li=0, hi=0; /*best  lowindex and highindex found so far */
  int cli=0,chi=0; /* current lowindex and highindex */
  int sum=0; /* running sum */
  int maxsum=0; /* maximum sum found so far */
  for (int i =0; i< len; i++){
	if(sum < 0){
	  chi = cli = i;
	  sum = 0;
	}
	if((a[i] < 0  && sum > maxsum)){
	  li =cli;
	  hi= chi;							
	  maxsum = sum;
	}
	sum += a[i];
	chi = i;		
	if(i == len -1 && sum > maxsum){
		li = cli;
		hi = chi;
		maxsum = sum;	
	}
  }
  *start = li;
  *end= hi;
  return maxsum;
}	
int main(){
  int start;
  int end; 
  int *startp = &start ;
  int *endp = &end;
  int s;
  int sample[] = {1,2,3,4};
  int sample2[] = {-3,-2,-3,7};
  s = maxSum(sample,4,&start,&end);
  cout<<start << ":" << end <<":" << s <<endl;
}
