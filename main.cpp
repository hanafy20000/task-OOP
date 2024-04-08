#include <iostream>
#include <string>
#include "salaried_employee.h"
#include "student.h"
#include "teaching_Assistant.h"
#include "employee.h"
#include "hourly_employee.h"

using namespace std;

int main()
{
 person *arr;
 student s1("mohamed ",24,"zag","egyption",2000,"frist","ios",2.5);
 arr=&s1;
 arr->display();
 cout<<"========================================="<<endl;
 salaried_employee e1("mohamed",24,"zag","egyption",2000,5000,"accountant","manager",3000,0);
 e1.display();
 cout<<"TotalSalary is : "<<e1.getTotalSalary()<<endl;
 cout<<"========================================="<<endl;
  hourly_employee sa("mohamed",24,"zag","egyption",2000,4000,"accountant","manager",30,50);
 sa.display();
 cout<<"TotalSalary is : "<<sa.getTotalSalary()<<endl;;
 cout<<"========================================="<<endl;
 teaching_Assistant t("mohamed",24,"zag","Egyption",2000,5000,"accountant","manager","business","accounting");
 t.display();
 cout<<"TotalSalary is : "<<t.getTotalSalary()<<endl;;
 cout<<"========================================="<<endl;


    return 0;
}
