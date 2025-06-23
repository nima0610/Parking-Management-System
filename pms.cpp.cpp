#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
struct no{
	int plo;
	char naam[30];
	char tome[15];
	char mins[10];
	char dura[10];
	char date[20];
}iu, pli, ujk, gnk;
int nob=0,nom=0, mpk,jjk,ttt,puv,kp,jk,ns, noc=0, noa=0, count=0,ujpp,bbbb,cccc,tttt,bp, amount=0, b=10, c=15, t=8, bk=25, pb,pc,pt,pbk,l,kko;
char po;
//nob=no of bus, noc=no of car, noa=no of truck, nom=no of bike
//p(b,c,t,bk=available parking slots for bus,car.truck,bike)
int i=0,z,mk=0,mj=0;//i for bus record counting
int menu();
void bus();
void car(); int pw;
void truck();
void bike();
void details();
void departure();
void bs();
void cr();
void tr();
void dcar();
void dbike();
void dbus();
void dtruck();
int query();
void bi();
int bpark();
int cpark();
int defini();
void detils();
void povk();
int bkpark();
int tpark();
int bn[10];
	
int main()
{
	while(1)
	{
	switch(menu())
	{
		case 1:
			system ("cls");
			bus();
			break;
			case 2:
				system ("cls");
				car();
				break;
				case 3:
					system ("cls");
					truck();
					break;
					case 4:
						system("cls");
						bike();
						break;
						case 5:
							system ("cls");
							details();
							break;
							case 6:
								system("cls");
								departure();
								break;
								case 7:
									Beep(1200, 700);
									exit(1);
								default:
									Beep(800, 500);
									printf("\nyour choice is not in the list sir/mam");
									getch();
	}
	}
return 0;
}
int menu()
{
	system("cls");
	int ch;
	printf("\t\t\t\t\tWELCOME TO PARKING SLOT\n\t\tYOU CAN PARK YOUR VEHICLE HERE AND FEEL FREE AND SECURE FOR YOUR VEHICLE\n\t\t\t\t\t\t***");
	pb=b-nob;
	pc=c-noc;
	pt=t-noa;
	pbk=bk-nom;
	count=nob+noc+noa+nom;
	printf("\nAvailable bus parking slots = %d",pb);
	printf("\nAvailable car parking slots = %d",pc);
	printf("\nAvailable truck parking slots  = %d",pt);
	printf("\nAvailable bike parking slots= %d",pbk);
	printf("\nYou can choose among the slots listed below to find about the details");
	printf("\n\t\t\t1:bus");
	printf("\t\t\t2:car");
	printf("\n\t\t\t3:truck");
	printf("\t\t\t4:bike");
	printf("\n\t\t\t5:details");
	printf("\t\t6:departure");
		printf("\n\t\t\t7:exit");
	printf("\n Enter your choice\n");
	scanf("%d",&ch);

	return ch;
}
void bus()
{
	pb=b-nob;
	printf("\n Total no of available bus slots=%d",pb);
		printf("\nPrice for bus parking\n1 hour = 30rs\nHalf hour = 15rs\n");
	if(pb>0)
	{
		
system("cls");
	FILE *ptu;
	ptu=fopen("bus.txt","a+");
		printf("\nPrice for bus parking\n1 hour = 30rs\nHalf hour = 15rs\n");
	printf("\nEnter your bus no\t");
	scanf("%d",&iu.plo);
	printf("\nEnter your name\t");
	scanf("%s",&iu.naam);
	printf("\nEnter today's date \t");
	scanf("%s",&iu.date);
	printf("\nEnter your arrival time in \n\nHour-");
	scanf("%s",&iu.tome);
	printf("\nMin-\t");
	scanf("%s",&iu.mins);
	printf("\nAM OR PM-\t");
	scanf("%s",iu.dura);
	
		fwrite(&iu, sizeof (struct no),1,ptu);
	fclose(ptu);
	printf("\nEnter the amount of hour you want to park your vehicle\t");
	scanf("%d",&ujpp);
	bp=(ujpp*30);
	printf("\nWelcome to bus parking slot.\nBus parking slot added succesfully.\n You can park your bus on the available parking slot.");
	printf("\nThe amount you need to pay is %d rs",bp);
nob++;
amount=amount+(ujpp*30);
count++;
getch();
			}
			else
			{
					Beep(800, 500);
				
				printf("\nSorry sir/mam,\n we donot have parkings slots available for parking");
				getch();
			}
				
			
		
	}

