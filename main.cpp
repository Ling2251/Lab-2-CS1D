// Author Peijun Zhao and Yuan Cao
// Description: Hello World in C++ 
//============================================================ 
 
#include <iostream> 
using namespace std; 

int hello1Function(string name1); 
int hello2Function(string name2); 
int main() 
{ 
 string name1="Peijun Zhao"; 
 hello1Function(name1); 
 string name2="Yuan Cao"; 
 hello2Function(name2); 
 return 0; 
} 
 

/* 
 * hello1Function.cpp 
 * 
 */ 
int hello1Function(string name1) 
{ 
 cout << "hello World " << name1 << endl; 
 return 0; 
} 

 
/* 
 * hello2Function.cpp 
 * 
 */ 

int hello2Function(string name2) 
{ 
 cout << "hello World " << name2 << endl; 
 return 0; 
} 