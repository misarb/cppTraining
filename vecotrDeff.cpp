// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string name;
    double midter,finterm;
    int count=0;
    double x;
    vector <double> homework;
     typedef vector<double>::size_type vec_size;
     vec_size mid,size;

   
    cout<<"Enter your name = ";
    cin>>name;
    cout<<"Enter your midter, "
    "and finTerm" <<endl;
    cin>>midter>>finterm;
    cout<<"ENTER YOUR HOMEWORK MARKS: "<<endl;
    while(cin>>x){
       
        homework.push_back(x);
        
     
         size = homework.size();
        if(size==0) return 1;
    }
  
    sort(homework.begin(),homework.end());
    mid=size/2;
    double midian = size%2==0?(homework[mid]+homework[mid-1])/2:(homework[mid]);
    
    cout<<"Hello "+name+"!"<<endl;

    cout << "Your final grade is " << +midian;

    
    
    

    return 0;
}