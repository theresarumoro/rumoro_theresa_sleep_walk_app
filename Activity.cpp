/*
Theresa Rumoro
CSCE 306; Spring 2022
Lab Assignment #13 - rumoro_theresa_lab13
 Student.cpp
*/

#include <vector>
#include <string>
#include <iostream>
#include "Activity.h"
using namespace std;

//Object within an object
//Constructor that takes in no information
Activity::Activity()
{
    Activity_Individual = Individual(establish_first_name(), establish_last_name(), establish_nickname(), establish_age());
    set_steps(establish_walking());
}

Activity::Activity(Individual)
{
    set_steps(establish_walking());
}
Activity::Activity(Individual, vector<int> walking_vector){}

//Establish sleeping hours vector information
vector<int> Activity::establish_walking(){
    //Prompt user for sleeping information
    cout << "Please enter steps each day for as many days as you want:" << endl;
    cout << "Click enter after each day and enter 0 to end!" << endl;
    int hours;
    vector<int> walking_vector;
    while ((cin >> hours) && hours != 0){
        walking_vector.push_back(hours);
    }
    return walking_vector;
}
void Activity::set_steps(vector<int> steps){
    this -> walking_vector = steps;
}

vector<int> Activity::get_steps() {
    return this -> walking_vector;
}
