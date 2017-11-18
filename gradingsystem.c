#include <conio.h>
#include <math.h>
#include <stdio.h>
void main()
{
	int sem1[5],sem2[5],sem3[5],sem4[5];
	int total[4],r,flag=0,i,j;
	float per[4];
	char grade[4][3];
	float spi1,spi2,spi3,spi4;
	float cgpa1,cgpa2,cgpa3,cgpa4;
	FILE *p;
	int rollno;
	char name[50];
	int g1,g2,g3,g4,g5,g6;
	int credit1[]={4,3,5,5,5};                  //22
	int credit2[]={4,5,4,5,5};                  //23
	int credit3[]={5,4,6,5,1};                  //21
	int credit4[]={4,5,5,4,1};                  //19
	float crtotal1=0.0,crtotal2=0.0,crtotal3=0.0,crtotal4=0.0,totalcredit;
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;



	clrscr();

		printf("\n\t\t**********************************");
		printf("\n\t\t* GRADE REPORT GENERATION SYSTEM *");
		printf("\n\t\t**********************************");
		sleep(2);
		printf("\n\n\n\n\t\tMade By:");
		sleep(1);
		printf("\tTanay Patel and Jhanvi Patel");
		sleep(1);
		printf("\n\n\t\tSubmitted To:");
		sleep(1);
		printf("\tPro.Dharmesh Darji");
		sleep(1);
		clrscr();
		printf("\n\t\t***********************************************");
		printf("\n\t\t*WELCOME TO THE GRADE REPORT GENERATION SYSTEM*");
		printf("\n\t\t***********************************************");
		printf("\n\n\n\n\n\n\n\t\t\t\t\tPress any key to continue....!!");
		getch();
		clrscr();

	p=fopen("record.dat","r");
	printf("Enter rollno  ");
	scanf("%d",&r);


	while(!feof(p))
	{
		fscanf(p,"%d%s%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&rollno,name,&sem1[0],
		&sem1[1],&sem1[2],&sem1[3],&sem1[4],&sem2[0],&sem2[1],&sem2[2],
		&sem2[3],&sem2[4],&sem3[0],&sem3[1],&sem3[2],&sem3[3],&sem3[4],
		&sem4[0],&sem4[1],&sem4[2],&sem4[3],&sem4[4]);
		if(r==rollno)
		{
			flag=1;
			break;

		}

	}
	if(flag==1)
	{
		total[0]=sem1[0]+sem1[1]+sem1[2]+sem1[3]+sem1[4];
		total[1]=sem2[0]+sem2[1]+sem2[2]+sem2[3]+sem2[4];
		total[2]=sem3[0]+sem3[1]+sem3[2]+sem3[3]+sem3[4];
		total[3]=sem4[0]+sem4[1]+sem4[2]+sem4[3]+sem4[4];
		per[0]=total[0]/5.0;
		per[1]=total[1]/5.0;
		per[2]=total[2]/5.0;
		per[3]=total[3]/5.0;
		per[4]=total[4]/5.0;
		for(i=0;i<4;i++)
		{
			if(per[i]>=90)
				strcpy(grade[i],"A+");
			else if(per[i]>=80)
				strcpy(grade[i],"A");
			else if(per[i]>=70)
				strcpy(grade[i],"B+");
			else if(per[i]>=60)
				strcpy(grade[i],"B");
			else if(per[i]>=50)
				strcpy(grade[i],"C+");
			else if(per[i]>=40)
				strcpy(grade[i],"C");
			else
				strcpy(grade[i],"F");

		}

		for(j=0;j<5;j++)
		{
			crtotal1=crtotal1+credit1[j];
			crtotal2=crtotal2+credit2[j];
			crtotal3=crtotal3+credit3[j];
			crtotal4=crtotal4+credit4[j];

		}
		for(j=0;j<5;j++)
		{
			if(sem1[j]>=90)
				sum1=sum1+(10*credit1[j]);
			else if(sem1[j]>=80)
				sum1=sum1+(9*credit1[j]);
			else if(sem1[j]>=70)
				sum1=sum1+(8*credit1[j]);
			else if(sem1[j]>=60)
				sum1=sum1+(7*credit1[j]);
			else if(sem1[j]>=50)
				sum1=sum1+(6*credit1[j]);
			else if(sem1[j]>=40)
				sum1=sum1+(5*credit1[j]);
			else
				sum1=sum1+(0*credit1[j]);
		}

		for(j=0;j<5;j++)
		{
			if(sem2[j]>=90)
				sum2=sum2+(10*credit2[j]);
			else if(sem2[j]>=80)
				sum2=sum2+(9*credit2[j]);
			else if(sem2[j]>=70)
				sum2=sum2+(8*credit2[j]);
			else if(sem2[j]>=60)
				sum2=sum2+(7*credit2[j]);
			else if(sem2[j]>=50)
				sum2=sum2+(6*credit2[j]);
			else if(sem2[j]>=40)
				sum2=sum2+(5*credit2[j]);
			else
				sum2=sum2+(0*credit2[j]);
		}
		for(j=0;j<5;j++)
		{
			if(sem3[j]>=90)
				sum3=sum3+(10*credit3[j]);
			else if(sem3[j]>=80)
				sum3=sum3+(9*credit3[j]);
			else if(sem3[j]>=70)
				sum3=sum3+(8*credit3[j]);
			else if(sem3[j]>=60)
				sum3=sum3+(7*credit3[j]);
			else if(sem3[j]>=50)
				sum3=sum3+(6*credit3[j]);
			else if(sem3[j]>=40)
				sum3=sum3+(5*credit3[j]);
			else
				sum3=sum3+(0*credit3[j]);
		}
		for(j=0;j<5;j++)
		{
			if(sem4[j]>=90)
				sum4=sum4+(10*credit4[j]);
			else if(sem4[j]>=80)
				sum4=sum4+(9*credit4[j]);
			else if(sem4[j]>=70)
				sum4=sum4+(8*credit4[j]);
			else if(sem4[j]>=60)
				sum4=sum4+(7*credit4[j]);
			else if(sem4[j]>=50)
				sum4=sum4+(6*credit4[j]);
			else if(sem4[j]>=40)
				sum4=sum4+(5*credit4[j]);
			else
				sum4=sum4+(0*credit4[j]);
		}

		spi1=sum1/crtotal1;
		spi2=sum2/crtotal2;
		spi3=sum3/crtotal3;
		spi4=sum4/crtotal4;
		sum5=sum1+sum2+sum3+sum4;
		totalcredit=0.0;
		for(i=0;i<5;i++)
		{
			totalcredit=totalcredit+credit1[i]+credit2[i]+credit3[i]+credit4[i];
		}
	     //	printf("totsl:%f",totalcredit);
		cgpa1=spi1;
		cgpa2=(sum1+sum2)/45.0;
		cgpa3=(sum1+sum2+sum3)/66.0;
		cgpa4=sum5/totalcredit;


		printf("Rollno = %d\n",rollno);
		printf("Name = %s\n",name);
		printf("Details of Sem 1*************************************\n\n");
		printf("Calculus = %d\t\t\t\t\t\tTotal = %d\n",sem1[0],total[0]);
		printf("Aptitude skill Building = %d\t\t\t\tPercentage = %.2f\n",sem1[1],per[0]);
		printf("Elements of Electrical and Electronics Engineering = %d\tGrade = %s\n",sem1[2],grade[0]);
		printf("Internet Programing = %d\t\t\t\tSGPA = %.2f\n",sem1[3],spi1);
		printf("Essentials of Software Foundation & Programing-1 = %d\tCGPA = %.2f\n",sem1[4],cgpa1);
		printf("\n\nPress any key to continue----------------------------\n\n");
		getch();

		printf("Details of Sem 2*************************************\n\n");
		printf("Linear Algebsa = %d\t\t\t\t\tTotal = %d\n",sem2[0],total[1]);
		printf("Digital Electronics = %d\t\t\t\tPercentage = %.2f\n",sem2[1],per[1]);
		printf("Basics of Communication System = %d\t\t\tGrade = %s\n",sem2[2],grade[1]);
		printf("Essentials of Software Foundation & Programming-2 = %d\t\SGPA = %.2f\n",sem2[3],spi2);
		printf("Basics of Oparating System and Scripiting = %d\t\tCGPA = %.2f\n",sem2[4],cgpa2);
		printf("\n\nPress any key to continue----------------------------\n\n");
		getch();

		printf("Details of Sem 3*************************************\n\n");
		printf("Applied Engineering Mathematies = %d\t\t\tTotal = %d\n",sem3[0],total[2]);
		printf("Computer Organization = %d\t\t\t\tPercentage = %.2f\n",sem3[1],per[2]);
		printf("Data Structures = %d\t\t\t\t\tGrade = %s\n",sem3[2],grade[2]);
		printf("Object Oriented Programing = %d\t\t\t\tSGPA = %.2f\n",sem3[3],spi3);
		printf("Application Development-1 = %d\t\t\t\tCGPA = %.2f\n",sem3[4],cgpa3);

		printf("\n\nPress any key to continue----------------------------\n\n");
		getch();

		printf("Details of Sem 4*************************************\n\n");
		printf("Probability & Statistics = %d\t\t\t\tTotal = %d\n",sem4[0],total[3]);
		printf("Operating Systems = %d\t\t\t\t\tPercentage = %.2f\n",sem4[1],per[3]);
		printf("Database Management System = %d\t\t\t\tGrade = %s\n",sem4[2],grade[3]);
		printf("Microprocess & Interfacing = %d\t\t\t\tSGPA = %.2f\n",sem4[3],spi4);
		printf("Application Development-2 = %d\t\t\t\tCGPA = %.2f\n",sem4[4],cgpa4);
		printf("\n\n***********END OF REPORT*****************************");


	}
	else
	{
		printf("Roll no does not exist");
	}

	getch();

}
