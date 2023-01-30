#include<stdio.h>
#include<conio.h>
int main()

{


    char ch;
    float comf,comfs,hist,phy,phys,eng,Gpa,Cgpa;

    printf("\n ===============================");
    printf("\n Press [C]GPA Or [G]PA Or [Q]uit : ");
    scanf("%c",&ch);

    //Condition Block Start
    if (ch=='e'||ch=='E')
    {
        printf(" ===============================\n");
        printf("\n Exiting.\n\n");
    }
    else if(ch=='c'||ch=='C')//Condition Block Running
    {
        printf(" ===============================\n");
        printf("\n __________________\t\t\t  __________________");
        printf("\n ________________// Try To Calculate CGPA \\\\________________\n\n");
        printf("\n Down here,\n\t    Please Give Your Grade Points On Your Own Subjects.\n");
        printf("\n\t\t    >> Maximum Grade Point 4.00 <<\n\n");
        printf("\n\t\t     >>> Theory Segment <<<\n\n");
        printf("\n English Composition : ");
        scanf("%f",&comf);

        printf("\n Physics Fundamental : ");
        scanf("%f",&phy);

        printf("\n Computer Fundamental Prog Tech : ");
        scanf("%f",&hist);

        printf("\n History of the Emergence of Independent Bangladesh : ");
        scanf("%f",&eng);
        printf("\n");
        printf("\n\t\t     >>> LAB Segment <<<\n\n");
        printf("\n Physics Sessional : ");
        scanf("%f",&comfs);

        printf("\n Computer Fundamental Prog Tech Sessional : ");
        scanf("%f",&phys);
        printf("\n");
        printf("\n\t\t     >>> Result <<<\n\n");

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
        //CGPA Calculaion
        Cgpa = (comf+comfs+hist+eng+phy+phys)/15;

        //Display CGPA
        printf("\n Your CGPA(Cumulative Grade Points Average) is : %.2f",Cgpa);
        printf("\n");
        //CGPA Grade Point Condition Start
        if(Cgpa>=4.00&&Cgpa==4.00)
        {
            printf("\n Letter Grade is (A+).\n\n Outstanding.");
            printf("\n");
        }
        else if(Cgpa>4.00)
        {
            printf("\n >> Invalid, Grade Point, try again <<");
        }
        else if(Cgpa>=3.75)
        {
            printf("\n Letter Grade is (A).\n\n Excellent.");
            printf("\n");
        }
        else if(Cgpa>=3.50)
        {
            printf("\n Letter Grade is (A-).\n\n Very Good.");
            printf("\n");
        }
        else if(Cgpa>=3.25)
        {
            printf("\n Letter Grade is (B+).\n\n Good.");
            printf("\n");
        }
        else if(Cgpa>=3.00)
        {
            printf("\n Letter Grade is (B).\n\n Satisfactory.");
            printf("\n");
        }
        else if(Cgpa>=2.75)
        {
            printf("\n Letter Grade is (B-).\n\n Above Average.");
            printf("\n");
        }
        else if(Cgpa>=2.50)
        {
            printf("\n Letter Grade is (C+).\n\n Average.");
            printf("\n");
        }
        else if(Cgpa>=2.25)
        {
            printf("\n Letter Grade is (C).\n\n Below Average.");
            printf("\n");
        }
        else if(Cgpa>=2.00)
        {
            printf("\n Letter Grade is (D).\n\n Pass.");
            printf("\n");
        }
        else
            printf("\n Letter Grade is (F).\n\n Fail.\n\n Best of Luck Next Time.");
            printf("\n");
        //CGPA Grade Point Condition End
    }


    else if(ch=='g'||ch=='G')//Condition Block End
    {
        printf(" ===============================\n");
        printf("\n __________________\t\t\t  __________________");
        printf("\n ________________// Try To Calculate CGPA \\\\________________\n\n");
        printf("\n Down here,\n\t    Please Give Your Grade Points On Your Own Subjects.\n");
        printf("\n\t\t    >> Maximum Grade Point 5.00 <<\n\n");
        printf("\n\t\t     >>> Theory Segment <<<\n\n");
        printf("\n English Composition : ");
        scanf("%f",&comf);

        printf("\n Physics Fundamental : ");
        scanf("%f",&phy);

        printf("\n Computer Fundamental Prog Tech : ");
        scanf("%f",&hist);

        printf("\n History of the Emergence of Independent Bangladesh : ");
        scanf("%f",&eng);
        printf("\n");
        printf("\n\t\t     >>> LAB Segment <<<\n\n");
        printf("\n Physics Sessional : ");
        scanf("%f",&comfs);

        printf("\n Computer Fundamental Prog Tech Sessional : ");
        scanf("%f",&phys);
        printf("\n");
        printf("\n\t\t     >>> Result <<<\n\n");
        //GPA Calculaion
        Gpa=(comf+comfs+hist+eng+phy+phys)/6;
        //Display GPA
        printf("\n Your GPA(Grade Points Average) is  : %0.2f",Gpa);
        printf("\n");
        //GPA Grade Point Condition Start
        if(Gpa>=5.00&&Gpa==5.00)
        {
            printf("\n Letter Grade is (A+).\n\n Outstanding.");
            printf("\n");
        }
        else if(Gpa>5.00)
        {
            printf("\n >> Invalid,Grade Point, try again <<");
            printf("\n");
        }
        else if(Gpa>=4.00)
        {
            printf("\n Letter Grade is (A).\n\n Excellent.");
            printf("\n");
        }
        else if(Gpa>=3.50)
        {
            printf("\n Letter Grade is (A-).\n\n Very Good.");
            printf("\n");
        }
        else if(Gpa>=3.00)
        {
            printf("\n Letter Grade is (B).\n\n Satisfactory.");
            printf("\n");
        }
        else if(Gpa>=2.00)
        {
            printf("\n Letter Grade is (C).\n\n Below Average.");
            printf("\n");
        }
        else if(Gpa>=1.00)
        {
            printf("\n Letter Grade is (D).\n\n Pass.");
            printf("\n");
        }
        else
            printf("\n Letter Grade is (F).\n\n Fail.\n\n Best of Luck Next Time.");
            printf("\n");
        }
        //GPA Grade Point Condition End

        getch();
}

