#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()

{


    char ch;
    float comf,comfs,hist,phy,phys,eng,Gpa,Cgpa;

    cout<<"\n ===============================";
    cout<<"\n Press [C]GPA Or [G]PA Or [Q]uit : ";
    cin>>ch;

    //Condition Block Start
    if (ch=='q'||ch=='Q')
    {
        cout<<" ==============================="<<endl;
        cout<<"\n Quiting."<<endl<<endl;
    }
    else if(ch=='c'||ch=='C')//Condition Block Running
    {
        cout<<" ==============================="<<endl;
        cout<<"\n __________________\t\t\t  __________________";
        cout<<"\n ________________// Try To Calculate CGPA \\\\________________"<<endl<<endl;

        cout<<"\n Down here,"<<endl<<"\t    Please Give Your Grade Points On Your Own Subjects."<<endl;
        cout<<"\n\t\t    >> Maximum Grade Point 4.00 <<"<<endl<<endl;
        cout<<"\n\t\t     >>> Theory Segment <<<"<<endl<<endl;
        cout<<"\n English Composition : ";
        cin>>comf;

        cout<<"\n Physics Fundamental : ";
        cin>>phy;

        cout<<"\n Computer Fundamental Prog Tech : ";
        cin>>hist;

        cout<<"\n History of the Emergence of Independent Bangladesh : ";
        cin>>eng;
        cout<<endl;
        cout<<"\n\t\t     >>> LAB Segment <<<"<<endl<<endl;
        cout<<"\n Physics Sessional : ";
        cin>>comfs;

        cout<<"\n Computer Fundamental Prog Tech Sessional : ";
        cin>>phys;

        cout<<endl<<"\n\t\t     >>> Result <<<"<<endl<<endl;
        cout<<fixed;
        cout<<setprecision(2);

        /*Credit_Hours

        English Composition = 3 Credit

        History of the Emergence of Independent Bangladesh = 3 Credit

        Physics = 3 Credit

        Computer Fund & Prog Tech = 3 Credit

        Credit = 12

        Computer Fund & Prog Tech Sessional = 1.5 Credit

        Physics Sessional = 1.5 Credit

        Credit = 3

        Total Credit,(13+3) = 15*/
        comf = comf*3;
        comfs = comfs*1.5;
        hist = hist*3;
        eng = eng*3;
        phy = phy*3;
        phys = phys*1.5;
        //Condition Block Running
        Cgpa = (comf+comfs+hist+eng+phy+phys)/15;

        //Display CGPA
        cout<<"\n Your CGPA(Cumulative Grade Points Average) is : "<<Cgpa<<endl;
        //CGPA Grade Point Condition Start
        if(Cgpa>=4.00&&Cgpa==4.00)
        {
            cout<<"\n Letter Grade is (A+)."<<endl<<"\n Outstanding."<<endl;
        }
        else if(Cgpa>4.00)
        {
            cout<<"\n>> Invalid, Grade Point. try again <<"<<endl;
        }
        else if(Cgpa>=3.75)
        {
            cout<<"\n Letter Grade is (A)."<<endl<<"\n Excellent."<<endl;
        }
        else if(Cgpa>=3.50)
        {
            cout<<"\n Letter Grade is (A-)."<<endl<<"\n Very Good."<<endl;
        }
        else if(Cgpa>=3.25)
        {
            cout<<"\n Letter Grade is (B+)."<<endl<<"\n Good."<<endl;
        }
        else if(Cgpa>=3.00)
        {
            cout<<"\n Letter Grade is (B)."<<endl<<"\n Satisfactory."<<endl;
        }
        else if(Cgpa>=2.75)
        {
            cout<<"\n Letter Grade is (B-)."<<endl<<"\n Above Average."<<endl;
        }
        else if(Cgpa>=2.50)
        {
            cout<<"\n Letter Grade is (C+)."<<endl<<"\n Average."<<endl;
        }
        else if(Cgpa>=2.25)
        {
            cout<<"\n Letter Grade is (C)."<<endl<<"\n Below Average."<<endl;
        }
        else if(Cgpa>=2.00)
        {
            cout<<"\n Letter Grade is (D)."<<endl<<"\n Pass."<<endl;
        }
        else
            cout<<"\n Letter Grade is (F)."<<endl<<"\n Fail."<<endl<<"\n Best of Luck Next Time."<<endl;
        //CGPA Grade Point Condition End
    }


    else if(ch=='g'||ch=='G')//Condition Block End
    {
        cout<<" ==============================="<<endl;
        cout<<"\n __________________\t\t\t  __________________";
        cout<<"\n ________________// Try To Calculate CGPA \\\\________________"<<endl<<endl;

        cout<<"\n Down here,"<<endl<<"\t    Please Give Your Grade Points On Your Own Subjects."<<endl;
        cout<<"\n\t\t    >> Maximum Grade Point 5.00 <<"<<endl<<endl;
        cout<<"\n\t\t     >>> Theory Segment <<<"<<endl<<endl;
        cout<<"\n English Composition : ";
        cin>>comf;

        cout<<"\n Physics Fundamental : ";
        cin>>phy;

        cout<<"\n Computer Fundamental Prog Tech : ";
        cin>>hist;

        cout<<"\n History of the Emergence of Independent Bangladesh : ";
        cin>>eng;
        cout<<endl;
        cout<<"\n\t\t     >>> LAB Segment <<<"<<endl<<endl;
        cout<<"\n Physics Sessional : ";
        cin>>comfs;

        cout<<"\n Computer Fundamental Prog Tech Sessional : ";
        cin>>phys;

        cout<<endl<<"\n\t\t     >>> Result <<<"<<endl<<endl;
        cout<<fixed;
        cout<<setprecision(2);
         //GPA Calculaion
        Gpa=(comf+comfs+hist+eng+phy+phys)/6;
        //Display GPA
        cout<<"\n Your GPA(Grade Points Average) is  : "<<Gpa<<endl;

        //GPA Grade Point Condition Start
        if(Gpa>=5.00&&Gpa==5.00)
        {
            cout<<"\n Letter Grade is (A+)."<<endl<<"\n Outstanding."<<endl;
        }
        else if(Gpa>5.00)
        {
            cout<<"\n >> Invalid,Grade Point, try again <<"<<endl;
        }
        else if(Gpa>=4.00)
        {
            cout<<"\n Letter Grade is (A)."<<endl<<"\n Excellent."<<endl;
        }
        else if(Gpa>=3.50)
        {
            cout<<"\n Letter Grade is (A-)."<<endl<<"\n Very Good."<<endl;
        }
        else if(Gpa>=3.00)
        {
            cout<<"\n Letter Grade is (B)."<<endl<<"\n Satisfactory."<<endl;
        }
        else if(Gpa>=2.00)
        {
            cout<<"\n Letter Grade is (C)."<<endl<<"\n Below Average."<<endl;
        }
        else if(Gpa>=1.00)
        {
            cout<<"\n Letter Grade is (D)."<<endl<<"\n Pass."<<endl;
        }
        else
            cout<<"\n Letter Grade is (F)."<<endl<<"\n Fail."<<endl<<"\n Best of Luck Next Time."<<endl;
        }
        //GPA Grade Point Condition End
        getch();
}
