/*
Theresa Rumoro
CSCE 306; Spring 2022
Lab Assignment #13 - rumoro_theresa_lab13
 Student.h
*/




//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
////Person.h is parent class
//#include "Person.h"
//
//#ifndef RUMORO_THERESA_LAB12_STUDENT_H
//#define RUMORO_THERESA_LAB12_STUDENT_H
//
////Inheritance title, inherits Person (inherit string?)
//class Student : public Person, public basic_string<char> {
//public:
//    //Constructor with no information
//    Student();
//    //Constructor with a Person Object
//    Student(Person);
//    //Constructor with 3 pieces of information for the student (No person object)
//    Student(int, std::string, std::string);
//    //Constructor with 7 pieces of information for the student (No person object)
//    Student(std::string, int, float, std::string, int, std::string, std::string);
//    //Constructor with 5 pieces of information for the student, Person holds the three data types above (Person object)
//    Student(std::string, int, float, std::string, Person);
//    //Constructor with 4 pieces of information for the student (No person object)
//    Student(std::string, int, float, std::string);
//
//    //Getters that get the needed information
//    std::string get_preferred_name();
//    int get_student_id();
//    float get_grade_point_average();
//    std::string get_degree_pursued();
//    std::string get_student_p_name();
//    std::string get_student_p_location();
//    int get_student_p_year();
//    void get_student_person_data();
//
//protected:
//
//    //Setters for updating Student_Person information (no prompts)
//    void set_preferred_name(std::string);
//    void set_student_id(int);
//    void set_grade_point_average(float);
//    void set_degree_pursued(std::string);
//
//    //Setters for establishing the needed data in Student (with prompts)
//    std::string establish_student_name();
//    int establish_student_id_number();
//    float establish_student_gpa();
//    std::string establish_student_degree_pursuit();
//
//    //Setters for establishing the needed data in Student_Person (with prompts)
//    int establish_year();
//    std::string establish_loc();
//    std::string establish_name();
//
//private:
//    //Set private variables, which can only be used in the Student class
//    std::string preferred_name;
//    int student_id;
//    float grade_point_average;
//    std::string degree_pursued;
//    Person Student_Person; //Includes date, location, and name
//};
//
//#endif //RUMORO_THERESA_LAB12_STUDENT_H
