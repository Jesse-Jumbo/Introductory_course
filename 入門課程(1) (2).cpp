#if 0 

/*C++*/

/*�Ĥ@�q:�ѻ�*/
 
#include <iostream>						/*include�ޥΡA<>�O���Y�ɡA���q���{�o���m�����*/ 
using namespace std;					/*�bC++���|�Ψ쥦�A�bC����*/ 
/*�p�G���γo�ӫ��O�A�C��cout�Mcin�A���n��iostream::cout*/ 

int main(){								/*C++�_�Y*//*int��ƫ��A:��ƪ��Ʀr�Amain�D�n���N��A{}�禡*/
	cout << "Please enter a number:";   /*��X�@�ӪF��*/  
	
	return 0;					/*(�Ʀr�H�N�A���F�@�}�l���n�Fmain����ƫ��A��int�A�ҥH�̫�n�^�Ǥ@�Ӿ��)*/ 
 /*cin >> a								/*��J�@�ӪF��*//*�ݰ��D��*/
 }
#endif

#if 0  
/*�ĤG�q:�ѻ��бª��@�~1*/ 

#include<iostream>
using namespace std;

/*int �O��Ƹ�ƫ��A*/
/*char �O�r����ƫ��A*/
/*char x[999] �r���}�C��ƫ��A*//*�|�X�{999�檺�}�C*/  
/*�|��:*/ 
/*char x[10]={'w','o','r','k','1'};*/	/*�Ѿl���۬���*/



 int main(){
	/*�o��O���]�p�G�w���ɮצW
	char x[10]={'w','o','r','k','1','.','t','x','t'}; 
	*/
	char x[20]; 
	/*�`�N�n�����ɦW*/ 
	/*int x;��Ƥ��O��ơA�|�o�Ϳ��~*/
	/*char x;��Ʀ��Ů�A�|Ū������*/ 
    /*cout << "Input the filename";*/ 
	/*cin >> x;*/
	char ct1[10];
	char ct2[10];
	cout << "Input the filename:";
	cin >> x;
	cout<<x<<endl;
	FILE * f;
	f = fopen (x,"r"); 
	fscanf(f,"%s%s",&ct1,&ct2); /*��ƪ����A,"��ƪ����O",�s��b�Y�B*/ 
	fclose(f); /*�����}�ɮ״N�n���_�ɮ�*/ 
	cout<<ct1<<" "<<ct2; 
	return 0;
}
/*
1.Given the filename ���ӦW�r

2.Input the filename on command line �ݧڭ̤��W�O����?�ҥH�ڭ̭n��J���W

3.Open the file �}�Ҥ��

4.Read the file Ū����� 
*/
#endif

#if 1 
/*���D*/
#include<iostream>
using namespace std;
int main(){
	int a=10;        /*a�o���ܼƥ��O�ȬO10*/ 
	cout<<a<<endl;	 /**/ 
	cout<<&a<<endl;  /*��a�Ҧb�b�a�}�L�X��*/ 
	int *b=new int[1]; /*��t�έn�F�@�i���Pb�Anew�N��b���ػ\�F[1]�@�ɩФl(>1�N�O���ɩФl���X�h)*/ 
	*b=5;			   /*b�̦�F5*/ 
	cout<<b<<endl;     /*��b�L�X��*/ 
	cout<<*b<<endl;    /*��bb�̦��H�L�X��*/ 
	cout<<&b<<endl;
	return 0;
} 
#endif

#if 0 /*(���~)*/ 
int main(){

char *x= char[20];
x[0]='a';
x[1]='b';
cout<<x<<endl;
cout<<&x<<endl;

return 0;
}
#endif
