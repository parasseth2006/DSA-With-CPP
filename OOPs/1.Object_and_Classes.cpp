#include <bits/stdc++.h>
using namespace std;
class Teacher{
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;

    //Setter
    void setSalary(double s){
        salary = s;
    }
    //Getter
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "Anuradha";
    t1.dept = "CSE DS";
    t1.subject = "CN";
    t1.setSalary(45000);
    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
}