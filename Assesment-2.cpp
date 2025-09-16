#include<iostream>
#include<string.h>
using namespace std;
class lecture
{
    public:
    string lecture_name;
    string course;
    string subject_name;
    int lecture_no;
    lecture()
    {
        lecture_name=" ";
        course=" ";
        subject_name=" ";
        lecture_no=0;
        }
        void display()
        {
            cout<<"LECTURE NAME IS : "<<lecture_name<<endl;
            cout<<"COURSE IS : "<<course<<endl;
            cout<<"SUBJECT NAME IS : "<<subject_name<<endl;
            cout<<"LECTURE NUMBER IS : "<<lecture_no<<endl;
        }
        lecture(string a ,string b,string c, int d)
        {
            lecture_name=a;
            course=b;
            subject_name=c;
            lecture_no=d;
        }

};
int main()
{
    lecture l1[5];
    int i;
    for( i=0 ; i< 5 ;i++)
    {
        cout <<" ENTER LECTURE NAME : ";
        getline(cin,l1[i].lecture_name);
        cout<<"ENTER COURSE NAME : ";
        getline(cin,l1[i].course);
        cout<<"ENTER SUBJECT NAME : ";
        getline(cin,l1[i].subject_name);
        cout<<"ENTER LECTURE NUMBER : ";
        cin>>l1[i].lecture_no;
        cin.ignore();
    }
    cout<<">>>>>>>LECTURE'S DETAILS<<<<<<<"<<endl;
    for( i=0 ; i<5 ; i++)
    {
        lecture l2(l1[i].lecture_name,l1[i].course,l1[i].subject_name,l1[i].lecture_no);
        l2.display();
    }
    return 0;

}