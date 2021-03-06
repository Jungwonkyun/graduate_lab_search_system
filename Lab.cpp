#include <map>

#include "Lab.h"


Lab::Lab() {}
Lab::Lab(std::string i_lab_name, std::string i_professor_name)
{
    lab_name = i_lab_name;
    professor_name = i_professor_name;
}

Lab::Lab(std::vector<std::string> input_information)
{
    lab_name = input_information[0];
    professor_name = input_information[1];
    career = input_information[2];
    URL = input_information[3];
    field1 = input_information[4];
    field2 = input_information[5];
    field3 = input_information[6];
}

Lab::~Lab() {};

std::string Lab::get_lab_name()
{
    return lab_name;
}

std::string Lab::get_professor_name()
{
    return professor_name;
}

std::string Lab::get_career(){
    return career;
}

std::string Lab::get_URL(){
    return URL;
}

std::string Lab::get_field1(){
    return field1;
}

std::string Lab::get_field2(){
    return field2;
}

std::string Lab::get_field3(){
    return field3;
}

void Lab::show_lab_information(){
    std::cout << "\nLab name: " << lab_name << std::endl;
    std::cout << "professor name: " << professor_name << std::endl;
    std::cout << "career: " << career << std::endl;
    std::cout << "URL: " << URL << std::endl;
    std::cout << "field :" << field1 << " " << field2 << " " << field3 << std::endl;
    return;
}

void Lab::calculate_score(const std::map<std::string, int>& w_fields){
    int count = 0;
    for (auto v : w_fields) {
        if (field1 != "" && field1 == v.first) {
            score += v.second;
        }
        else if (field2 != "" && field2 == v.first) {
            score += v.second;
        }
        else if (field3 != "" && field3 == v.first) {
            score += v.second;
        }
        count++;
    }
}

void Lab::init_score() {
    score = 0;
}


E3_ICE::E3_ICE(std::vector<std::string> information) : Lab(information) {}
E3_ICE::E3_ICE(std::string lab_name,std::string professor_name) : Lab(lab_name, professor_name){}

std::string E3_ICE::get_major()
{
    return major;
}

E5_ROBOT::E5_ROBOT(std::vector<std::string> information) : Lab(information) {}
E5_ROBOT::E5_ROBOT(std::string lab_name,std::string professor_name) : Lab(lab_name, professor_name){}

std::string E5_ROBOT::get_major()

{
    return major;
}