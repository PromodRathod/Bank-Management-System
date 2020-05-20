#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void User();
void Staff();
void CNA();
void LA();
void file(char NC[]);
void Uf(char NN[]);
void AD();
void B(char NN[]);
void W(char NN[]);
void D(char NN[]);
void OT(char NN[]);
void TM(char NN[]);
void SF();
void main()
{
 int c;
 puts("\n\n\n\t\t\t  Welcome to Banking app");
 printf("\n");
 printf("\n");
 puts("\t\t1. User Login\t\t\t2. Staff Login\n\n");
 printf("-->Enter your choice(number)\n");
 scanf("%d",&c);
 switch(c)
 {
  case 1:User();
	 break;
  case 2:Staff();
	 break;
  default:printf("! Please Enter a valid input\n");
  }
  system("pause");
}


     void User()	//user option function, for creating a new account or for loggin 
     {
      puts("User Login");
      int a;
      puts("\n\t  1. Create a New Account\t\t  2. Login to your Account");
      scanf("%d",&a);
      switch(a)
      {
       case 1:CNA();
	      break;
       case 2: LA();
	      break;
       default:puts("! Enter a Valid Input");
      }
     }


     void Staff()	//staff login function
     {
      char l[15],p[15],ac[15],pw[15],o[15];
      char lt[5]=".txt";
      printf("\n\n\t\tWelcome to Staff Login\n\n");
      printf("\tLogin ID : ");
      scanf("%s",l);
      printf("\n\n");
      printf("\tPassword : ");
      scanf("%s",p);
      printf("\n\n");
      strcpy(o,l);
      strcat(l,lt);
      FILE *lg;
      lg=fopen(l,"r");
      if(lg==NULL)
      {
       printf(" !ERROR\n");
       exit(0);
      }
      fscanf(lg,"%s\n",ac);
      fscanf(lg,"%s\n",pw);
      if(strcmp(o,ac)==0)
      {
       if(strcmp(p,pw)==0)
       {
       printf("\t\tLogin Successfull\n");
       }
       else
       {
	printf("\t\tIncorrect password\n");
       }
      }
      else
      {
       printf("\t\tIncorrect Login ID\n");
      }
      fclose(lg);
      SF();
     }


     void CNA()		//creating a new account for the client or the user
     {
      char n[20],ff[30],f[20],a[60],d[11],nt[20],r[20],p[15],s[20],nc[20];
      printf("\n\n\t\tCreate a New Account");
      printf("\n");
      printf("\n");
      printf("Full Name : ");
      scanf("%s",ff);
      printf("\n");
      printf("Name : ");
      scanf("%s",n);
      printf("\n");
      printf("Father's Name : ");
      scanf("%s",f);
      printf("\n");
      printf("Address : ");
      scanf("%s",a);
      printf("\n");
      printf("Date of Birth : ");
      scanf("%s",d);
      printf("\n");
      printf("Nationality : ");
      scanf("%s",nt);
      printf("\n");
      printf("Religion : ");
      scanf("%s",r);
      printf("\n");
      printf("Phone Number : ");
      scanf("%s",p);
      printf("\n");
      printf("State : ");
      scanf("%s",s);
      printf("\n");
      strcpy(nc,n);
      puts("\n\t\t1. Proceed\t\t\t2. Back");
      int z,x;
      scanf("%d",&z);
      switch(z)
      {
       case 1:printf("\tTo Proceed click 1\n");
	      scanf("%d",&x);
	      break;
       case 2:break;
       default:("\tEnter a valid input\n");
      }
      if(x==1)
      {
       char B[10]=".txt";
       strcat(n,B);
       FILE *acc;
       acc=fopen(n,"w+");
       if(acc==NULL)
       {
	printf(" ! Couldn't open the account\n");
	exit(0);
       }
       fprintf(acc,"%s\n",ff);
       fprintf(acc,"%s\n",nc);
       fprintf(acc,"%s\n",f);
       fprintf(acc,"%s\n",a);
       fprintf(acc,"%s\n",d);
       fprintf(acc,"%s\n",nt);
       fprintf(acc,"%s\n",r);
       fprintf(acc,"%s\n",p);
       fprintf(acc,"%s\n",s);
       printf("\n\tAccount Created!\n\n");
       fclose(acc);
       file(nc);
     }
    }


     void LA()		//existing user login
     {
      puts("\n\n\t\tExisting Account Login\n");
      char a[20],b[20],ac[20],pw[20],z[20],nn[20];
      char c[10]=".txt";
      printf("\nEnter your Name : ");
      scanf("%s",nn);
      printf("\n\nAccount.No : 18c37a61");
      scanf("%s",a);
      printf("\n\nPassword : ");
      scanf("%s",b);
      strcpy(z,a);
      strcat(a,c);
      FILE *lg;
      lg=fopen(a,"r");
      if(lg==NULL)
      {
       printf(" !ERROR\n");
       exit(0);
      }
      fscanf(lg,"%s\n",ac);
      fscanf(lg,"%s\n",pw);
      if(strcmp(z,ac)==0)
      {
       if(strcmp(b,pw)==0)
       {
       printf("\t\tLogin Successfull\n");
       }
       else
       {
	printf("\t\tIncorrect password\n");
       }
      }
      else
      {
       printf("\t\tIncorrect Account Number\n");
      }
      fclose(lg);
      Uf(nn);
     }

     void file(char NC[])	//continued process of creating new account of a user
     {
       char aa[40]="18c37a61";
       char bb[20],cc[20],yy[40];
       char zz[10]=".txt";
       printf("\n\nEnter 5 digits : ");
       scanf("%s",bb);
       printf("\n\n");
       strcat(aa,bb);
       printf("Your Account Number is : ");
       printf("%s",aa);
       printf("\n\n");
       printf("Enter a password : ");
       scanf("%s",cc);
       printf("\n\n");
       printf("User Name : ");
       printf("%s",aa);
       printf("\n\n");
       printf("Password : ");
       printf("%s",cc);
       printf("\n\n");
       strcpy(yy,bb);
       strcat(bb,zz);
       FILE *lg;
       lg=fopen(bb,"w+");
       if(lg==NULL)
       {
	printf("! ERROR\n");
	exit(0);
       }
	fprintf(lg,"%s\n",yy);
	fprintf(lg,"%s\n",cc);
	fclose(lg);
	printf("\t\tAccount Successfully Created\n");
	char F[5]="B";
	char CY[30];
	strcpy(CY,NC);
	strcat(NC,F);
	strcat(NC,zz);
	double I=0;
	FILE *B;
	B=fopen(NC,"w+");
	if(B==NULL)
	{
	 printf(" ! ERROR\n");
	 exit(0);
	}
	fprintf(B,"%lf",I);
	fclose(B);
	char O[5]="T";
	strcat(CY,O);
	strcat(CY,zz);
	FILE *OT;
	OT=fopen(CY,"w+");
	if(OT==NULL)
	{
	 printf(" ! ERROR\n");
	 exit(0);
	}
	fprintf(OT,"%lf",I);
	fclose(OT);
      }

     void Uf(char NN[])		//user menu once logged in
     {
      printf("\n\n\t\tWelcome to NetBanking\n\n");
      printf("\t1. Account Detials\n");
      printf("\t2. Balance\n");
      printf("\t3. Withdrawal\n");
      printf("\t4. Deposit\n");
      printf("\t5. Transfer Money\n");
      printf("\t6. Request\n\n");
      int a;
      scanf("%d",&a);
      switch(a)
      {
       case 1: AD();
	       break;
       case 2: B(NN);
	       break;
       case 3: W(NN);
	       break;
       case 4: D(NN);
	       break;
       case 5: TM(NN);
	       break;
       case 6: OT(NN);
	       break;
       default: printf("\t\tEnter a valid input\n");
      }
     }

     void AD()		//user account details
     {
      char aa[20],ff[40],nc[20],f[20],a[100],d[15],nt[20],r[20],p[15],s[20];
      char b[10]=".txt";
      printf("\tEnter your Name\n\n");
      scanf("%s",aa);
      strcat(aa,b);
      FILE *acc;
      acc=fopen(aa,"r");
      if(acc==NULL)
      {
       printf(" !ERROR\n");
       exit(0);
      }
      fscanf(acc,"%s\n",ff);
      fscanf(acc,"%s\n",nc);
      fscanf(acc,"%s\n",f);
      fscanf(acc,"%s\n",a);
      fscanf(acc,"%s\n",d);
      fscanf(acc,"%s\n",nt);
      fscanf(acc,"%s\n",r);
      fscanf(acc,"%s\n",p);
      fscanf(acc,"%s\n",s);
      printf("Full Name : %s\n",ff);
      printf("Name : %s\n",nc);
      printf("Father's Name : %s\n",f);
      printf("Address : %s\n",a);
      printf("Date of Birth : %s\n",d);
      printf("Nationality : %s\n",nt);
      printf("Religion : %s\n",r);
      printf("Phone Number : %s\n",p);
      printf("State : %s\n",s);
      fclose(acc);
     }

     void B(char NN[])		//balance
     {
      char S[5]="B";
      char Z[5]=".txt";
      double E;
      strcat(NN,S);
      strcat(NN,Z);
      FILE *B;
      B=fopen(NN,"r");
      if(B==NULL)
      {
       printf(" ! ERROR\n");
       exit(0);
      }
      fscanf(B,"%lf",&E);
      printf("\n\nThe Balance is : ");
      printf("%lf",E);
      fclose(B);
     }

     void W(char NN[])		//withdrawal
     {
      char R[5]="B";
      char T[5]=".txt";
      double G,H,I;
      strcat(NN,R);
      strcat(NN,T);
      printf("Enter the Amount you want to Withdraw : ");
      scanf("%lf",&G);
      printf("\n\n");
      FILE *B;
      B=fopen(NN,"r");
      if(B==NULL)
      {
       printf(" ! ERROR\n");
       exit(0);
      }
      fscanf(B,"%lf",&H);
      fclose(B);
      I=H-G;
      FILE *Bb;
      Bb=fopen(NN,"w");
      if(B==NULL)
      {
       printf(" ! ERROR\n");
       exit(0);
      }
      fprintf(Bb,"%lf",I);
      fclose(Bb);
      printf("Amount Withdrawn Successfully\n");
     }

     void D(char NN[])		//deposit
     {
      char R[5]="B";
      char T[5]=".txt";
      double G,H,I;
      strcat(NN,R);
      strcat(NN,T);
      printf("Enter the Amount you want to Deposit : ");
      scanf("%lf",&G);
      printf("\n\n");
      FILE *B;
      B=fopen(NN,"r");
      if(B==NULL)
      {
       printf(" ! ERROR\n");
       exit(0);
      }
      fscanf(B,"%lf",&H);
      fclose(B);
      I=G+H;
      FILE *Bb;
      Bb=fopen(NN,"w");
      if(B==NULL)
      {
       printf(" ! ERROR\n");
       exit(0);
      }
      fprintf(Bb,"%lf",I);
      fclose(Bb);
      printf("Amount Deposited Successfully\n");
     }

     void OT(char NN[])		//request for changing any account detail of the customer
     {
      char a[10],ac[10],pw[20],p[20];
      char ff[40],nc[20],f[20],aa[100],d[10],nt[20],r[20],pp[15],s[20];
      char S[10]=".txt";
      strcat(NN,S);
      printf("\n\n\t\tRequest to update details\n\n");
      printf("\t1. Change password\n\n");
      printf("\t2. Change other details\n\n");
      int n;
      scanf("%d",&n);
      switch(n)
      {
       case 1: printf("Enter the Account Number : 18c37a61");
	       scanf("%s",a);
	       printf("\n\n");
	       char b[5]=".txt";
	       strcat(a,b);
	       FILE *lg;
	       lg=fopen(a,"r");
	       if(lg==NULL)
	       {
		printf(" !ERROR\n");
		exit(0);
	       }
	       fscanf(lg,"%s\n",ac);
	       fscanf(lg,"%s\n",pw);
	       fclose(lg);
	       printf("Enter the new password : ");
	       scanf("%s",p);
	       printf("\n\n");
	       FILE *lgg;
	       lgg=fopen(a,"w");
	       if(lgg==NULL)
	       {
		printf(" !ERROR\n");
		exit(0);
	       }
	       fprintf(lgg,"%s\n",ac);
	       fprintf(lgg,"%s\n",p);
	       fclose(lgg);
	       printf("\tPassword changed successfully\n\n");
	       break;
       case 2: printf("\nEnter the details\n\n");
	       printf("Full Name : ");
	       scanf("%s",ff);
	       printf("\n\n");
	       printf("Name : ");
	       scanf("%s",nc);
	       printf("\n\n");
	       printf("Father's Name : ");
	       scanf("%s",f);
	       printf("\n\n");
	       printf("Address : ");
	       scanf("%s",aa);
	       printf("\n\n");
	       printf("Date of Birth : ");
	       scanf("%s",d);
	       printf("\n\n");
	       printf("Nationality : ");
	       scanf("%s",nt);
	       printf("\n\n");
	       printf("Religion : ");
	       scanf("%s",r);
	       printf("\n\n");
	       printf("Phone Number : ");
	       scanf("%s",pp);
	       printf("\n\n");
	       printf("State : ");
	       scanf("%s",s);
	       printf("\n\n");
	       FILE *acc;
	       acc=fopen(NN,"w");
	       if(acc==NULL)
	       {
		printf(" ! Couldn't open the account\n");
		exit(0);
	       }
	       fprintf(acc,"%s\n",ff);
	       fprintf(acc,"%s\n",nc);
	       fprintf(acc,"%s\n",f);
	       fprintf(acc,"%s\n",aa);
	       fprintf(acc,"%s\n",d);
	       fprintf(acc,"%s\n",nt);
	       fprintf(acc,"%s\n",r);
	       fprintf(acc,"%s\n",pp);
	       fprintf(acc,"%s\n",s);
	       printf("\n\tDetails Changed Successfully\n\n");
	       fclose(acc);
	       break;
       Default:printf("\n\t\tEnter a valid input\n");
      }
     }

     void TM(char NN[])		//transfer money
     {
      char S[5]="B";
      char Z[5]=".txt";
      double E;
      strcat(NN,S);
      strcat(NN,Z);
      FILE *B;
      B=fopen(NN,"r");
      if(B==NULL)
      {
       printf(" ! ERROR\n");
       exit(0);
      }
      fscanf(B,"%lf",&E);
      fclose(B);
      char acc[10],Na[20];
      double U,T,Q,W;
      printf("Enter the Account Number to which you want to transfer : 18c37a61");
      scanf("%s",acc);
      printf("\n\n");
      printf("Enter the Account Holder's Name : ");
      scanf("%s",Na);
      printf("\n\n");
      printf("Enter the Amount to be transferred : ");
      scanf("%lf",&W);
      printf("\n\n");
      strcat(Na,S);
      strcat(Na,Z);
      FILE *Bb;
      Bb=fopen(Na,"r");
      if(Bb==NULL)
      {
       printf(" ! ERROR\n");
       exit(0);
      }
      fscanf(Bb,"%lf",&Q);
      fclose(Bb);
      T=Q+W;
      U=E-W;
      if(E>=W)
      {
       FILE *A;
       A=fopen(NN,"w");
       if(A==NULL)
       {
	printf(" ! ERROR\n");
	exit(0);
       }
       fprintf(A,"%lf",U);
       fclose(A);
       FILE *C;
       C=fopen(Na,"w");
       if(C==NULL)
       {
	printf(" ! ERROR\n");
	exit(0);
       }
       fprintf(C,"%lf",T);
       fclose(C);
       printf("\t\tMoney Transferred Successfully !!\n");
      }
     }

     void SF()		//staff can update details of any customer
     {
      char E[20],N[20],D[20],pw[20];
      double a;
      printf("\t\tEnter the Account Number you want to Freeze/Unfreeze : ");
      scanf("%s",E);
      printf("\n\n");
      printf("\t\tEnter the Account Holder's Name : ");
      scanf("%s",N);
      printf("\n\n");
      printf("\t\tEnter the new password : ");
      scanf("%s",pw);
      printf("\n\n");
      printf("\t\tEnter the Balance : ");
      scanf("%lf",&a);
      printf("\n\n");
      char B[5]="B";
      char T[5]=".txt";
      strcpy(D,E);
      strcat(E,T);
      FILE *lg;
      lg=fopen(E,"w");
      if(lg==NULL)
      {
       printf(" !ERROR\n");
       exit(0);
      }
      fprintf(lg,"%s\n",D);
      fprintf(lg,"%s\n",pw);
      fclose(lg);
      strcat(N,B);
      strcat(N,T);
      FILE *lgg;
      lgg=fopen(N,"w");
      if(lgg==NULL)
      {
       printf(" !ERROR\n");
       exit(0);
      }
      fprintf(lgg,"%lf",a);
      fclose(lgg);
      printf("\t\tThe account was Freezed/Unfreezed !!\n");
     }
