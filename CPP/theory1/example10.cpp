#include <iostream>
using namespace std;

class Emplooye
{
private:
    char name[30]="murat";
    int age=20;
    int salary=50000;
public:
    void greeting(){
        cout<<"Hello I am "<<name<<" and my age is "<<age<<endl;
    }
    void increaseSalary();
    int getSalary();
};

void Emplooye::increaseSalary(){
    salary*=2;
}

int Emplooye::getSalary(){
    return salary;
}


int main(){
  Emplooye e;
  
  e.greeting();
  cout<<"Salary is: ";
  cout<<e.getSalary()<<endl;
  e.increaseSalary();
   cout<<"Salary is: ";
  cout<<e.getSalary()<<endl;
 

  return 0;
}