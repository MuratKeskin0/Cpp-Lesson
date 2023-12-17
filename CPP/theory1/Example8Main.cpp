#include <iostream>

using namespace std;

int findBonus(int workingHours)
{
   bool isDeserveBonus=false;
   int bonus=0;
   if(workingHours>75){
    isDeserveBonus=true;
   }

   if(isDeserveBonus){
     bonus+=(workingHours*2);
   }
   return bonus;
}


int findYourSalary(int salaryPerHour, int workingHours, int bonus)
{
    int total=0;
    total= (salaryPerHour*workingHours)+bonus;
    return total;   
}

int main(){
  int hours=0;
  int salaryForPerHour;
  int bonus;
  cout<<"Enter your working hours:"<< endl;
  cin>>hours;
  cout<<"Enter your salary for per hour:"<< endl;
  cin>>salaryForPerHour;
  bonus=findBonus(hours);
  cout<<"you earned $"<<bonus<<" bonus"<<endl;
  cout<<findYourSalary(hours,salaryForPerHour,bonus);

  


  return 0;
}