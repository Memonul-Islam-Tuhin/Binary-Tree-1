#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student left, Student right)
    {
        if (left.marks < right.marks)
        {
            return true;
        }
        else
        {
            return false;
        }

        // if (left.marks > right.marks)
        // {
        //     return true;
        // }
        // else if (left.marks < right.marks)
        // {
        //     return false;
        // }
        // else
        // {
        //     return left.roll > right.roll;
        // }
    }
};

int main()
{

    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student myObj(name, roll, marks);
        pq.push(myObj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}

/*
input format :
3
sakib 25 85
rakib 12 85
akib 7 95
*/

/*
1. Priority Queue
   -Max PQ
   -Min PQ
Problem - Custom Comparator for Priority Queue

Roll Name Marks given, print highest marks student information, if the marks is same print the name who has lower roll. (module- practice task)
*/