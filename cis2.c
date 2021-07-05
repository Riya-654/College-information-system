#include <conio.h>
#include <stdio.h>
#include <string.h>
#include<windows.h>
#include<time.h>

void mainmenu();
void student();
void admin();
void businfo();
void displaycollegeinfo();
void teacherinfo();
void class_routine();
void subject_list();
int choice;
int main()
{
mainmenu();
getch();
}
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void mainmenu()
{
char d[40] = "WELCOME TO COLLEGE INFORMATION SYSTEM";
int j,m;
gotoxy(20,5);
for(j=0;j<60;j++)
{
Sleep(1);
printf("\xC2");
}
gotoxy(20,5);printf("\xD7");
Sleep(1);
gotoxy(20,6);printf("\xD7");
Sleep(1);
gotoxy(20,7);printf("\xD7");
Sleep(1);
gotoxy(20,8);printf("\xD7");
gotoxy(20,9);printf("\xD7");
Sleep(1);
gotoxy(20,10);printf("\xD7");
Sleep(1);
gotoxy(20,11);printf("\xD7");
Sleep(1);
gotoxy(20,12);printf("\xD7");
gotoxy(20,13);printf("\xD7");
Sleep(1);
gotoxy(20,14);printf("\xD7");
Sleep(1);
gotoxy(20,15);printf("\xD7");
Sleep(1);
gotoxy(20,16);printf("\xD7");
gotoxy(20,17);printf("\xD7");
Sleep(1);
gotoxy(20,18);printf("\xD7");
Sleep(1);
gotoxy(20,19);printf("\xD7");
Sleep(1);
gotoxy(20,20);printf("\xD7");
Sleep(1);
gotoxy(80,5);printf("\xD7");
Sleep(1);
gotoxy(80,6);printf("\xD7");
Sleep(1);
gotoxy(80,7);printf("\xD7");
Sleep(1);
gotoxy(80,8);printf("\xD7");
Sleep(1);
gotoxy(80,9);printf("\xD7");
gotoxy(80,9);printf("\xD7");
Sleep(1);
gotoxy(80,10);printf("\xD7");
Sleep(1);
gotoxy(80,11);printf("\xD7");
Sleep(1);
gotoxy(80,12);printf("\xD7");
Sleep(1);
gotoxy(80,13);printf("\xD7");
Sleep(1);
gotoxy(80,14);printf("\xD7");
Sleep(1);
gotoxy(80,15);printf("\xD7");
Sleep(1);
gotoxy(80,16);printf("\xD7");
Sleep(1);
gotoxy(80,17);printf("\xD7");
Sleep(1);
gotoxy(80,18);printf("\xD7");
Sleep(1);
gotoxy(80,19);printf("\xD7");
Sleep(1);
gotoxy(80,20);printf("\xD7");
gotoxy(21,21);
for(j=0;j<60;j++)
{
Sleep(1);
printf("\xC1");
}

gotoxy(20,9);
for(j=0;j<61;j++)
{
Sleep(1);
printf("\xB1");
}

gotoxy(21,7);
printf("\t ");
for(m=0;m<40;m++)
{
Sleep(1);
printf("%c",d[m]);
}
gotoxy(23,11);
printf("\t \xB1\xB1\xB1 s. Student");
gotoxy(23,14);
printf("\t \xB1\xB1\xB1 a. Admin ");
gotoxy(23,17);
printf("\t \xB1\xB1\xB1 q. Quit ");
char n;
gotoxy(21,22);
printf("Please enter your choice: ");
n=getch();
switch(n)
{
case 's':
student();
break;
case 'a':
system("cls");
break;
case 'q':
system("cls");
break;
default:
printf("\n\t\t\t Invalid choice!!");
Sleep(1);
system("cls");
mainmenu();
}
}
void student()
{
system("cls");
printf("\n\n\n\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1 STUDENT SECTION \xb1\xb1\xb1\xb1\xb1\xb1\n\n");
printf("\t\t\t\xb1\xb1\xb1\xb1 1. Class schedule \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 2. Bus schedule \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 3. Teacher info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 4. College info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 5. Subject list\n\n");
printf("\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n");
printf("\n\t\t\t Please enter your choice: ");
//int choice;
scanf("%d", &choice);
switch(choice)
{
	case 1: class_routine();
	break;
    case 2: businfo();
    break;
    case 3: teacherinfo();
    break;
	case 4: displaycollegeinfo();
	break;
	case 5: subject_list();
	break;
	default:printf("Invalid choice!!");
	
}
}
void class_routine()
{
	system("cls");
	FILE* fp = fopen("Timetable.csv", "r");

	if (!fp)
		printf("Can't open file\n");

	else {
		
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp))
		{
			column = 0;


			char* value = strtok(buffer, ", ");

			while (value) 
			{
				
					if (column == 0) {
						printf("");
					}

					// Column 2
					if (column == 1) {
						printf("\t\t");
					}

					// Column 3
					if (column == 2) {
						printf("\t\t");
					}
					
					// Column 4
					if (column == 3) {
						printf("\t\t");
					}
					
					// Column 5
					if (column == 4) {
						printf("\t\t");
					}
					
					// Column 6
					if (column == 5) {
						printf("\t\t");
					}
					
					// Column 7
					if (column == 6) {
						printf("\t\t");
					}
					
					// Column 8
					if (column == 7) {
						printf("\t\t");
					}
					
					// Column 9
					if (column == 8) {
						printf("\t\t");
					}

					printf("%s", value);
					value = strtok(NULL, ", ");
					column++;
			}	
		}
		printf("\n");
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
		fclose(fp); 
	}
}
void businfo()
{
    system("cls");
	FILE* fp = fopen("businfo.csv", "r");

	if (!fp)
		printf("Can't open file\n");

	else {
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,
					1024, fp)) {
			column = 0;
			row++;
			
			if(row==1)
			continue;
				
					
			char* value = strtok(buffer, ", ");

			while (value) {
				// Column 1
				if (column == 0) {
					printf("Route no.:");
				}

				// Column 2
				if (column == 1) {
					printf("\tRoute:\t");
				}

				// Column 3
				if (column == 2) {
					printf("\t\tDriver Name:");
				}
                // Column 4
                if(column == 3)
                {
                    printf("\t\tStart Timings:");
                }

				printf("%s", value);
				value = strtok(NULL, ", ");
				column++;
			}

			printf("\n");
        }
		printf("\n\n\n");
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
		fclose(fp);
	}
}