void car()
{
	printf("\nPrice for car parking\n1hr = 35rs,half hour = 20rs\n");
	pc=c-noc;
	printf("\nno of car slots available=%d",pc);
	if(pc>1)
	{
	
	system("cls");
		FILE *pkl;
		pkl=fopen("car.txt","a");
		printf("Enter your car no\t");
		scanf("%d",&pli.plo);
		printf("\nenter your name\t");
		scanf("%s",&pli.naam);
		printf("\nEnter today's date\t");
		scanf("%s",&pli.date);
		printf("\nEnter your arrival time in \nHour-\t");
	
	scanf("%s",&pli.tome);
	printf("\nMin-\t");
	scanf("%s",&pli.mins);
	printf("\nAM OR PM-\t");
	scanf("%s",&pli.dura);
		fwrite(&pli, sizeof(struct no),1,pkl);
		fclose(pkl);
		printf("\nEnter the amount of hour you want to park your vehicle\t");
	scanf("%d",&cccc);
	kp=cccc*35;
		printf("Car parking slot added successfully,\nYou can park your car in the available slot");
		printf("\nThe amount you need to pay is %d rs",kp);
			noc++;
	amount=amount+(cccc*35);
	count++;
	getch();
	}
	else
	{
		Beep(800, 500);
		printf("\nSorry sir/mam,\n We donot have parking slots available for car");
		getch();
	}
}

void bike()
{
	printf("\nPrice for bike parking\n1 hr = 25rs\nHalf hour = 10rs\n");
	pbk=bk-nom;
	printf("\nTotal no of slots available for bike parking is %d",pbk);
	if(pbk>0)
	{
		system("cls");
	FILE *kju;
	kju=fopen("bike.txt","a");
	printf("\nEnter your bike no\t");
	scanf("%d",&ujk.plo);
	printf("\nEnter your name\t");
	scanf("%s",&ujk.naam);
	printf("\nEnter today's date\t");
	scanf("%s",&ujk.date);
	printf("\nEnter your arrival time in \n-Hour\t");
	
	scanf("%s",&ujk.tome);
	printf("\nMin-\t");
	scanf("%s",&ujk.mins);
	printf("\nAM OR PM-\t");
	scanf("%s",&ujk.dura);
	fwrite(&ujk,sizeof(struct no),1,kju);
	fclose(kju);
	printf("\nEnter the amount of hour you want to park your vehicle\t");
	scanf("%d",&bbbb);
	printf("Bike parking slot added succesfully");
	ns=bbbb*25;
	printf("\nThe amount you need to pay is %d rs",ns);
	nom++;
	amount=amount+(bbbb*25);
	count++;
	getch();
}
	else
	{
			Beep(800, 500);
		printf("\nsorry sir/mam,\n We don't have parking slots available for bike");
		getch();
	}
}

