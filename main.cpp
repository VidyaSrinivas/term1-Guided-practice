//gd week1 ex2
//Calculating the number of distinction holders and number of failed students by using Arrays of Functions.
//student details given in structure

#include <iostream>
using namespace std;

struct studentresult
{
float Phy_Marks, Chem_Marks, Maths_Marks;
}studentarray[50];


void student(int size)
{
float average;
int nstud_dist=0,nstud_fail=0;
for(int i=0;i<size;i++)
{
//finding average
average =(studentarray[i].Phy_Marks+ studentarray[i].Chem_Marks+ studentarray[i].Maths_Marks)/3;
if (average>=70) 
nstud_dist++;
else if (average < 35) 
nstud_fail++;
}
cout<<endl<<"Number of students who are distinction holders: "<<nstud_dist;
cout<<endl<<"Number of students who have failed: "<<nstud_fail;
}
int main()
{
int count;
cout<<"Enter the number of students:";
cin>>count;
for (int i=0;i<count;i++)
{
cout<<"\n Enter the details of "<<i+1<<" student";
cout<<"\nMarks in Physics: ";
cin>>studentarray[i].Phy_Marks;
cout<<"\nMarks in Chemistry: ";
cin>>studentarray[i].Chem_Marks;
cout<<"\nMarks in Math: ";
cin>>studentarray[i].Maths_Marks;
}
student(count);
return 0;
}




