#include <iostream>	
using namespace std;

int main(){	
	char *x=new char[20]; 
	char ct1[10];
	char ct2[10];
	cout << "Input the filename:";
	cin >> x;
	cout<<x<<endl;
	FILE * f;
	f = fopen (x,"r"); 
	
	if(!f){
		cout<<"Not found"<<endl; 
		return 0;
	}
	 
	fscanf(f,"%s%s",&ct1,&ct2);
	fclose(f); 
	cout<<ct1<<" "<<ct2; 
	
	f = fopen (x,"w");
	fprintf(f,"%s","Hello World and Hello Tainwan!!");
	fclose(f);
	
	return 0;
}
