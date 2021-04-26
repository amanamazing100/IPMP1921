#include <iostream>
#include <stdlib.h>

using namespace std;
class stack{
	int *arr;
	int size;
	int top1, top2;

public:
	stack(int n){
		arr=new int[n];
		size=n;
		top1=-1;
		top2=size;
	}

	void push1(int num){
		if(top2-top1>1){
			arr[++top1]=num;
		}
		else cout<<"stack1 overflow"<<endl;
	}
	void push2(int num){
		if(top2-top1>1){
			arr[--top2]=num;
		}
		else cout<<"stack2 overflow"<<endl;
	}
	int pop1(){
		if(top1>=0){
			return arr[top1--];
		}
		else cout<<"stack1 empty"<<endl;
	}
	int pop2(){
		if(top1<size){
			return arr[top2++];
		}
		else cout<<"stack2 empty"<<endl;
	}
};