void teacherinfo()
{
    system("cls");
	FILE* fp = fopen("teacherinfo.csv", "r");

	if (!fp)
		printf("Can't open file\n");

	else {
		char buffer[1024];

		int row = 0;
		int column = 0;
		
		

		while (fgets(buffer,
					2048, fp)) {
			column = 0;
			row++;
			if (row == 1)
				continue;
			char* value = strtok(buffer, ", ");

			while (value) {
				// Column 1
				if (column == 0) {
					printf("Name :");
				}

				// Column 2
				if (column == 1) {
					printf("\tExperience:");
				}

				// Column 3
				if (column == 2) {
					printf("\tQualification:");
				}

                if(column == 3)
                {
                    printf("\tsubject:");
                }

				printf("%s", value);
				value = strtok(NULL, ", ");
				column++;
			}
        }
		printf("\n");
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
		fclose(fp);
	}
}

void displaycollegeinfo()
{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\nt\t\t\t\t\t\t\t\tABC COLLEGE OF ENGINEERING\n\n\n\n");
	printf("  ABC college of engineering, established in 1949, shortly after India recieved her independence is one of the earliest self-financing engineering colleges in the country.\n\n  Founded by the great visionary, Arun Senipal, ABC college of engineering seeks to impart quality education and provide the nation with an industry ready workforce. \n\n  Today, we are one of the leading institutions in India and have recieves accolades in multiple events.\n\n  We have collaborated with 91 Industries so far and have an average of 475 publications per year. At an average, we have 98 percent placement figures.\n\n  We are ranked No. 16 among the top 100 Engineering Institutions across the country as per MHRD, Govt. of India, 2020.\n\n  We encourage our students to innovate,explore and create. With ever improving infrastructure and constantly updated curriculum, we have succeded in providing \n  our students with the best. ");
	printf("\n\n\n");
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
}
void subject_list()
{
	system("cls");
	int choice;
	printf("Select a cycle:\n");
	Sleep(1);
	printf("1.Physics Cycle\n");
	Sleep(1);
	printf("2.Chemistry Cycle\n");
	scanf("%d",&choice);
	printf("\n\n");
	
	if(choice==1)
	{
		printf("Subjects in physics cycle:\n");
		Sleep(1);
		printf("1.Engineering Mathematics\n");
		Sleep(1);
		printf("2.Engineering Physics\n");
		Sleep(1);
		printf("3.Programming with python\n");
		Sleep(1);
		printf("4.Mechanical engineering\n");
		Sleep(1);
		printf("5.Electrical engineering\n");
		Sleep(1);
		printf("6.Environmental studies and life sciences\n");
		Sleep(1);
		printf("\n");
	}
	else if(choice==2)
	{
		printf("Subjects in chemistry cycle:\n");
		Sleep(1);
		printf("1.Engineering Mathematics\n");
		Sleep(1);
		printf("2.Engineering Chemistry\n");
		Sleep(1);
		printf("3.Programming with C\n");
		Sleep(1);
		printf("4.Engineering Mechanics\n");
		Sleep(1);
		printf("5.Electronics\n");
		Sleep(1);
		printf("6.Constitution of India,Cyber Law and Professional Ethics\n");
		Sleep(1);
		printf("\n");
	}
	else
	{
		printf("Invalid choice");
	}
	printf("\n\n\n");
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
}