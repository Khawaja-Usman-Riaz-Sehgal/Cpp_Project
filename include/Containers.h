#ifndef Containers_H
#define Containers_H

#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Containers {
    private:
        //int sum_of_squares;
        struct stats_squared {
            int sum_of_squares;
            int minimum;
            int maximum;
            int size;
        };
        stats_squared st_squared;

    public:
        Containers();
        ~Containers();
        void print();
        vector <int> Squared(vector <int> v);
        list <int> Squared(list <int> l);
        void set_sum(vector <int> v);
        void set_sum(list <int> l);
        int get_sum();
        int get_min();
        int get_max();
        int get_size();

};

#endif /* Containers_H */