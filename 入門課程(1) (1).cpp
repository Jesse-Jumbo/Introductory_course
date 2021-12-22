#if 0 

/*C++*/

/*第一段:解說*/
 
#include <iostream>						/*include引用，<>是標頭檔，讓電腦認得內置的函數*/ 
using namespace std;					/*在C++都會用到它，在C不用*/ 
/*如果不用這個指令，每個cout和cin，都要打iostream::cout*/ 

int main(){								/*C++起頭*//*int資料型態:整數的數字，main主要的意思，{}函式*/
	cout << "Please enter a number:";   /*輸出一個東西*/  
	
	return 0;					/*(數字隨意，為了一開始說好了main的資料型態式int，所以最後要回傳一個整數)*/ 
 /*cin >> a								/*輸入一個東西*//*問問題用*/
 }
#endif

#if 0  
/*第二段:解說教授的作業1*/ 

#include<iostream>
using namespace std;

/*int 是整數資料型態*/
/*char 是字元資料型態*/
/*char x[999] 字元陣列資料型態*//*會出現999格的陣列*/  
/*舉例:*/ 
/*char x[10]={'w','o','r','k','1'};*/	/*剩餘為自為空*/



 int main(){
	/*這邊是假設如果已知檔案名
	char x[10]={'w','o','r','k','1','.','t','x','t'}; 
	*/
	char x[20]; 
	/*注意要有副檔名*/ 
	/*int x;資料不是整數，會發生錯誤*/
	/*char x;資料有空格，會讀取不到*/ 
    /*cout << "Input the filename";*/ 
	/*cin >> x;*/
	char ct1[10];
	char ct2[10];
	cout << "Input the filename:";
	cin >> x;
	cout<<x<<endl;
	FILE * f;
	f = fopen (x,"r"); 
	fscanf(f,"%s%s",&ct1,&ct2); /*資料的型態,"資料的型別",存放在某處*/ 
	fclose(f); /*有打開檔案就要關起檔案*/ 
	cout<<ct1<<" "<<ct2; 
	return 0;
}
/*
1.Given the filename 取個名字

2.Input the filename on command line 問我們文件名是什麼?所以我們要輸入文件名

3.Open the file 開啟文件

4.Read the file 讀取文件 
*/
#endif

#if 1 
/*例題*/
#include<iostream>
using namespace std;
int main(){
	int a=10;        /*a這個變數它是值是10*/ 
	cout<<a<<endl;	 /**/ 
	cout<<&a<<endl;  /*把a所在在地址印出來*/ 
	int *b=new int[1]; /*跟系統要了一張門牌b，new代表在那裏蓋了[1]一棟房子(>1就是那棟房子有幾層)*/ 
	*b=5;			   /*b裡住了5*/ 
	cout<<b<<endl;     /*把b印出來*/ 
	cout<<*b<<endl;    /*把在b裡住的人印出來*/ 
	cout<<&b<<endl;
	return 0;
} 
#endif

#if 0 /*(錯誤)*/ 
int main(){

char *x= char[20];
x[0]='a';
x[1]='b';
cout<<x<<endl;
cout<<&x<<endl;

return 0;
}
#endif
