#include<iostream>
#include <algorithm>
#include<vector>
#include<list>
#include "../include/Containers.h"
using namespace std;
Containers :: Containers(){
    st_squared.maximum = 0;
    st_squared.minimum = 0;
    st_squared.size = 0;
    st_squared.sum_of_squares = 0;
    };
Containers :: ~Containers(){cout<<"Destructor is being called \n";};
void Containers :: print()
{
    cout<<"Hello World! \n";
}
vector<int> Containers::Squared(vector<int> v)
{
    vector<int> multi;
    int mult =1;
   for(int i = 0; (i < v.size()); i++)
{
    mult = v[i]*v[i];
    multi.push_back(mult);
}
return multi;
}

list<int> Containers::Squared(list<int> l)
{
for (auto i = l.begin(); i != l.end(); ++i) {
    *i = *i * *i;
  }
return l;
}
void Containers::set_sum(vector <int> v)
{
    vector <int> mult = Squared(v);
   for(int i = 0; (i < v.size()); i++)
{
    st_squared.sum_of_squares += mult[i];
}
    st_squared.size = v.size();
    sort(mult.begin(),mult.end());
    st_squared.maximum=mult[mult.size()-1];
    st_squared.minimum=mult[0];
}
void Containers::set_sum(list <int> l)
{ list<int> l1=Squared(l);
    st_squared.size = l1.size();
for (auto i = l1.begin(); i != l1.end(); ++i) {
    st_squared.sum_of_squares += *i;
  }
    
    l1.sort();
    st_squared.maximum=l1.back();
    st_squared.minimum=l1.front(); 
}
int Containers::get_sum(){return st_squared.sum_of_squares;}
int Containers:: get_min(){return st_squared.minimum;}
int Containers::get_max(){return st_squared.maximum;}
int Containers::get_size(){return st_squared.size;}