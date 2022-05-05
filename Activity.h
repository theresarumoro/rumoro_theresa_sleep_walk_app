/*
Theresa Rumoro
CSCE 306; Spring 2022
Lab Assignment #13 - rumoro_theresa_lab13
 Student.h
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Individual.h is parent class
#include "Individual.h"

#ifndef RUMORO_THERESA_SLEEP_WALK_APP_ACTIVITY_H
#define RUMORO_THERESA_SLEEP_WALK_APP_ACTIVITY_H

//Inheritance title, inherits Person (inherit string?)
class Activity : public Individual, public basic_string<char> {
public:

    Activity();
    Activity(Individual);
    Activity(Individual, vector<int> walking_vector);

    std::vector<int> establish_walking();
    vector<int> get_steps();
protected:
    void set_steps(vector<int> walking);

private:
    //Set private variables
    Individual Activity_Individual;
    std::vector<int> walking_vector;
};

#endif //RUMORO_THERESA_SLEEP_WALK_APP_ACTIVITY_H
