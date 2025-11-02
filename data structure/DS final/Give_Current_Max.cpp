#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;

    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks != b.marks)
        {
            return a.marks < b.marks;
        }
        else
        {
            return a.roll > b.roll;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<student, vector<student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(student(name, roll, marks));
    }

    int t;
    cin >> t;
    while (t--)
    {
        int op;
        cin >> op;
        if (op == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(student(name, roll, marks));
            student topStudent = pq.top();
            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            continue;
        }

        if (pq.empty())
        {
            cout << "Empty" << endl;
            continue;
        }

        if (op == 1)
        {
            student topStudent = pq.top();
            cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
        }
        else if (op == 2)
        {
            pq.pop();
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
        }
    }
    return 0;
}