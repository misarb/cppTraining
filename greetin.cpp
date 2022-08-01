// Online C++ compiler to run C++ program online


#include <iostream>
int main()
{

std::cout << "Please enter your name" << std::endl;
std::string name ;
std::cin>>name;
const std::string greeting = "hello"+name+"!";
const std::string spaces(greeting.size(),' ');
const std::string second = "* " +spaces+" *";
const std::string first(second.size(),'*');
std::cout <<std::endl;
std::cout <<first<<std::endl;
std::cout <<second<<std::endl;
std::cout <<"*"<<greeting<<" *"<<std::endl;
std::cout <<first<<std::endl;
std::cout <<second<<std::endl;





return 0;
}