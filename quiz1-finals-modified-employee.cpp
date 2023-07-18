#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
struct Employee
{
    string name;
    double salary;
};
vector<Employee> readFile();
Employee largestSalary(vector<Employee> emp);
double averageSalary(vector<Employee> emp);
int main()
{
    vector<Employee> file = readFile();
    Employee e = largestSalary(file);

    cout<<e.name<<" "<<e.salary<<endl;
    cout<<averageSalary(file)<<endl;

    ofstream outText("Summary.txt");
    outText<<e.name<<'\t'<<e.salary<<endl;
    outText<<averageSalary(file);
    outText.close();
}
vector<Employee> readFile()
{
    ifstream empFile;
    empFile.open("EmployeeRecord.txt");
    Employee empList;
    vector<Employee> listEmp;
    if(empFile.is_open())
    {
        while(!(empFile.eof()))
        {
            getline(empFile, empList.name, '\t');
            empFile>>empList.salary;
            listEmp.push_back(empList);
        }
    }
    else
    {
        cout<<"File not found";
    }
    empFile.close();
    return listEmp;
}
Employee largestSalary(vector<Employee> emp)
{
    Employee temp = emp.at(0);
    for(int i=0; i<emp.size(); i++)
    {
        if(temp.salary < emp.at(i).salary)
            temp = emp.at(i);
    }
    return temp;
}
double averageSalary(vector<Employee> emp)
{
    double sum = 0;
    for(int i=0; i<emp.size(); i++)
    {
        sum += emp.at(0).salary;
    }
    return sum/static_cast<double>(emp.size());
}
