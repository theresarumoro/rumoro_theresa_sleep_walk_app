/*
Theresa Rumoro
CSCE 306; Spring 2022
Lab Assignment #13 - rumoro_theresa_lab13
 Student.cpp
*/

#include <vector>
#include <string>
#include <iostream>
#include "Sleep.h"
using namespace std;

//Object within an object
//Constructor that takes in no information
Sleep::Sleep()
{
    Sleep_Individual = Individual(establish_first_name(), establish_last_name(), establish_nickname(), establish_age());
    establish_sleeping();
}

Sleep::Sleep(Individual)
{
    set_hours(establish_sleeping());
}
Sleep::Sleep(Individual, vector<int> sleeping_vector){}

//Establish sleeping hours vector information
vector<int> Sleep::establish_sleeping(){
    //Prompt user for sleeping information
    cout << "Please enter hours of sleep each night for as many nights as you want:" << endl;
    cout << "Click enter after each night and enter 0 to end!" << endl;
    int hours;
    vector<int> sleeping_vector;
    while ((cin >> hours) && hours != 0){
        sleeping_vector.push_back(hours);
    }
    return sleeping_vector;
}

void report_sleeping_information(vector<int> sleeping_vector){
    //Reference below!
    //https://www.tutorialspoint.com/how-to-print-out-the-contents-of-a-vector-in-cplusplus
    for (int x=0; x<sleeping_vector.size(); x++)
        cout << sleeping_vector.at(x) << endl;
}


void Sleep::set_hours(vector<int> sleeping){
    this -> sleeping_vector = sleeping;
}

vector<int> Sleep::get_sleeping() {
    return this -> sleeping_vector;
}

////Getter to return degree pursued
//std::string Student::get_degree_pursued(){
//    return this -> degree_pursued;
//}