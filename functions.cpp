// #include <iostream> 
// using namespace std;

// void printName(){
//     cout << "Striver" << endl; // Print a greeting message
// }

// void printNamewithparameters(string name , int age){
//     cout << "Hey " << name <<  "my age is"<< age<< endl; // Print a greeting message with the provided name
// } // Function prototype declaration


// int sum(int a, int b){ // Function to calculate the sum of two integers
//     int c = a + b; // Calculate the sum of a and b
//     return c; // Return the sum of a and b*/


//     //min max

// int maxx(int Num1, int Num2){ // Function to find the maximum of two integers
//     if( Num1 > Num2) {
//         return Num1; // Return num1 if it is greater than num2
//     }
//     else {
//         return Num2; // Return num2 if it is greater than or equal to num1
//     }
// }

    
//     int main(){
//     printName();
//     string name; // Call the function to print the name
//     int age; // Declare a variable to hold the age
//     cout << "Enter your name: ";
//     cin>> name; // Read a name from user input
//     cout << "Enter your age: ";
//     cin >> age;
//     printNamewithparameters(name , age); // Call the function with a parameter to print a personalized greeting
    

//     int a, b; // Declare two integer variables
//     cout << "Enter two numbers: ";  
//     cin >> a >> b; // Read two integers from user input
//     int c = sum(a, b); // Call the sum function to calculate the sum of a and b
//     cout << "The sum is: " << c << endl; // Print the result of the sum */

//     //min max
//     int num1, num2; // Declare two integer variables for max function
//     cout << "Enter two numbers to find the maximum: ";
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2); // Call the max function to find the maximum of num1 and num2
//     cout << "The maximum is: " << maximum << endl; // Print the result of the maximum

//     //In-Built Functions
//     // min max



    
//     return 0; // Return 0 to indicate successful execution
// }}
#include <iostream>
using namespace std;

// Function to print a greeting message
void printName() {
    cout << "Striver" << endl;
}

// Function to print a personalized message with name and age
void printNamewithparameters(string name, int age) {
    cout << "Hey " << name << ", my age is " << age << endl;
}

// Function to calculate the sum of two integers
int sum(int a, int b) {
    int c = a + b;
    return c;
}

// Function to find the maximum of two integers
int maxx(int Num1, int Num2) {
    if (Num1 > Num2) {
        return Num1;
    } else {
        return Num2;
    }
}

int main() {
    // Call the function to print the name
    printName();

    // Personalized greeting
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    printNamewithparameters(name, age);

    // Sum of two numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int c = sum(a, b);
    cout << "The sum is: " << c << endl;

    // Find maximum of two numbers
    int num1, num2;
    cout << "Enter two numbers to find the maximum: ";
    cin >> num1 >> num2;
    int maximum = maxx(num1, num2);
    cout << "The maximum is: " << maximum << endl;

    return 0;
}
