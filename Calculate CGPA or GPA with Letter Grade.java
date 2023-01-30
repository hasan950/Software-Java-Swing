package oop;

import java.util.Scanner;

public class Letter_Grade_With_Comment {

    public static void main(String[] args) {
        //while (true) {
            //variable
            char ch;
            float comf, comfs, hist, phy, phys, eng, Gpa, Cgpa;

            System.out.println(" ==============================================================");
            System.out.print(" Press >> C << for CGPA or >> G << for GPA or >> E << To Exit ");
            //User Input
            Scanner input = new Scanner(System.in);
            ch = input.next().charAt(0);
            //Condition Block Start
            if (ch == 'e' && ch == 'E') {
                //Condition Block Running
                System.out.print(" ==============================================================\n");
                System.out.println("\n Exiting.");
                   
            } else if (ch == 'c' || ch == 'C') {
                //Condition Block Running
                System.out.println(" ==============================================================");
                System.out.println(" __________________\t\t\t  __________________");
                System.out.println(" ________________// Try To Calculate CGPA \\\\________________\n");
                System.out.println(" Down here,\n\t    Please Give Your Grade Points On Your Own Subjects.\n");
                System.out.println("\t\t    >> Maximum Grade Point 4.00 <<\n");
                System.out.println("\t\t     >>> Theory Segment <<<\n");
                //User Input Start
                System.out.print(" English Composition : ");
                comf = input.nextFloat();

                System.out.print("\n Physics Fundamental : ");
                phy = input.nextFloat();

                System.out.print("\n Computer Fundamental Prog Tech : ");
                hist = input.nextFloat();

                System.out.print("\n History of the Emergence of Independent Bangladesh : ");
                eng = input.nextFloat();
                System.out.println();
                System.out.println("\t\t     >>> LAB Segment <<<");
                System.out.print("\n Physics Sessional : ");
                comfs = input.nextFloat();

                System.out.print("\n Computer Fundamental Prog Tech Sessional : ");
                phys = input.nextFloat();
                //User Input End
                System.out.println();
                System.out.println("\t\t     >>> Result <<<");

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
                comf = comf * 3;
                comfs = (float) (comfs * 1.5);
                hist = hist * 3;
                eng = eng * 3;
                phy = phy * 3;
                phys = (float) (phys * 1.5);
                //CGPA Calculaion
                Cgpa = (comf + comfs + hist + eng + phy + phys) / 15;
                //Display CGPA
                System.out.format("\n Your CGPA(Cumulative Grade Points Average) is : %.2f", Cgpa);
                System.out.println();
                //CGPA Grade Point Condition Start
                if (Cgpa >= 4.00 && Cgpa == 4.00) {
                    System.out.println("\n Letter Grade is (A+).\n\n Outstanding.");
                    System.out.println();
                } else if (Cgpa > 4.00) {
                    System.out.println("\n >> Invalid, Grade Point, try again <<");
                } else if (Cgpa >= 3.75) {
                    System.out.println("\n Letter Grade is (A).\n\n Excellent.");
                    System.out.println();
                } else if (Cgpa >= 3.50) {
                    System.out.println("\n Letter Grade is (A-).\n\n Very Good.");
                    System.out.println();
                } else if (Cgpa >= 3.25) {
                    System.out.println("\n Letter Grade is (B+).\n\n Good.");
                    System.out.println();
                } else if (Cgpa >= 3.00) {
                    System.out.println("\n Letter Grade is (B).\n\n Satisfactory.");
                    System.out.println();
                } else if (Cgpa >= 2.75) {
                    System.out.println("\n Letter Grade is (B-).\n\n Above Average.");
                    System.out.println();
                } else if (Cgpa >= 2.50) {
                    System.out.println("\n Letter Grade is (C+).\n\n Average.");
                    System.out.println();
                } else if (Cgpa >= 2.25) {
                    System.out.println("\n Letter Grade is (C).\n\n Below Average.");
                    System.out.println();
                } else if (Cgpa >= 2.00) {
                    System.out.println("\n Letter Grade is (D).\n\n Pass.");
                    System.out.println();
                } else {
                    System.out.println("\n Letter Grade is (F).\n\n Fail.\n\n Best of Luck Next Time.");
                }
                //CGPA Grade Point Condition End
                System.out.println();
                
            } else if (ch == 'g' || ch == 'G') {
                //Condition Block End
                System.out.println(" ==============================================================");
                System.out.println(" __________________\t\t\t  __________________");
                System.out.println(" ________________// Try To Calculate CGPA \\\\________________\n");
                System.out.println(" Down here,\n\t    Please Give Your Grade Points On Your Own Subjects.\n");
                System.out.println("\t\t    >> Maximum Grade Point 5.00 <<\n");
                System.out.println("\t\t     >>> Theory Segment <<<\n");
                System.out.print(" English Composition : ");
                //User Input Start
                comf = input.nextFloat();

                System.out.print("\n Physics Fundamental : ");
                phy = input.nextFloat();

                System.out.print("\n Computer Fundamental Prog Tech : ");
                hist = input.nextFloat();

                System.out.print("\n History of the Emergence of Independent Bangladesh : ");
                eng = input.nextFloat();
                System.out.println();
                System.out.println("\t\t     >>> LAB Segment <<<");
                System.out.print("\n Physics Sessional : ");
                comfs = input.nextFloat();

                System.out.print("\n Computer Fundamental Prog Tech Sessional : ");
                phys = input.nextFloat();
                //User Input End
                System.out.println();
                System.out.println("\t\t     >>> Result <<<");
                //GPA Calculaion
                Gpa = (comf + comfs + hist + eng + phy + phys) / 6;
                //Display GPA
                System.out.format("\n Your GPA(Grade Points Average) is  : %.2f", Gpa);
                System.out.println();
                //GPA Grade Point Condition Start
                if (Gpa >= 5.00 && Gpa == 5.00) {
                    System.out.println("\n Letter Grade is (A+).\n\n Outstanding.");
                    System.out.println();
                } else if (Gpa > 5.00) {
                    System.out.println("\n >> Invalid,Grade Point, try again <<");
                    System.out.println();
                } else if (Gpa >= 4.00) {
                    System.out.println("\n Letter Grade is (A).\n\n Excellent.");
                    System.out.println();
                } else if (Gpa >= 3.50) {
                    System.out.println("\n Letter Grade is (A-).\n\n Very Good.");
                    System.out.println();
                } else if (Gpa >= 3.00) {
                    System.out.println("\n Letter Grade is (B).\n\n Satisfactory.");
                    System.out.println();
                } else if (Gpa >= 2.00) {
                    System.out.println("\n Letter Grade is (C).\n\n Below Average.");
                    System.out.println();
                } else if (Gpa >= 1.00) {
                    System.out.println("\n Letter Grade is (D).\n\n Pass.");
                    System.out.println();
                } else {
                    System.out.println("\n Letter Grade is (F).\n\n Fail.\n\n Best of Luck Next Time.");
                }
                //GPA Grade Point Condition End
                System.out.println();
            }
       // }
    }

}
