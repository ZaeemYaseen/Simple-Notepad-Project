#include<iostream>
#include<string.h>
#include<windows.h>
#include<limits.h>
using namespace std;

class NODE
{
public:
	int value;
	string DATA;
	NODE *LEFT;
	NODE *RIGHT;
	NODE *TOP;
	NODE *BOTTOM;
	
	NODE();			//CONSTRUCTOR**********************************************

	~NODE();		//DESTRUCTOR***********************************************
};

class NOTEPAD
{
public:
	NODE *ROOT;
	string arr[1000];
	
	NOTEPAD();//CONSTRUCTOR********************************
	
	void filling();
	void insert(int X, int Y);			//ADD A TEXT FUNCTION
	void delet(string x); 
	void search();
	string copy(int X, int Y);
	void paste(int X, int Y, string word);
	void find(string word);
	int count();
	void filled();
	void display();
	void undo();
	void push();

	~NOTEPAD();			//DESTRUCTOR*************************
};
void maker();