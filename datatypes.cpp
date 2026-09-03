#include <iostream>
#include <string>
using namespace std;

int main(){

    int x = 8.2; //8
    int y = 18 / 5; //3
    
    float e = 3.429; //3.429
    float f = 18 / 5; // 3

    char a = 'a'; //a
    char b = 'e'; //e   
    char c = b; // e

    bool r = true; //1
    bool u = (1 & 0); //0
    char letter = 'A';

    string p = "Klaar?"; //Klaar?
    string s = string("Nee, nog") + string(" niet"); //Nee, nog niet


    cout << "x is: " << x << endl;
    cout << "y is: " << y << "\n";
    cout << "e is: " << e;
    cout << "f is: " << f;
    cout << "a is: " << a;
    cout << "b is: " << b;
    cout << "c is: " << c;
    cout << "r is: " << r;
    cout << "u is: " << u;
    cout << "p is: " << p;
    cout << "s is: " << s;
    cout << letter;


}