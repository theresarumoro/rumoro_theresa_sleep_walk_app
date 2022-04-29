/*
Theresa Rumoro
CSCE 306; Spring 2022
Lab Assignment #13 - rumoro_theresa_lab13
 Student.cpp
*/

#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

////Object within an object
////Constructor that takes in no information
//Student::Student()
//{
//    //Establish means get and establish includes prompts and automatically sets the information
//    //Gets and sets student name
//    set_preferred_name(establish_student_name());
//    //Gets and sets student id
//    set_student_id(establish_student_id_number());
//    //Gets and sets student gpa
//    set_grade_point_average(establish_student_gpa());
//    //Gets and sets student degree pursuit
//    set_degree_pursued(establish_student_degree_pursuit());
//    //Create person object inside the Student class object constructor
//    //Instantiating an object inside a child object
//    Student_Person = Person(establish_year(), establish_loc(), establish_name());
//}
//
////Constructor that takes in some given information with Person as an object
//Student::Student(Person a_person)
////Get needed information from Person object
//        : Student_Person(a_person.get_person_year(), a_person.get_person_location(), a_person.get_person_name())
//{
//    //Gets and sets student name
//    set_preferred_name(establish_student_name());
//    //Gets and sets student id
//    set_student_id(establish_student_id_number());
//    //Gets and sets student gpa
//    set_grade_point_average(establish_student_gpa());
//    //Gets and sets student degree pursuit
//    set_degree_pursued(establish_student_degree_pursuit());
//}
//
////Constructor that has some given information
//Student::Student(int the_year, std::string the_location, std::string the_name)
////Get needed parameters, the given information
//        : Student_Person(the_year, the_location, the_name)
//{
//    //Gets and sets the student name
//    set_preferred_name(establish_student_name());
//    //Gets and sets the student id
//    set_student_id(establish_student_id_number());
//    //Gets and sets the student gpa
//    set_grade_point_average(establish_student_gpa());
//    //Gets and sets the student degree pursuit
//    set_degree_pursued(establish_student_degree_pursuit());
//}
//
////Constructor that has some given information
//Student::Student(std::string as_name, int as_id, float as_gpa, std::string as_degree)
////Send parameters to functions and have them recorded
//        : preferred_name{as_name}, student_id{as_id},
//          grade_point_average{as_gpa}, degree_pursued{as_degree}
//{
//    //Create Person object
//    Student_Person = Person(establish_year(), establish_loc(), establish_name());
//}
//
////Constructor that has some given information
//Student::Student(std::string a_name, int an_id, float start_gpa, std::string the_degree, int this_date, std::string this_loc, std::string this_name)
////Send parameters to functions and have them recorded
//        : preferred_name{a_name}, student_id{an_id},
//          grade_point_average{start_gpa}, degree_pursued{the_degree},
//          Student_Person(this_date, this_loc, this_name)
//{}
//
////Constructor that has some given information
//Student::Student(std::string a_name, int an_id, float start_gpa, std::string the_degree, Person aPerson)
////Send parameters to functions and have them recorded
//        : preferred_name{a_name}, student_id{an_id},
//          grade_point_average{start_gpa}, degree_pursued{the_degree},
//          Student_Person(aPerson.get_person_year(), aPerson.get_person_location(), aPerson.get_person_name())
//{}
//
////Getters below
////Getter to return preferred name
//std::string Student::get_preferred_name(){
//    return this -> preferred_name;
//}
//
////Getter to return student id
//int Student::get_student_id(){
//    return this -> student_id;
//}
//
////Getter to return grade point average
//float Student::get_grade_point_average(){
//    return this -> grade_point_average;
//}
//
////Getter to return degree pursued
//std::string Student::get_degree_pursued(){
//    return this -> degree_pursued;
//}
//
////Student_Person is a data member
////Using parent class to get these getters
////Getter to return person name from Person class
//std::string Student::get_student_p_name() {
//    return Student_Person.get_person_name();
//}
//
////Getter to return person location from Person class
//std::string Student::get_student_p_location() {
//    return Student_Person.get_person_location();
//}
//
////Getter to return person birth year from Person class
//int Student::get_student_p_year() {
//    return Student_Person.get_person_year();
//}
//
////Getter to call the report person data from Person class
//void Student::get_student_person_data() {
//    Student_Person.report_person_data();
//}
//
////Setters below
////Setter to set preferred name to this name variable
//void Student::set_preferred_name(std::string this_name){
//    this -> preferred_name = this_name;
//}
//
////Setter to set student id to std id variable
//void Student::set_student_id(int std_id){
//    this -> student_id = std_id;
//}
//
////Setter to set grade point average to new gpa
//void Student::set_grade_point_average(float new_gpa){
//    this -> grade_point_average = new_gpa;
//}
//
////Setter to set degree pursued to pursuing degree
//void Student::set_degree_pursued(std::string pursuing_degree){
//    this -> degree_pursued = pursuing_degree;
//}
//
////Establish student name
//std::string Student::establish_student_name(){
//    //Prompt user for the student's preferred name
//    cout << "Please enter preferred name for Student: " << endl;
//    //Create variable name pname
//    std::string pname;
//    //Send user's feedback to pname variable
//    cin >> pname;
//    //Return pname variable
//    return pname;
//}
//
////Establish student id number
//int Student::establish_student_id_number(){
//    //Prompt user for the student's id number
//    cout << "Please enter student ID number: " << endl;
//    //Create variable name id num
//    int id_num;
//    //Send user's feedback to id num variable
//    cin >> id_num;
//    //Return id num variable
//    return id_num;
//}
//
////Establish student gpa
//float Student::establish_student_gpa(){
//    //Prompt user for the student gpa
//    cout << "Please enter initial student GPA: " << endl;
//    //Create variable name gpa
//    float gpa;
//    //Send user's feedback to gpa variable
//    cin >> gpa;
//    //Return gpa variable
//    return gpa;
//}
//
////Establish student degree pursuit
//std::string Student::establish_student_degree_pursuit(){
//    //Prompt user for the degree pursuit
//    cout << "Please enter degree being pursued: " << endl;
//    //Create variable name degree
//    std::string degree;
//    //Send user's feedback to degree variable
//    cin >> degree;
//    //Return degree variable
//    return degree;
//}
//
////Establish student's birth year
//int Student::establish_year(){
//    //Prompt user for birth year
//    cout << "Please enter the birth year: " << endl;
//    //Create variable name year
//    int year;
//    //Send user's feedback to year variable
//    cin >> year;
//    //Return year variable
//    return year;
//}
//
////Establish student's location
//std::string Student::establish_loc(){
//    //Prompt user for location
//    cout << "Please enter the home city: " << endl;
//    //Create variable name city
//    std::string city;
//    //Send user's feedback to city variable
//    cin >> city;
//    //Return city variable
//    return city;
//}
//
////Establish student's name
//std::string Student::establish_name(){
//    //Prompt user for name
//    cout << "Please enter given name: " << endl;
//    //Create variable given name
//    std::string given_name;
//    //Send user's feedback to given name variable
//    cin >> given_name;
//    //Return given name variable
//    return given_name;
//}
