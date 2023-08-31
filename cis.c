#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


void mainmenu();
void student();
void admin();
void businfo();
void studentinfo();
void displaycollegeinfo();
void teacherinfo();
void class_routine();
void subject_list();
void password();
void addinfo();
void editinfo();
void deleteinfo();
void deletestudentinfo();
void deletebusinfo();
void deleteteacherinfo();
void displayinfo();
void addclass_routine();
void addteacherinfo();
void addbusinfo();
void addsubject_list();
void addstudentinfo();
void editinfo();
void editteacherinfo();
void editstudentinfo();
void editbusinfo();
int choice;

typedef struct
{
char id[50];
char name[30];
char exp[40];
char qual[30];
char subj[30];
}teach;
teach t;

typedef struct
{
char route_no[10];
char driver_name[50];
char contact[100];
char pp1[50];
char pt1[50];
char pp2[50];
char pt2[50];
char pp3[50];
char pt3[50];
}bus;
bus b;

struct student_list
{
	char student_name[50];
	char srn[50];
	char sec[5];
	char cycle[10];
}s;

struct routine
{
char day[50];
char one[25];
char two[25];
char three[25];
char four[25];
char five[25];
char six[25];
char seven[25];
char eight[25];
};
struct routine r;

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
system("cls");
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
password();
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
printf("\t\t\t\xb1\xb1\xb1\xb1 1. Student information \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 2. Class schedule \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 3. Bus schedule \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 4. Teacher info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 5. College info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 6. Subject list\n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 7. Main menu\n\n");
printf("\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n");
printf("\n\t\t\t Please enter your choice: ");
//int choice;
scanf("%d", &choice);
switch(choice)
{
	case 1: studentinfo(s);
	break;
	case 2: class_routine();
    break;
    case 3: businfo();
    break;
    case 4: teacherinfo();
    break;
	case 5: displaycollegeinfo();
	break;
	case 6: subject_list();
	break;
	case 7: mainmenu();
	break;
	default:printf("Invalid choice!!");
	
}
}

