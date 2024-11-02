#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello world!" << endl;


    cout << "Enter your name: ";
    string name;
    getline(cin, name); 
    cout << "Hello " << name << "!" << endl;


    cout << "Enter number a: ";
    int a;
    cin >> a; 

    cout << "Enter number b: ";
    int b;
    cin >> b; 

    cout << "Sum: " << (a + b) << endl;
    cout << "Difference: " << (a - b) << endl;
    cout << "Product: " << (a * b) << endl;
	
	
	cout << "Enter A: ";
	int A;
	cin >> A;
	
	cout << "Enter B: ";
	int B;
	cin >> B;
	
	cout << "Enter C: ";
	int C;
	cin >> C;
	
	cout << "Square of parallelogram: " << (2 * A * B + 2 * B * C + 2 * A * C) << endl;
	cout << "Volume of parallelogram: " << (A * B * C) << endl;
	
	
	cout << "Enter radius: ";
	int radius;
	cin >> radius;
	
	float pi = 3.14;
	cout << "Square of circle: " << (pi * radius * radius) << endl;
	cout << "Length of circle: " << (2 * pi * radius) << endl;
		
		
	cout << "Enter P: ";
	float P;
	cin >> P;
	
	cout << "Enter T: ";
	int T;
	cin >> T;
	
	cout << "Enter R: ";
	float R;
	cin >> R;
	
	float I = (P * T * R) / 100;
	int i = (P * T * R) / 100;
	cout << "float I: " << I << endl;
	cout << "int I: " << i << endl;
	
    return 0;
}
