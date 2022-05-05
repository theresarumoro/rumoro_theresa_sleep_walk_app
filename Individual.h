/*
Theresa Rumoro
CSCE 306; Spring 2022
Lab Assignment #13 - rumoro_theresa_lab13
 Person.h
*/

//Include needed libraries
#include <string>
#include <iostream>
using namespace std;

#ifndef RUMORO_THERESA_SLEEP_WALK_APP_INDIVIDUAL_H
#define RUMORO_THERESA_SLEEP_WALK_APP_INDIVIDUAL_H

class Individual {

public:
    //Constructor for a person, no information given about them, just the shell of it
    Individual();

    Individual(std::string, std::string, std::string, int);

    //Print out data of Person
    void print_individual_information();

    //Get first name
    std::string get_first_name();
    //Get last name
    std::string get_last_name();
    //Get nickname
    std::string get_nickname();
    //Get age
    int get_age();

protected:
    //Set first name, last name, nickname, and age
    void set_first_name(std::string);
    void set_last_name(std::string);
    void set_nickname(std::string);
    void set_age(int);

    //Create variables for first name, last name, and nickname
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int age;

    //Establish information not given
    std::string establish_first_name();
    std::string establish_last_name();
    std::string establish_nickname();
    int establish_age();
};

#endif //RUMORO_THERESA_SLEEP_WALK_APP_INDIVIDUAL_H
