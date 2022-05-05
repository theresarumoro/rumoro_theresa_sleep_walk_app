/*
Theresa Rumoro
CSCE 306; Spring 2022
Lab Assignment #13 - rumoro_theresa_lab13
 Person.cpp
*/

//Include needed libraries
#include "Individual.h"
#include <string>
#include <iostream>
using namespace std;

//Empty class constructor for Individual
Individual::Individual()
{}

Individual::Individual(std::string, std::string, std::string, int){}

//Set first name
void Individual::set_first_name(std::string firstname) {
    this -> first_name = firstname;
}
//Set last name
void Individual::set_last_name(std::string lastname){
    this -> last_name = lastname;
}
//Set nickname
void Individual::set_nickname(std::string othername){
    this -> nickname = othername;
}
//Set age
void Individual::set_age(int individual_age){
    this -> age = individual_age;
}

//Return first name
std::string Individual::get_first_name() {
    return this -> first_name;
}
//Return last name
std::string Individual::get_last_name(){
    return this -> last_name;
}
//Return nickname
std::string Individual::get_nickname() {
    return this -> nickname;
}
//Return age
int Individual::get_age(){
    return this -> age;
}

//Establish Individual's first name
std::string Individual::establish_first_name(){
    //Prompt user for the individual's first name
    cout << "Please enter your first name: " << endl;
    //Create variable fname
    std::string fname;
    //Send user's feedback to fname variable
    cin >> fname;
    //Return fname variable
    return fname;
}

//Establish Individual's last name
std::string Individual::establish_last_name(){
    //Prompt user for the individual's last name
    cout << "Please enter your last name: " << endl;
    //Create variable lname
    std::string lname;
    //Send user's feedback to lname variable
    cin >> lname;
    //Return lname variable
    return lname;
}

//Establish Individual's nickname
std::string Individual::establish_nickname(){
    //Prompt user for the individual's nickname
    cout << "Please enter your nickname: " << endl;
    //Create variable nname
    std::string nname;
    //Send user's feedback to nname variable
    cin >> nname;
    //Return nname variable
    return nname;
}

//Establish Individual's age
int Individual::establish_age(){
    //Prompt user for the individual's age
    cout << "Please enter your age: " << endl;
    //Create variable age
    int age;
    //Send user's feedback to age variable
    cin >> age;
    //Return age variable
    return age;
}

//Print out data of Person
void Individual::print_individual_information() {
    cout << "\tPerson Name: " << get_first_name() << " " << get_last_name() << endl;
    cout << "\tNickname: " << get_nickname() << endl;
    cout << "\tAge: " << get_age() << endl << endl;
}
