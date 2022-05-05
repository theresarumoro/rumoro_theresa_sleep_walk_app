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
void choose_operation(vector<int> sleeping_vector, vector<int> walking_vector);
void personal_sleeping(vector<int> sleeping_vector);
void personal_walking(vector<int> walking_vector);
void compare(vector<int> sleeping_array, vector<int> walking_vector);
void improve_health();
void sleep_walk_app();
void sources();
int average(vector<int> total_vector);
void helper_end();

Individual Person1("Theresa", "Rumoro", "Tree", 20);
//    vector<int> sleeping_vector;
Sleep sleep(Person1);
static vector<int> sleeping_vector = sleep.get_sleeping();
//    vector<int> sleeping_vector;
//    sleeping_vector = sleep.establish_sleeping();
Activity walking(Person1);
static vector<int> walking_vector = walking.get_steps();

//Main introduces the user and calls the menu function
int main(){
    //Print statement to welcome the user
    cout << "Welcome to the Sleep-Walk App!" << endl;

    //Call report individual to get information needed for first name last name and age
//    Individual Person1("Theresa", "Rumoro", "Tree", 20);
    //Call report sleeping to get information
//    Individual Person1("Theresa", "Rumoro", "Tree", 20);
////    vector<int> sleeping_vector;
//    Sleep sleep(Person1);
//    static vector<int> sleeping_vector = sleep.get_sleeping();
////    vector<int> sleeping_vector;
////    sleeping_vector = sleep.establish_sleeping();
//    Activity walking(Person1);
//    static vector<int> walking_vector = walking.get_steps();
//    walking_vector = walking.establish_walking();
//    vector<int> sleeping_vector;
//    Sleep sleep(Person1, sleeping_vector);
//    sleeping_vector = sleep.establish_sleeping();

    //Call report steps to get information
//    Activity();
    //Call menu function
    cout << "sleep: " << sleeping_vector.size() << "steps: " << walking_vector.size() << endl;

    choose_operation(sleeping_vector, walking_vector);
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
}

//Choose_operation function allows the user to pick one of the menu options
void choose_operation(vector<int> sleeping_vector, vector<int> walking_vector){

    menu();
    //Print statement for the user
//    cout << "sleep: " << sleeping_vector.size() << "steps: " << walking_vector.size() << endl;
    cout << "\nPlease pick any of the options: " << endl;
    //Create a variable and then put the user input into that variable
    int operation_chosen;
    cin >> operation_chosen;
    //Checks to see if the user put in a number outside the desired range (1 to 6) and will call this function
    //again to restart the process.
    if (operation_chosen < 1 || operation_chosen > 7) {
        //Print statement to ask user for a valid input
        cout << "\nPlease choose a valid option:" << endl;
        //Call menu() function
        menu();
    }
    //If statement checks to see if operation_chosen is 6
    if (operation_chosen == 7) {
    //Call helper_end() function
        helper_end();
    }
    //if 1 was chosen
    if (operation_chosen == 1){
        //Call the personal_sleeping function with the vector
        personal_sleeping(sleeping_vector);
    }
    //else if 2 was chosen
    else if (operation_chosen == 2){
        //Call the personal_walking function with the vector
        personal_walking(walking_vector);
    }
    //else if 3 was chosen
    else if (operation_chosen == 3){
        //Call the compare function with the two vectors
        compare(sleeping_vector, walking_vector);
    }
    //else if 4 was chosen
    else if (operation_chosen == 4){
        //Call the improve_health function
        improve_health();
    }
    //else 5 was chosen
    else if (operation_chosen == 5){
        //Call the sleep_walk_app function
        sleep_walk_app();
    }
    else if (operation_chosen == 6){
        //Call the sources function
        sources();
    }
}

//Function to force the program to close if the user wants to do that
void helper_end(){
    //Print statement for the user
    cout << "Exiting the program now, thank you for using the Sleep-Walk App!" << endl;
    //Force exits the program
    exit(0);
}


void personal_sleeping(vector<int> sleeping_vector){
    //Print statement for the user
    cout << "Sleeping hours information:" << endl;
    cout << "size" << sleeping_vector.size() << endl;
    //Print user's data
    cout << "Your data:" << endl;
    //For loop to iterate through the vector
//    for (vector<Sleep>::iterator it = sleeping_vector.begin();
//            it != sleeping_vector.end(); ++it);
//    for (Sleep s : sleeping_vector)
//        //Call report_sleeping_information with the vector sleeping object to print the information
//        s.report_sleeping_information;

    for (int x=0; x<sleeping_vector.size(); x++)
        cout << sleeping_vector.at(x) << endl;

    //Print average and call average function with sleeping_vector
    cout << "Average: " << average(sleeping_vector) << endl;
    //Call menu function
    choose_operation(sleeping_vector, walking_vector);
}

void personal_walking(vector<int> walking_vector){
    //Print statement for the user
    cout << "Steps information:" << endl;
    //Print user's data
    cout << "Your data:" << endl;
    //For loop to iterate through the vector
    for (int x=0; x<walking_vector.size(); x++)
        cout << walking_vector.at(x) << endl;

//    for (Activity a : walking_vector)
//        //Call report_steps_information with the vector activity object to print the information
//        a.report_steps_information;
    cout << "Average: " << average(walking_vector) << endl;
    //Call menu function
    choose_operation(sleeping_vector, walking_vector);
}

//Find average of vector information
int average(vector <int> total_vector){
    //Create average variable as double
    double average = 0.0;
    //Create sum variable as double
    double sum = 0.0;
    //Create vectorSize variable as int with the vector size
    int vectorSize = total_vector.size();
    //Iterate through the vector from the beginning to the end
    //Reference below!
    //https://stackoverflow.com/questions/3221812/how-to-sum-up-elements-of-a-c-vector
    for (std::vector<int>::iterator it = total_vector.begin(); it != total_vector.end(); ++it)
        //Add the values in the vector to the sum
        sum += *it;
    //Find average by dividing vectorSize by sum
    average = sum/vectorSize;
    //Return average
    return average;
}

//Compare information
void compare(vector<int> sleeping_vector, vector<int> walking_vector){
    //Print individual's information and data average information
    cout << "Your information will be compared to hardcoded information, meaning that it may be outdated." << endl
    << "Your average sleeping hours: " << average(sleeping_vector) << endl
    << "Your average steps: " << average(walking_vector) << endl
    << "Data average sleeping hours: ______" << endl
    << "Data average steps: ______" << endl;
    //Call menu function
    choose_operation(sleeping_vector, walking_vector);
}

//Tips on how to improve health
void improve_health(){
    //Print information
    cout << "Here is some information to help improve your health!" << endl
    << "______" << endl;
    choose_operation(sleeping_vector, walking_vector);

}

//Print information on the Sleep Walk App
void sleep_walk_app(){
    //Print information
    cout << "______" << endl;
    choose_operation(sleeping_vector, walking_vector);

}

void sources(){
    //Print information
    cout << "______" << endl;
    choose_operation(sleeping_vector, walking_vector);

}
