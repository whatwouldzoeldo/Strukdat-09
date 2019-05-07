/*
Nama        : Muhammad ZUlfikar Ali
NPM         : 140810180064
Kelas       : B
Deskripse   : MEmbalikkan kata menggunakan stack linked list
Tahun       : 2019
*/

#include <iostream>

using namespace std;
struct Node {
   char data;
   struct Node *next;
};
struct Node* top = NULL;

void push(char val) {
   Node* newnode = new Node;
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
      cout<<"stack kosong";
   else {
      ptr = top;
      cout<<"reversed word : ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   char elementBaru;
   string word;

   cout << "Masukkan kata : "; cin >> word;

   for (int i=0; i<=word.length(); i++)
    {
        elementBaru = word[i];
        push(elementBaru);
    }

    display();
}
