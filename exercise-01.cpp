/*
Nama        : Muhammad ZUlfikar Ali
NPM         : 140810180064
Kelas       : B
Deskripse   : MEmbalikkan kata menggunakan stack array
Tahun       : 2019
*/

#include<iostream>
#include <string>

using namespace std;

const int MAX_ELEMENT=255;

struct Stack {
	char isi[MAX_ELEMENT];
	int Top;
};
Stack S;

void createStack (Stack& S){
	S.Top=-1;
}

void push (Stack& S, int elementBaru){
	if(S.Top==MAX_ELEMENT-1){
		cout << "Tumpukan penuh" << endl;
	}
	else {
		S.Top=S.Top+1;
		S.isi[S.Top]=elementBaru;
	}
}

void output(Stack S){
	for (int i=S.Top; i>=0;i--){
		cout << S.isi[i]<< endl;
	}
}

int main()
{
char elementBaru;
string word;
createStack(S);

cout << "input	: ";
cin >> word;


for (int i=0; i<=word.length(); i++)
{
    elementBaru = word[i];
	push(S,elementBaru);
}
	output(S);
}
