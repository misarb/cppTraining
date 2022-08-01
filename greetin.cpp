// Online C++ compiler to run C++ program online


#include <iostream>
using namespace std;
int main()
{

std::cout << "Please enter your name" << std::endl;
std::string name ;
std::cin>>name;
const std::string greeting = "Hello "+name+"!";
cout<<greeting.size();
const std::string spaces(greeting.size(),' ');
const std::string second = "* " +spaces+" *";
const std::string first(second.size(),'*');
std::cout <<std::endl;
std::cout <<first<<std::endl;
std::cout <<second<<std::endl;
std::cout <<"* "<<greeting<<" *"<<std::endl;
std::cout <<second<<std::endl;
std::cout <<first<<std::endl;






return 0;
}