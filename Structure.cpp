#include <iostream>
#include <algorithm>
using namespace std;

typedef struct
{
    char firstname[50];
    char lastname[50];
    int id;
    double cgpa;
    int solvedproblem;

}studenttype;
bool compare(studenttype a,studenttype b)
{
    if(a.solvedproblem>b.solvedproblem)
    {
        return 1;
    }
    else return 0;
}
bool compare01(studenttype c,studenttype d)
{
    if(c.cgpa>d.cgpa)
    {
        return 1;
    }
    else return 0;
}
bool compare02(studenttype e,studenttype f)
{
    if(e.id<f.id)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int n,i,j,k;
    int l,m;

    studenttype data[101];
    cout<<"Enter the number of students:";
    cin >> n;
    cout << "Enter your"<<endl<<"first and last Name   ID CGPA solved problems:" <<endl;
    for (int i = 0;i < n;i++)
    {

        cin>>data[i].firstname;
        cin>>data[i].lastname;
        cin >> data[i].id;
        cin >> data[i].cgpa;
        cin>>data[i].solvedproblem;
    }
    sort(data,data+n,compare);

     for(int j=0;j<n;j++)
     {
         for(int k;k<n;k++)
         {
             if(data[j].solvedproblem==data[k].solvedproblem)
             {
                 sort (data,data+n,compare01);
             }
         }
     }
     for( l=0;l<n;l++)
     {
         for(m;m<n;m++)
         {
             if(data[l].cgpa==data[m].cgpa)
             {
                 sort (data,data+n,compare02);

             }
         }
     }
     cout<<endl;
    cout<<"Name Id CGPA Solved problems"<<endl;
    for (i = 0;i < n;i++)
    {

        cout << data[i].firstname<<" ";
        cout<<data[i].lastname<< " ";
        cout << data[i].id <<" ";
        cout << data[i].cgpa <<" ";
        cout<<data[i].solvedproblem<<" ";
        cout<<endl;
    }
    return 0;
}