void truck()
{
	
	printf("\nPrice for truck parking\n1 hr = 40rs\nHalf hour = 20rs\n");
	pt=t-noa;
	printf("total no of truck parkings slots available is %d",pt);
	if(pt>0)
	{
			system("cls");
	FILE *nima;
	nima=fopen("trucks.txt","a");
	printf("\nEnter your truck no\t");
	scanf("%d",&gnk.plo);
	printf("\nEnter your name\t");
	scanf("%s",&gnk.naam);
		printf("\nEnter today's date\t");
	scanf("%s",&gnk.date);
	printf("\nEnter your arrival time in \nHour-\t");
	scanf("%s",&gnk.tome);
	printf("\nMin-\t");
	scanf("%s",&gnk.mins);
	printf("\nAM OR PM-\t");
	scanf("%s",&gnk.dura);
	fwrite(&gnk,sizeof(struct no),1,nima);
	fclose(nima);
	printf("\nEnter the amount of hour you want to park your vehicle");
	scanf("%d",&tttt);
		printf("\nTruck parking slot added succesfully.\n You can park your truck in the available slot");
		jk=tttt*40;
		printf("\nThe amount you need to pay is %d rs",jk);
	noa++;
	amount=amount+(tttt*40);
	count++;
	getch();
		
		}
		else{
				Beep(800, 500);
			printf("Sorry sir/mam,\n We have no parkings slots available for truck");
			getch();
		}
	}
void departure()
{
	printf("\nChoose the vehicle type you want to depart");
	printf("\n1:Bus\t\t\t2:Car\n3:Truck\t\t\t4:Bike\n");
	switch(query())
	{
		case 1:
			dbus();
			break;
			case 2:
				dcar();
				break;
				case 3:
					dtruck();
					break;
					case 4:
						dbike();
						break;
						default:
								Beep(800, 500);
							printf("\nPlease choose a valid option");
							getch();
	}
	
}
int query()
{
	int xyz;
	scanf("%d",&xyz);
	return xyz;
}
void dbus()
{
	if(nob>0)
	{
		FILE*ptu;
		ptu=fopen("bus.txt","r");
		printf("\nEnter your bus no\t");
		scanf("%d",&mpk);
		while(fread(&iu,sizeof (struct no),1,ptu))
		{
			if(iu.plo==mpk)
			{
				printf("Vehicle departed succesfully");
				nob=nob-1;
				getch();
			}
		}
		
		}
	
	else
	{
			Beep(800, 500);
		printf("\nYou have not parked your bus yet or you might have choosen wrong vehicle type");
		getch();
	}
	
}
void dcar()
{
if(noc>0)
	{
			FILE*pkl;
		pkl=fopen("car.txt","r");
		printf("\nEnter your car no\t");
		scanf("%d",&jjk);
		while(fread(&iu,sizeof (struct no),1,pkl))
		{
			if(iu.plo==jjk)
			{
	printf("Vehicle departed succesfully");
	noc=noc-1;
	getch();
}
	//else
		//	{
			//		Beep(800, 500);
			//	printf("\nInvalid no plate");
			//	getch();
		//	}
		//	break;
	}
}
	else
	{
			Beep(800, 500);
		printf("\nYou have not parked your car yet or you might have choosen wrong vehicle type");
		getch();
	}	
	}

