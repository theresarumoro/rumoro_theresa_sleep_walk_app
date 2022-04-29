/*
Theresa Rumoro
CSCE 306; Spring 2022
Portfolio: rumoro_theresa_sleep_walk_app
    main.cpp

Code Summary:
*/

//Include needed libraries
using namespace std;
#include <string>
#include <vector>
#include <iostream>
#include "Activity.h"
#include "Sleep.h"
#include "Individual.h"


//Declare functions
void menu();
void choose_operation();
void personal_sleeping(sleeping_vector);
void personal_walking(walking_vector);
void compare(sleeping_array, walking_vector);
void improve_health();
void sleep_walk_app();
void sources();
int average(total_vector);
void helper_end();
void graph();

//Main introduces the user and calls the menu function
int main(){
    //Print statement to welcome the user
    cout << "Welcome to the Sleep-Walk App!" << endl;

    //Call report individual to get information needed for first name last name and age

    //Call report sleeping to get information

    //Call report steps to get information

    //Call menu function
    menu();
    return 0;
}

//Menu function displays the different functions of the app. The user can pick which one they want.
void menu(){
    //Print statements for the user to choose which operation they want to use
    cout << "\nWelcome to the main menu! " << endl;
    cout << "(This menu will appear again after your option is chosen)" << endl;
    cout << "\t1. Sleeping hours information" << endl;
    cout << "\t2. Steps information" << endl;
    cout << "\t3. Compare my data!" << endl;
    cout << "\t4. Improving health information" << endl;
    cout << "\t5. What is the Sleep-Walk App?" << endl;
    cout << "\t6. Sources" << endl;
    cout << "\t7. Exit" << endl;
    //Call choose_operation() function
    choose_operation();
}

//Choose_operation function allows the user to pick one of the menu options
void choose_operation(){
    //Print statement for the user
    cout << "\nPlease pick any of the options: " << endl;
    //Create a variable and then put the user input into that variable
    int operation_chosen;
    cin >> operation_chosen;
    //Checks to see if the user put in a number outside the desired range (1 to 6) and will call this function
    //again to restart the process.
//    if (operation_chosen < 1 || operation_chosen > 7) {
//        //Print statement to ask user for a valid input
//        cout << "\nPlease choose a valid option:" << endl;
//        //Call menu() function
//        menu();
//    }
//    //If statement checks to see if operation_chosen is 6
//    if (operation_chosen == 7) {
//    //Call helper_end() function
//        helper_end();
//    }
//    //if 1 was chosen
//    if (operation_chosen == 1){
//        //Call the addition function with the vector
//        addition(amazingVector);
//    }
//    //else if 2 was chosen
//    else if (operation_chosen == 2){
//    //Call the subtraction function with the vector
//    subtraction(amazingVector);
//    }
//    //else if 3 was chosen
//    else if (operation_chosen == 3){
//    //Call the multiplication function with the vector
//    multiplication(amazingVector);
//    }
//    //else if 4 was chosen
//    else if (operation_chosen == 4){
//    //Call the division function with the vector
//    division(amazingVector);
//    }
//    //else 5 was chosen
//    else {
//    //Call the average function with the vector
//    average(amazingVector);
//    }
//
//
//}




/*

Start choose_operation()
Print statement to ask the user for a value from the menu
	Create an integer variable, operation_chosen, and save user value to it
	Create an if statement to make sure the user did not choose a value outside of the
	menu options
		Print statement to ask the user for a valid input
		Call menu() function to allow the user to choose again
	if operation_chosen is A:
		Call personal_sleeping(sleeping_array)
	else if operation_chosen is B:
		Call subtraction(amazingVector)
	else if operation_chosen is C:
		Call multiplication(amazingVector)
	else if operation_chosen is D:
		Call division(amazingVector)
	else if operation_chosen is E:
		Call average(amazingVector)
	else if operation_chosen is F:
		Call average(amazingVector)
	else operation_chosen is G:
		Call helper_end()
End choose_operation()

Start helper_end()
	Print exit statement for the user
	Use exit(0) to force exit the program
End helper_end()

Start personal_sleeping(sleeping_array)
	Print that this will look at personal sleeping data
Print all 7 days of data in sleeping_array to the user
Call average(sleeping_array) function
Print average for the user
Call graph() function
Call menu() function
End personal_sleeping(sleeping_array)

Start average(array)
	Average = 0
Sum = Add all numbers in array
	Average = Divide by 7, total numbers in the array
	Return average
End average(array)

Start personal_walking(walking_array)
	Print that this will look at personal walking data
Print all 7 days of data in walking_array to the user
Call average(walking_array) function
Print average for the user
Call graph() function
Call menu() function
End personal_walking(walking_array)

Start graph(array)
End graph(array)

Start compare(sleeping_array, walking_array)
	Print that this will compare personal data to outside data
Print statement that says that this outside data is hardcoded and may be out of data, depending on when this program was last updated
Print average(sleeping_array) with introduction
Print average(walking_array) with introduction
Print overall average sleeping hours
Print overall average walking steps
Call graph() and add both sets of data
Call menu() function
End compare(sleeping_array, walking_array)

Start improve_health()
	Print introduction statement to this section
	Print list of websites for health, stores, and mental health information
End improve_health()

Start sleep_walk_app()
	Print what this app is and why it was created
End sleep_walk_app()

Start sources()
	Print sources used
End sources()

 */


