#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() 
{
    //Calorie Calculator
    /*
    cout << "Welcome to the calorie Calculator\n\n";

    //get number of servings from user
    double servings;
    cout << "Enter servings per food item: ";
    cin >> servings;

    //get number of calories from user
    double calories;
    cout << "Enter calories per serving: ";
    cin >> calories;

    //calculate total calories
    double total_calories = servings * calories;

    //display total calories
    cout << "Total Calories: " << total_calories << endl << endl;
    */

    //Gallon to Liters
    /*
    //print name of program
    cout << "Gallons Converter" << endl << endl;

    //get gallons from user
    double gallons;
    cout << "Enter gallons: ";
    cin >> gallons;

    //convert gallons to liters
    double liters = gallons * 3.7854;
    liters = round(liters * 100) / 100; //rounds the result
    double quarts = gallons * 4;
    quarts = round(quarts * 100) / 100;
    double ounces = gallons * 128;
    ounces = round(ounces * 100) / 100;

    //write output to console
    cout << "Liters:\t" << liters << endl 
        << "Quarts:\t" << quarts << endl 
        << "Ounces:\t" << ounces << endl 
        << "Bye!" << endl << endl;
    */
    
    //Circle Calculator
    /*
     cout << "Circle Calculator" << endl << endl;

    //get radius from user
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    //make calculations
    double pi = 3.14159;
    double diameter = 2 * radius;
    double circumference = diameter * pi;
    double area = pi * pow(radius, 2.0);

    //round to 1 decimal place
    circumference = round(circumference * 10) / 10;
    area = round(area * 10) / 10;

    //write output to console
    cout << "Diameter:      " << diameter << endl
         << "Circumference: " << circumference << endl
         << "Area:          " << area << endl
         << "Bye!:          ";
    */
   
    //Random Number die throw
    /*
    //use time() to get an int value
    int elapsed_seconds = time(nullptr);

    // seed the random number generator
    srand(elapsed_seconds);

    //roll the first die
    int die1 = rand() % 6; //die1 is >= 0 and < 6
    die1 = die1 + 1;       //die2 is >= 1 and <= 6

    //roll the second die
    int die2 = rand() % 6; //die2 is >= 0 and < 6
    die2 = die2 + 1;       //die2 is >= 1 and <= 6

    cout << "Your roll:  " << die1 << " " << die2;
    */
    
    //Guest Book
    ///*
    cout << "Guest Book\n\n";

    string first_name;
    cout << "First name:\t";
    cin >> first_name;            //get first string only
    cin.ignore(100, '\n');        //discard leftover chars and newline
    
    char middle_initial;
    cout << "Middle initial:\t";
    middle_initial = cin.get();   //get first char only
    cin.ignore(100, '\n');        //discard leftover chars and newline

    string last_name;
    cout << "Last name:\t";
    getline(cin, last_name);      //get entire line

    string address;
    cout << "Street Address:\t";
    getline(cin, address);

    string state;
    cout << "State:\t";
    state = cin.get();
    state += cin.get();
    cin.ignore(100, '\n');        //discard leftover chars and newline

    string postal_code;
    cout << "Postal Code:\t";
    cin >> postal_code;           //get first string only
    cin.ignore(100, '\n');        //discard leftover chars and newline

    string city;
    cout << "City:\t";
    getline(cin, city);           //get entire line

    string country;
    cout << "Country:\t";
    getline(cin, country);        //get entire line

    cout << "\nENTRY\n"           //display the entry
        << "Name:\t" + first_name + ' ' + middle_initial + ". " + last_name + '\n'
        << "Street Address:\t" + address + '\n'
        << "City:\t" + city + '\n'
        << "State:\t" + state + '\n'
        << "Postal Code:\t" + postal_code + '\n'
        << "Country:\t" + country + '\n';

    //*/
    
    //Rectangle Calculator
    /*
    double height;
    double width;
    cout << "Rectangle Calculator\n";
    cout << "Enter height and Width\t";
    cin >> height >> width;
    cout << "\nRectangle Area:\t" << height * width;
    */

    



    
}