void dtruck()
{
	if(noa>0)
	{
			FILE*nima;
		nima=fopen("trucks.txt","r");
		printf("\nEnter your truck no\t");
		scanf("%d",&puv);
		while(fread(&iu,sizeof (struct no),1,nima))
		{
			if(iu.plo==puv)
			{
	printf("Vehicle departed succesfully");
	noa=noa-1;
	getch();
			}
			//	else
		//	{
			//		Beep(800, 500);
			//	printf("\nInvalid no plate");
			//	getch();
		//	}
		//	break;		
	}
}
	else
	{
			Beep(800, 500);
		printf("\nYou have not parked your truck yet or you might have choosen wrong vehicle type");
		getch();
	}
	
}
void dbike()
{if(nom>0)
	{
		FILE*kju;
		kju=fopen("bike.txt","r");
		printf("\nEnter your bike no\t");
		scanf("%d",&ttt);
		while(fread(&iu,sizeof (struct no),1,kju))
		{
			if(iu.plo==ttt)
			{
	printf("Vehicle departed succesfully");
	nom=nom-1;
	getch();
	}
	//	else
	//		{
	//				Beep(800, 500);
	//			printf("\nInvalid no plate");
	//			getch();
	//		}
	//		break;

}
}
	else
	{
			Beep(800, 500);
		printf("\nYou have not parked your bike yet or you might have choosen wrong vehicle type");
		getch();
	}
}
void details()
{
	printf("\nEnter the password to reassure that you are eligible to know details\n");
	scanf("%d",&pw);
	if(pw==1234)
	{
	FILE *ptu;
	printf("\nno of car parking slots under use=%d,",noc);
	printf("\nno of truck parking slots under use=%d",noa);
	printf("\nno of bus parking slots under use=%d",nob);
	printf("\nno of bikes parking slots under use=%d",nom);
	printf("\n\ntotal amount paid by customers=%d",amount);
	printf("\n\nTotal no of vehicle count=%d",nob+noc+noa+nom);
	printf("\n\nTotal free slots available now are\nBus=%d\t\t\tCar=%d\nTruck=%d\t\t\tBike=%d",pb,pc,pt,pbk);
	ptu=fopen("bus.txt","r");
	printf("\n\n\n\n\t\t************************BUS NUMBER RECORDS****************************");
	printf("\nBus no:\t\t\tName\t\t\tTime of arrival\t\t\tDate");
	while(fread(&iu,sizeof (struct no),1,ptu))
	{
		printf("\n%d",iu.plo);
		printf("\t\t\t%s",iu.naam);
	//	if(iu.tome>12)
	//	{
		printf("\t\t\t%s",iu.tome);
		printf(":%s",iu.mins);
		printf(" %s",iu.dura);
		printf("\t\t\t\t%s",iu.date);
	//	printf("PM");
	//	}
	//	else if(iu.tome=12)
	//	{
	//		printf("\t\t\t%s",iu.tome);
	//	printf("PM");
	//	}
	//	else
	//	{
	//		printf("\t\t\t%s",iu.tome);
	//	printf("AM");
	//	}
		
		}
	
	fclose(ptu);
	FILE *pkl;
	pkl=fopen("car.txt","r");
	printf("\n\t\t************************CAR NUMBER RECORDS****************************");
	printf("\ncar no:\t\t\tName\t\t\tTime of arrival\t\t\tDate");
	while(fread(&pli, sizeof(struct no),1,pkl))
	{
		printf("\n%d",pli.plo);
		printf("\t\t\t%s",pli.naam);
		printf("\t\t\t%s",pli.tome);
			printf(":%s",pli.mins);
		printf(" %s",pli.dura);
			printf("\t\t\t\t%s",pli.date);
	}
	fclose(pkl);
	FILE *kju;
	kju=fopen("bike.txt","r");
	printf("\n\t\t**************************BIKE NO RECORDS*****************************");
	printf("\nbike no:\t\tName\t\t\tTime of arrival\t\t\tDate");
	while(fread(&ujk, sizeof(struct no),1,kju))
	{
		printf("\n%d",ujk.plo);
			printf("\t\t\t%s",ujk.naam);
			printf("\t\t\t%s",ujk.tome);
				printf(":%s",ujk.mins);
		printf(" %s",ujk.dura);
			printf("\t\t\t\t%s",ujk.date);
	}
	fclose(kju);
	FILE*nima;
	nima=fopen("trucks.txt","r");
	printf("\n\t\t***************************truck no records***************************");
	printf("\ntruck no:\t\tName\t\t\tTime of arrival\t\t\tDate");
	while(fread(&gnk,sizeof(struct no),1,nima))
	{
		printf("\n%d",gnk.plo);
			printf("\t\t\t%s",gnk.naam);
				printf("\t\t\t%s",gnk.tome);
					printf(":%s",gnk.mins);
		printf(" %s",gnk.dura);
			printf("\t\t\t\t%s",gnk.date);
	}
	fclose(nima);
	getch();
}
		
		else
		{
				Beep(800, 800);

			printf("\nInvalid password");
			getch();
		}
	}

