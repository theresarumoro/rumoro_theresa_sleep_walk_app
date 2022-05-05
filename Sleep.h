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

#ifndef RUMORO_THERESA_SLEEP_WALK_APP_SLEEP_H
#define RUMORO_THERESA_SLEEP_WALK_APP_SLEEP_H

//Inheritance title, inherits Person (inherit string?)
class Sleep : public Individual, public basic_string<char> {
public:

    Sleep();
    Sleep(Individual);
    Sleep(Individual, vector<int> sleeping_vector);

    std::vector<int> establish_sleeping();
    vector<int> get_sleeping();
//    void report_sleeping_information(vector<int> sleeping);

protected:
    void set_hours(vector<int> sleeping);

private:
    //Set private variables
    Individual Sleep_Individual;
    vector<int> sleeping_vector;
};

#endif //RUMORO_THERESA_SLEEP_WALK_APP_SLEEP_H
