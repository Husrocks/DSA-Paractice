#include <iostream> 
using namespace std;
int main(){


    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >=18){
        cout << "You are an adult." << endl;
    } else if (age <18 ) {
        cout << "You are not an adult." << endl;
    }


    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks <= 25) {
        cout<< "grade F" << endl;
    }
    else if (marks <=44){
        cout << "grade E" << endl;}
    else if (marks <= 59) {
        cout << "grade D" << endl;
    }   
    else if (marks <= 74) {
        cout << "grade C" << endl;
    }
    else if (marks <= 89) {
        cout << "grade B" << endl;
    }
    else if (marks <= 100) {
        cout << "grade A" << endl;
    }
    else {
        cout << "Invalid marks" << endl;
    }
  





    int Age;
    cout << "Enter your age: ";
    cin >> Age;

    if (Age < 18) {
        cout << "You are a minor." << endl;
    } else {
        if (Age < 60) {
            cout << "You are an adult." << endl;
        } else {
            cout << "You are a senior citizen." << endl;
        }
    }



    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    switch(day){
        case 1:
        cout << "Monday" << endl;
        break;
        case 2:
        cout << "Tuesday" << endl;
        break;  
        case 3:
        cout << "Wednesday" << endl;
        break;  
        case 4:
        cout << "Thursday" << endl;
        break;
        case 5:
        cout << "Friday" << endl;
        break;
        case 6:
        cout << "Saturday" << endl;
        break;
        case 7:
        cout << "Sunday" << endl;
        break;
        default:
        cout << "Invalid input. Please enter a number between 1 and 7." << endl;
        break;

    }
    cout << "Have a great day!" << endl;
    return 0;
}


