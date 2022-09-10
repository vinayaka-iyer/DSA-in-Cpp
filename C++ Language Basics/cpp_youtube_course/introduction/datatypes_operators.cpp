#include<iostream>
using namespace std;

int main(){

    //Datatypes
    int a = 123;
    cout << a << endl;

    char b = 'v';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    int size = sizeof(a);
    cout << "size of a is: " << size << endl;

    //Typecasting

    int al = 'a';
    cout << al << endl;

    char ch = 98;
    cout << ch << endl;

    //Division operator - important to consider datatype
    float c = 2.0/5;
    cout << c << endl;

    //Relational operators
    int x = 2;
    int y = 3;
    
    bool first = (x==y);
    cout << first << endl;

    bool second = (x>y);
    cout << second << endl;

    bool third = (x<y);
    cout << third << endl;

    bool fourth = (x!=y);
    cout << fourth << endl;

    //Logical operators: && || !
    int i = 0;
    cout << !i << endl;


}