#include<iostream>
#include "../include/Containers.h"
using namespace std;
int main()
{
    Containers c,c1;
    vector<int> v = {1,2,3,4,5,6};
    vector<int> squared=c.Squared(v);
    list<int> l = {1,2,3,4};
    list <int> listmultiple=c.Squared(l);
    c.print();
    

    cout<<"--------Vector & Squared Vector----------- \n";
    cout<<"vector => ";
    for (auto it = v.cbegin(); it != v.cend(); it++)
	{
		cout << *it << ' ';
	}
    cout<<"\n";
    cout<<"squared vector => ";
    for (auto it = squared.cbegin(); it != squared.cend(); it++)
	{
		cout << *it << ' ';
	}
    cout<<"\n";

   cout<<"--------List & Squared List---------------\n";

    cout<<"list => ";
    for (auto it = l.cbegin(); it != l.cend(); it++)
	{
		cout << *it << ' ';
	}
    cout<<"\n";
    cout<<"squared list => ";
    for (auto it = listmultiple.cbegin(); it != listmultiple.cend(); it++)
	{
		cout << *it << ' ';
	}
    cout<<"\n";
    
    cout<<"----------------Set sums------------------ \n";
    cout<<"Vector: setting sum \n";c.set_sum(v);
    cout<<"List:   setting sum \n";c1.set_sum(l);

    cout<<"----------------Sum of Squares------------ \n";
    cout<<"Vector: sum of squares => "<<c.get_sum()<<endl;
    cout<<"List:   sum of squares => "<<c1.get_sum()<<endl;

    cout<<"----------------Maximum of Squares-------- \n";
    cout<<"Vector: max of squares => "<<c.get_max()<<endl;
    cout<<"List:   max of squares => "<<c1.get_max()<<endl;

    cout<<"----------------Minimum of Squares-------- \n";
    cout<<"Vector: min of squares => "<<c.get_min()<<endl;
    cout<<"List:   min of squares => "<<c1.get_min()<<endl;

    cout<<"----------------Size of Squares----------- \n";
    cout<<"Vector: size of squares => "<<c.get_size()<<endl;
    cout<<"List:   size of squares => "<<c1.get_size()<<endl;
    cout<<"\n";
    return 0;
}