void studentinfo()
{
{
    system("cls");
	FILE* fp = fopen("studentinfo.csv", "r+");

	if (!fp)
		printf("Can't open file\n");

	else {
		char buffer[1024];

		int row = 0;
		int column = 0;
		
		

		while (fgets(buffer,
					2048, fp)!=NULL) {
			column = 0;
			row++;
			if (row == 1)
				continue;
			char* value = strtok(buffer, ",");

			while (value) {
				// Column 1
				if (column == 0) {
					printf("Student Name :");
				}

				// Column 2
				if (column == 1) {
					printf("\tSRN:");
				}

				// Column 3
				if (column == 2) {
					printf("\tClass section:");
				}

                if(column == 3)
                {
                    printf("\t\tCycle:");
                }

				printf("%s", value);
				value = strtok(NULL, ",");
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
}

void class_routine()
{
	system("cls");
	printf("Choose section:\n");
	printf("1.Sec A\n");
	printf("2.Sec B\n");
	int option;
	scanf("%d",&option);
	if(option==1)
	{
	FILE* fp = fopen("Timetable_A.csv","r");

	if (!fp)
		printf("Can't open file\n");

	else {
		
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp))
		{
			column = 0;


			char* value = strtok(buffer, ",");

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
					value = strtok(NULL, ",");
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
	else
	{
		FILE* fp = fopen("Timetable_B.csv","r");

	if (!fp)
		printf("Can't open file\n");

	else {
		
		char buffer[1024];

		int row = 0;
		int column = 0;

		while (fgets(buffer,1024, fp))
		{
			column = 0;


			char* value = strtok(buffer, ",");

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
					value = strtok(NULL, ",");
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
}
void businfo()
{
    system("cls");
	FILE* fp = fopen("businfo.csv", "r");

	if (!fp)
		printf("Can't open file\n");

	else {
		//printf("Route No.\tDriver name\tContact\tPickup point1\tPickup time1\tPickup point2\tPickup time2\tPickup point3\tPickup time3\n");
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
				
				if (column == 0) {
					printf("Route no.:");
				}

				
				if (column == 1) {
					printf("\tDriver name:");
				}

				
				if (column == 2) {
					printf("\tContact no:");
				}
                
                if(column == 3)
                {
                    printf("\tPP1:");
                }
				if(column == 4)
                {
                    printf("\tPT1:");
                }
				if(column == 5)
                {
                    printf("\tPP2:");
                }
				if(column == 6)
                {
                    printf("\tPT2:");
                }
				if(column == 7)
                {
                    printf("\tPP3:");
                }
				if(column == 8)
                {
                    printf("\tPT3:");
                }
				

				printf("%s", value);
				value = strtok(NULL, ",");
				column++;
			}

			printf("\n");
        }
	}
		printf("\n\n\n");
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
		fclose(fp);
	
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
			char* value = strtok(buffer, ",");

			while (value) {
				
				if (column == 0) {
					printf("ID:");
				}
					
				if (column == 1) {
					printf("\tName:");
				}

				
				if (column == 2) {
					printf("\tExperience:");
				}

				
				if (column == 3) {
					printf("\tQualification:");
				}

                if(column == 4)
                {
                    printf("\tsubject:");
                }

				printf("%s", value);
				value = strtok(NULL, ",");
				column++;
			
        }
		printf("\n");
		}
	}
		printf("Press 'b' to go back to the student section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='b')
			student();	
		fclose(fp);
	
	
}

void displaycollegeinfo()
{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tABC COLLEGE OF ENGINEERING\n\n\n\n");
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
void admin()
{
system("cls");
printf("\n\n\n\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1 ADMIN SECTION \xb1\xb1\xb1\xb1\xb1\xb1\n\n");
printf("\t\t\t\xb1\xb1\xb1\xb1 1. Add info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 2. Edit info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 3. Delete info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 4. Main menu \n");
printf("\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n");
printf("\n\t\t\t Please enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
	case 1: addinfo();
	break;
    case 2: editinfo();
    break;
    case 3: deleteinfo();
    break; 
	case 4: mainmenu();
	break;
	default:printf("Invalid choice!!");
	
}
}
void addinfo()
{
system("cls");
printf("\n\n\n\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n\n");
printf("\t\t\t\xb1\xb1\xb1\xb1 1. Student info\n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 2. Class schedule \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 3. Bus info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 4. Teacher info\n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 5. Back to admin \n");
printf("\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n");
printf("\n\t\t\t Please enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
	case 1: addstudentinfo(s); 
	break;
	case 2: addclass_routine();
    break;
    case 3: addbusinfo();
    break;
    case 4: addteacherinfo();
    break;
	case 5: admin();
	break;
	default:printf("Invalid choice!!");
	
}
}
	


void password()
{
	char pass[30]="pes";
	system("cls");
	int v=1;
	for(v=1;v<=5;v++)
	{
		int i=0;
		printf("\n\n\n\t\t");
		char ch=0,passw[10];
		printf("\n\n\n\n\n\n\t\t***** Password Protected *****");
		printf("\n\n\t\t Enter Password:");
		scanf("%s",&passw);
		if(strcmp(pass,passw)==0)
		{
			admin();
			break;
		}
		else
		{
			int i=0;
			printf("\a\n\n\t Wrong Password !");
			Sleep(1000);
			system("cls");
			printf("\n\n\t Your Try %d's",v);
			if(v==4)
			{
				system("cls");
				printf("\a\n This is your last chance. Please type correct password \n Otherwise you have to wait 20 sec !!");
			}
			else if(v==5)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n\t\t\t\tPls try after 20 sec\n");
				Sleep(2000);
				int count=20;
				do
				{
					Sleep(1000);
					system("cls");
					count--;
					printf("\n\n\n\n\n\n\n\t\t\t\tWait...\a %d",count);
				}while(count!=0);
				system("cls");
				password();
			}
		}
	}
}
void addteacherinfo()
{
	
	FILE* fptr=fopen("teacherinfo.csv","a+");
	FILE* fptr3=fopen("temp.csv","w+");
	char line[1000];
	while(fgets(line,1000,fptr)!=NULL)
	{
		fputs(line,fptr3);	
		fflush(stdin);
	}
	
		fflush(stdin);
		printf("\nEnter teacher's ID:\n");
		gets(t.id);
		fflush(stdin);
        printf("\nEnter teacher's full name:\n");
		gets(t.name);
		fflush(stdin);
		printf("\nEnter years of experience:\n");
		scanf("%s",t.exp);
		fflush(stdin);
		printf("\n Enter qualificaton:\n ");
		gets(t.qual);
		fflush(stdin);
		printf("\n Enter subject:\n");
		gets(t.subj);
		fflush(stdin);
		fprintf(fptr3,"%s,%s,%s,%s,%s\n",t.id,t.name,t.exp,t.qual,t.subj);
		printf("\nRecord sucessfully added");
		fclose(fptr);
		fclose(fptr3);
		remove("teacherinfo.csv");
		rename("temp.csv","teacherinfo.csv");
		printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();	
		getch();
		
		
	}
	

void addbusinfo()
{
	
	FILE* fptr1=fopen("businfo.csv","r+");
	FILE* fptr3=fopen("temp.csv","w+");
	char line[1000];
	while(fgets(line,1000,fptr1)!=NULL)
	{
		fputs(line,fptr3);	
		fflush(stdin);
	}
	
		fflush(stdin);
		printf("\nEnter route number:\n");
		scanf("%s",b.route_no);
		fflush(stdin);
		printf("\nEnter driver name:\n");
		gets(b.driver_name);
		fflush(stdin);
		printf("\nContact no:\n ");
		scanf("%s",b.contact);
		fflush(stdin);
		printf("\nEnter PP1:\n");
		gets(b.pp1);
		printf("\nPT1:\n");
		gets(b.pt1);
		printf("\nEnter PP2:\n");
		gets(b.pp2);
		printf("\nEnter PT2:\n");
		gets(b.pt2);
		printf("\nEnter PP3:\n");
		gets(b.pp3);
		printf("\nEnter PT3:\n");
		gets(b.pt3);
		fflush(stdin);
		fprintf(fptr3,"%s,%s,%s,%s,%s,%s,%s,%s,%s\n",b.route_no,b.driver_name,b.contact,b.pp1,b.pt1,b.pp2,b.pt2,b.pp3,b.pt3);
		printf("\nRecord sucessfully added");
		fclose(fptr1);
		fclose(fptr3);
		remove("businfo.csv");
		rename("temp.csv","businfo.csv");
		printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
		
		
	
}


void addstudentinfo()
{
	
	FILE* fptr2=fopen("studentinfo.csv","a+");
	FILE* fptr3=fopen("temp.csv","w+");
	char line[1000];
	while(fgets(line,1000,fptr2)!=NULL)
	{
		fputs(line,fptr3);	
		fflush(stdin);
	}
		printf("\nEnter student's full name:\n");
		gets(s.student_name);
		fflush(stdin);
		printf("\nenter student's SRN:\n");
		gets(s.srn);
		fflush(stdin);
		printf("\nenter section:\n ");
		gets(s.sec);
		fflush(stdin);
		printf("\nenter cycle:\n");
		gets(s.cycle);
		fflush(stdin);
		fprintf(fptr3,"%s,%s,%s,%s\n",s.student_name,s.srn,s.sec,s.cycle);
		printf("\nRecord sucessfully added");	
		
	
	fclose(fptr2);
	fclose(fptr3);
	remove("studentinfo.csv");
	rename("temp.csv","studentinfo.csv");
	printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
}
void addclass_routine()
{
system("cls");
printf("Choose section:\n");
printf("1.Sec A\n");
printf("2.Sec B\n");
int option;
scanf("%d",&option);
if (option==1)
{
FILE* f=fopen("Timetable_A.csv","a+");
FILE* fptr3=fopen("temp.csv","w+");
	char line[1000];
	while(fgets(line,1000,f)!=NULL)
	{
		fputs(line,fptr3);	
		fflush(stdin);
	}
system("cls");
int i=1;
printf("\n enter day:");
scanf("%s[^\n]",&r.day);
fflush(stdin);
printf("\n Enter 1st period:");
scanf("%s[^\n]",&r.one);
printf("\n Enter 2nd period:");
scanf("%s[^\n]",&r.two);
printf("\n Enter 3rd period:");
scanf("%s[^\n]",&r.three);
printf("\n Enter 4th period:");
scanf("%s[^\n]",&r.four);
printf("\n Enter 5th period:");
scanf("%s[^\n]",&r.five);
printf("\n Enter 6th period:");
scanf("%s[^\n]",&r.six);
printf("\n Enter 7th period:");
scanf("%s[^\n]",&r.seven);
printf("\n Enter 8th period:");
scanf("%s[^\n]",&r.eight);
fprintf(fptr3,"%s,%s,%s,%s,%s,%s,%s,%s,%s\n",r.day,r.one,r.two,r.three,r.four,r.five,r.six,r.seven,r.eight);
fflush(stdin);
printf("\nRecord sucessfully added");
fclose(f);
fclose(fptr3);
remove("Timetable_A.csv");
rename("temp.csv","Timetable_A.csv");
printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
		
		

}
else
{
  FILE*	f=fopen("Timetable_B.csv","a+");
  FILE* fptr3=fopen("temp.csv","w+");
	char line[1000];
	while(fgets(line,1000,f)!=NULL)
	{
		fputs(line,fptr3);	
		fflush(stdin);
	}
system("cls");
int i=1;
printf("\n enter day:");
scanf("%s[^\n]",&r.day);
fflush(stdin);
printf("\n Enter 1st period:");
scanf("%s[^\n]",&r.one);
printf("\n Enter 2nd period:");
scanf("%s[^\n]",&r.two);
printf("\n Enter 3rd period:");
scanf("%s[^\n]",&r.three);
printf("\n Enter 4th period:");
scanf("%s[^\n]",&r.four);
printf("\n Enter 5th period:");
scanf("%s[^\n]",&r.five);
printf("\n Enter 6th period:");
scanf("%s[^\n]",&r.six);
printf("\n Enter 7th period:");
scanf("%s[^\n]",&r.seven);
printf("\n Enter 8th period:");
scanf("%s[^\n]",&r.eight);
fprintf(fptr3,"%s,%s,%s,%s,%s,%s,%s,%s,%s\n",r.day,r.one,r.two,r.three,r.four,r.five,r.six,r.seven,r.eight);
fflush(stdin);
printf("\nRecord sucessfully added");
fclose(f);
fclose(fptr3);
remove("Timetable_B.csv");
rename("temp.csv","Timetable_B.csv");
printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
		
		

}
	
}

void deleteinfo()
{
system("cls");
printf("\n\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Delete info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 1.Student info \n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 2.Bus info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 3. Teacher info\n\n");
printf("\t\t\t\xdb\xdb\xdb\xb2 4. Back to admin\n\n");
printf("\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
printf("\t\t\tEnter your choice");
int de;
scanf("%d",&de);
switch(de)
{
case 1:
deletestudentinfo();
break;
case 2:
deletebusinfo();
break;
case 3:
deleteteacherinfo();
break;
case 4:admin();
break;
default:
printf("\t invalid choice");
break;
}
}
void deleteteacherinfo()
{

	FILE *fp1=fopen("teacherinfo.csv","r+");
	FILE *fp2=fopen("temp.csv","w+");
	printf("Enter teacher's ID:");
	char did[50];
	char line[1000];
	fflush(stdin);
	gets(did);
	while(fgets(line,1000,fp1)!=NULL)
	{
		//printf("%s\n",line);
		char *n;
		char t_line[1000];
		strcpy(t_line,line);
		n=strtok(line,",");
		if(strcmpi(did,n)!=0)
		{
			
			fprintf(fp2,"%s,",strtok(t_line,","));
			fprintf(fp2,"%s,",strtok(NULL,","));
			fprintf(fp2,"%s,",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			//fprintf(fp2,"\n");
		}
	}
	printf("Record has been deleted\n");
	fclose(fp1);
	fclose(fp2);
	remove("teacherinfo.csv");
	rename("temp.csv","teacherinfo.csv");
	
	printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
}

void deletestudentinfo()
{

	FILE *fp1=fopen("studentinfo.csv","r+");
	FILE *fp2=fopen("temp.csv","w+");
	printf("Enter student's SRN:");
	char dsrn[50];
	char line[1000];
	fflush(stdin);
	gets(dsrn);
	while(fgets(line,1000,fp1)!=NULL)
	{
		//printf("%s\n",line);
		char *n;char *n1;
		char t_line[1000];
		strcpy(t_line,line);
		n=strtok(line,",");
		n1=strtok(NULL,",");
		if(strcmpi(dsrn,n1)!=0)
		{

			fprintf(fp2,"%s,",strtok(t_line,","));
			fprintf(fp2,"%s,",strtok(NULL,","));
			fprintf(fp2,"%s,",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			//fprintf(fp2,"\n");
		}
	}
	printf("Record has been deleted\n");
	fclose(fp1);
	fclose(fp2);
	remove("studentinfo.csv");
	rename("temp.csv","studentinfo.csv");
	
	printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
}
	
void deletebusinfo()
{

	FILE *fp1=fopen("businfo.csv","r+");
	FILE *fp2=fopen("temp.csv","w+");
	printf("Enter route no:");
	char drno[10];
	char line[1000];
	fflush(stdin);
	gets(drno);
	while(fgets(line,1000,fp1)!=NULL)
	{
		//printf("%s\n",line);
		char *n;
		char t_line[1000];
		strcpy(t_line,line);
		n=strtok(line,",");
		if(strcmpi(n,drno)!=0)
		{
			//printf("%s\n",t_line);
			//fputs(t_line,fp2);
			//printf("%s,%s,%s,%s,%s",strtok(t_line,","),strtok(NULL,","),strtok(NULL,","),strtok(NULL,","));
			fprintf(fp2,"%s,",strtok(t_line,","));
			fprintf(fp2,"%s,",strtok(NULL,","));
			fprintf(fp2,"%s,",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			fprintf(fp2,"%s",strtok(NULL,","));
			//fprintf(fp2,"\n");
		}
	}
	printf("Record has been deleted\n");
	fclose(fp1);
	fclose(fp2);
	remove("businfo.csv");
	rename("temp.csv","businfo.csv");
	
	printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
}

void editinfo()
{
system("cls");
printf("\n\n\n\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n\n");
printf("\t\t\t\xb1\xb1\xb1\xb1 1. Student info\n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 2. Bus info \n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 3. Teacher info\n");
printf("\n\t\t\t\xb1\xb1\xb1\xb1 4. Back to admin \n");
printf("\t\t\t\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\xb1\n");
printf("\n\t\t\t Please enter your choice: ");
scanf("%d", &choice);
switch(choice)
{
	case 1: editstudentinfo(s); 
	break;
    case 2: editbusinfo();
    break;
    case 3: editteacherinfo();
    break;
	case 4: admin();
	break;
	default:printf("Invalid choice!!");
	
}
}

void editstudentinfo()
{
	char esrn[50];
	printf("Enter SRN to be modified:");
	scanf("%s",&esrn);
	FILE* fptr2=fopen("studentinfo.csv","a+");
	FILE* fptr3=fopen("temp1.csv","w+");
	char line[1000];
	char *temp;
	char *temp1;
	while(fgets(line,1000,fptr2)!=NULL)
	{
		char copy[1000];
		strcpy(copy,line);
		temp=strtok(copy,",");
		temp1=strtok(NULL,",");
		if(strcmp(temp1,esrn)!=0)
		{
		
			fprintf(fptr3,"%s,",strtok(line,","));
			fprintf(fptr3,"%s,",strtok(NULL,","));
			fprintf(fptr3,"%s,",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			
		}
		else
		{
		fflush(stdin);
		printf("\nEnter student's full name:\n");
		gets(s.student_name);
		//fflush(stdin);
		printf("\nenter student's SRN:\n");
		gets(s.srn);
		//fflush(stdin);
		printf("\nenter section:\n ");
		gets(s.sec);
		//fflush(stdin);
		printf("\nenter cycle:\n");
		gets(s.cycle);
		//fflush(stdin);
		fprintf(fptr3,"%s,%s,%s,%s\n",s.student_name,s.srn,s.sec,s.cycle);
		printf("\nRecord sucessfully modified");	
		}
	}
	
	fclose(fptr2);
	fclose(fptr3);
	remove("studentinfo.csv");
	rename("temp1.csv","studentinfo.csv");
	printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
}
void editteacherinfo()
{
	char eid[50];
	printf("Enter ID to be modified:");
	scanf("%s",&eid);
	FILE* fptr2=fopen("teacherinfo.csv","a+");
	FILE* fptr3=fopen("temp1.csv","w+");
	char line[1000];
	char *temp;
	//char *temp1;
	while(fgets(line,1000,fptr2)!=NULL)
	{
		char copy[1000];
		strcpy(copy,line);
		temp=strtok(copy,",");
		//temp1=strtok(NULL,",");
		if(strcmp(temp,eid)!=0)
		{
			
			fprintf(fptr3,"%s,",strtok(line,","));
			fprintf(fptr3,"%s,",strtok(NULL,","));
			fprintf(fptr3,"%s,",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			
		}
		else
		{
		fflush(stdin);
		printf("\nEnter teacher's ID:\n");
		gets(t.id);
		//fflush(stdin);
		printf("\nEnter teacher's name:\n");
		gets(t.name);
		//fflush(stdin);
		printf("\nEnter experience:\n ");
		gets(t.exp);
		//fflush(stdin);
		printf("\nEnter qualification:\n");
		gets(t.qual);
		printf("\nEnter subject:\n");
		gets(t.subj);
		//fflush(stdin);
		fprintf(fptr3,"%s,%s,%s,%s,%s\n",t.id,t.name,t.exp,t.qual,t.subj);
		printf("\nRecord sucessfully modified");	
		}
	}
	
	fclose(fptr2);
	fclose(fptr3);
	remove("teacherinfo.csv");
	rename("temp1.csv","teacherinfo.csv");
	printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
}
void editbusinfo()
{
	char erno[50];
	printf("Enter route no. to be modified:");
	scanf("%s",&erno);
	FILE* fptr2=fopen("businfo.csv","a+");
	FILE* fptr3=fopen("temp1.csv","w+");
	char line[1000];
	char *temp;
	while(fgets(line,1000,fptr2)!=NULL)
	{
		char copy[1000];
		strcpy(copy,line);
		temp=strtok(copy,",");
		if(strcmp(temp,erno)!=0)
		{
			fprintf(fptr3,"%s,",strtok(line,","));
			fprintf(fptr3,"%s,",strtok(NULL,","));
			fprintf(fptr3,"%s,",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			fprintf(fptr3,"%s",strtok(NULL,","));
			
		}
		else
		{
		fflush(stdin);
		printf("\nEnter route no:");
		gets(b.route_no);
		fflush(stdin);
		printf("\nEnter driver's name:");
		gets(b.driver_name);
		//fflush(stdin);
		printf("\nEnter contact:");
		gets(b.contact);
		//fflush(stdin);
		printf("\nEnter pp1:");
		gets(b.pp1);
		printf("\nEnter pt1:");
		gets(b.pt1);
		printf("\nEnter pp2:");
		gets(b.pp2);
		printf("\nEnter pt2:");
		gets(b.pt2);
		printf("\nEnter pp3:");
		gets(b.pp3);
		printf("\nEnter pt3:");
		gets(b.pt3);
		
		//fflush(stdin);
		fprintf(fptr3,"%s,%s,%s,%s,%s,%s,%s,%s,%s\n",b.route_no,b.driver_name,b.contact,b.pp1,b.pt1,b.pp2,b.pt2,b.pp3,b.pt3);
		printf("\nRecord sucessfully modified");	
		}
	}
	
	fclose(fptr2);
	fclose(fptr3);
	remove("businfo.csv");
	rename("temp1.csv","businfo.csv");
	printf("\n\n\n");
		printf("Press 'a' to go back to the admin section:");
		char abc;
		scanf(" %c",&abc);
		if(abc=='a')
			admin();
		getch();
}
