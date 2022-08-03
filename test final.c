#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int i,j;
int main_exit;
void menu();
struct date
{
    int month,day,year;

};
struct
{

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

} add,upd,check,rem,transaction;
typedef struct login
{
    char fname[50];
    char lname[50];
    char username[50];
    char password[50];
} login;

float interest(float t,float amount,int rate)
{
    float SI;
    SI=(rate*t*amount)/100.0;
    return (SI);

}
void fordelay(int j)
{
    int i,k;
    for(i=0; i<j; i++)
        k=i;
}
void logins()
{
    int i;
    char username[50];
    char password[50];
    FILE *log;
    log = fopen("E:\\program.txt","r");
    login l;
    system("cls");
    system("color 9");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   USER  ID : ");
    scanf("%s",&username);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   PASSWORD : ");
    scanf("%s",&password);
    int t=0;
    while(fread(&l,sizeof(login),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t  Password Match!\n\t\t\t\t\t\t\t\t\t\t\t\n\n\t\t\t\t\t\t\t\t\t\t\t\tLOADING");
            for(i=0; i<=6; i++)
            {
                fordelay(100000000);
                printf(".");
            }

            t=1;
            break;

        }

    }
    fclose(log);
    if(t==1)
    {

        menu();
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t  Please Wait");
        for(i=0; i<=7; i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\a\aWrong User Name Or Password!!!\n\n\n\t\t\t\t\t\t\t\t\t\t  Please Enter Right Information Or Create a New Account\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\tPress Any Key To Continue......");
        getch();
        main();
    }
}
void registe()
{
    system("CLS");
    FILE *log;

    login id;
    login l;
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t         REGISTRATION\t\t   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t Enter First Name: ");
    scanf("%s",id.fname);
    printf("\n\t\t\t\t\t\t\t\t\t\t Enter Last  Name: ");
    scanf("%s",id.lname);
    printf("\n\t\t\t\t\t\t\t\t\t\t Enter User  Name: ");
    scanf("%s",id.username);
    printf("\n\t\t\t\t\t\t\t\t\t\t Enter   Password: ");

    scanf("%s",id.password);
    log = fopen("E:\\program.txt","a+");
    while(fread(&l,sizeof(login),1,log))
    {
        if(strncmp(id.username,l.username,50)==0)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\tPlease enter different user name\n");
            getch();
            registe();
            break;
        }
    }
    fwrite(&id,sizeof(login),1,log);

    fclose(log);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tPlease Wait!\n\t\t\t\t\t\t\t\t\t\t\t\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tLOADING");
    for(i=0; i<=6; i++)
    {
        fordelay(100000000);
        printf(".");
    }

    printf("\n\n \t\t\t\t\t\t\t\t\t\t\t    Your Account Successfully Registered\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t     Now Log In with User Id and Password\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t      Press any key to continue......");
    getch();
    system("CLS");
    logins();
}

void new_acc()
{
    int choice;
    FILE *ptr;
    ptr=fopen("record.dat","a+");
account_no:
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t         ADD RECORD\t\t   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter Today's Date(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the account number: ");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (check.acc_no==add.acc_no)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tAccount no. already in use!!!\a\a");
            fordelay(1000000000);
            goto account_no;

        }
    }
    add.acc_no=check.acc_no;
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the name: ");
    scanf("%s",add.name);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the date of birth(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the age: ");
    scanf("%d",&add.age);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the address: ");
    scanf("%s",add.address);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the citizenship : ");
    scanf("%s",add.citizenship);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the phone number: ");
    scanf("%lf",&add.phone);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter the amount to deposit: $");
    scanf("%f",&add.amt);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tType of Account: \n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1. Saving\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Current\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3. Fixed1(for 1 year)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4. Fixed2(for 2 years)\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5. Fixed3(for 3 years)\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ");
    scanf("%s",add.acc_type);

    fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);


    fclose(ptr);

    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t         Account Created Successfully!!");
add_invalid:
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter 1 to go to the Main Menu and 0 to Exit ");
    scanf("%d",&main_exit);
    if (main_exit==1)
        menu();
    else if(main_exit==0)
        main();
    else
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t \t\tInvalid!\a");
        goto add_invalid;
    }
}
void view_list()
{
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    system("cls");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t      VIEW CUSTOMER LIST           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\n\t\t\t\t\t\t\t\tACC. NO.\t\t\tNAME\t\t\t\tADDRESS\t\t\t\t\tPHONE\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        printf("\n\n\t\t\t\t\t\t\t\t%6d\t\t %10s\t\t\t%10s\t\t\t%.0lf",add.acc_no,add.name,add.address,add.phone);
        test++;
    }

    fclose(view);
    if (test==0)
    {

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tNO RECORDS!!\n");
    }

view_list_invalid:
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter 1 to go to the main menu and 0 to exit: ");
    scanf("%d",&main_exit);

    if (main_exit==1)
    {
        system("cls");
        menu();
    }

    else if(main_exit==0)
    {
        system("cls");
        main();
    }

    else
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t  Invalid!\a");
        goto view_list_invalid;
    }
}
void edit(void)
{   system("cls");
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t            UPDATE INFORMATION             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter Your Account No: ");
    scanf("%d",&upd.acc_no);
    while(fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if (add.acc_no==upd.acc_no)
        {
            test=1;
            printf("\n\t\t\t\t\t\t\t\t\t\t\tWhich information do you want to change?\n\n\t\t\t\t\t\t\t\t\t\t\t1.Address\n\n\t\t\t\t\t\t\t\t\t\t\t2.Phone\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ");
            scanf("%d",&choice);
            system("cls");
            if(choice==1)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t            UPDATE INFORMATION             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t  Enter the new address:");
                scanf("%s",upd.address);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,upd.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);

                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tChanges saved!!!");
            }
            else if(choice==2)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t            UPDATE INFORMATION             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t  Enter the new phone number:");
                scanf("%lf",&upd.phone);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,upd.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);

                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tChanges saved!");
            }

        }
        else
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
    }
    fclose(old);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat","record.dat");

    if(test!=1)
    {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t            UPDATE INFORMATION             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    Record not found!!\a\a\a");
edit_invalid:
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter 0 to Try Again,1 to return to Main Menu and 2 to Exit :");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)

            menu();
        else if (main_exit==2)
            main();
        else if(main_exit==0)
            edit();
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\tInvalid!\a");
            goto edit_invalid;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tEnter 1 to go to the Main Menu and 0 to Exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            main();
    }
}

void transact(void)
{

    system("cls");
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t         TRANSACTION               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tEnter The Account No:");
    scanf("%d",&transaction.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {

        if(add.acc_no==transaction.acc_no)
        {
            test=1;
            if(strcmpi(add.acc_type,"fixed1")==0||strcmpi(add.acc_type,"fixed2")==0||strcmpi(add.acc_type,"fixed3")==0)
            {
                printf("\a\a\a\n\n\t\t\t\t\t\t\t\t\t\t\t\tYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
                fordelay(1000000000);
                system("cls");
                menu();

            }
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tDo you want To??? \n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t1. Deposit\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t2. Withdraw?\n");
khalid:
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Enter your choice: ");
            scanf("%d",&choice);
            if (choice==1)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t  Enter the amount you want to deposit:$ ");
                scanf("%f",&transaction.amt);

                add.amt+=transaction.amt;
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Deposited successfully!");

            }
            else if(choice==2)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t  Enter the amount you want to withdraw:$ ");
                scanf("%f",&transaction.amt);
                 if (transaction.amt<=add.amt){
                add.amt-=transaction.amt;
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Withdrawn successfully!");
            }
            else {

            printf("\n\t\t\t\t\t\t\t\t\t\t\t  You have not enough balance:$ ");
            }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t  Wrong Entry, Please Enter Correct Number\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t    Press any key to continue......");
                getch();
                goto khalid;
            }

        }
        else
        {
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);
        }
    }
    fclose(old);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat","record.dat");
    if(test!=1)
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Record not found!!");
transact_invalid:
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==0)
            transact();
        else if (main_exit==1)
            menu();
        else if (main_exit==2)
            main();
        else
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tInvalid!");
            goto transact_invalid;
        }

    }
    else
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            main();
    }

}
void erase(void)
{
    system("cls");
    FILE *old,*newrec;
    int test=0;
    old=fopen("record.dat","r");
    newrec=fopen("new.dat","w");

    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t        REMOVE ACCOUNT             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");


    printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter The Account No: ");
    scanf("%d",&rem.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
    {
        if(add.acc_no!=rem.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year);

        else
        {
            test++;
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t  Record deleted successfully!\n");
        }
    }
    fclose(old);
    fclose(newrec);
    remove("record.dat");
    rename("new.dat","record.dat");
    if(test==0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t    Record not found!!\a\a\a");
erase_invalid:
        printf("\n\n\t\t\t\t\t\t\t\t\t\tEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d",&main_exit);

        if (main_exit==1)
            menu();
        else if (main_exit==2)
            main();
        else if(main_exit==0)
            erase();
        else
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t  Invalid!\a");
            goto erase_invalid;
        }
    }
    else
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter 1 to go to the main menu and any to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            main();
    }

}

void see(void)
{
    system("cls");
    FILE *ptr;
    int test=0,rate;
    int choice;
    float time;
    float intrst;
    ptr=fopen("record.dat","r");

    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t         CHECK DATA                \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t  Do you want to check by?\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t1.Account no\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t2.Name\n");
lameya:
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Enter your choice: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t  Enter the account number: ");
        scanf("%d",&check.acc_no);

        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
        {
            if(add.acc_no==check.acc_no)
            {
                system("cls");
                test=1;

                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t         CHECK DATA                \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t  Account NO.      : %d\n",add.acc_no);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Name             : %s \n",add.name);
                printf("\t\t\t\t\t\t\t\t\t\t\t  DOB              : %d/%d/%d \n",add.dob.month,add.dob.day,add.dob.year);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Age              : %d \n",add.age);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Address          : %s \n",add.address);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Citizenship No   : %s \n",add.citizenship);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Phone number     : %.0lf \n",add.phone);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Type Of Account  : %s \n",add.acc_type);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Amount deposited : $ %.2f \n",add.amt);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Date Of Deposit  : %d/%d/%d\n\n",add.deposit.month,add.deposit.day,add.deposit.year);

                if(strcmpi(add.acc_type,"fixed1")==0)
                {
                    time=1.0;
                    rate=9;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                {
                    time=2.0;
                    rate=11;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                {
                    time=3.0;
                    rate=13;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                }
                else if(strcmpi(add.acc_type,"saving")==0)
                {
                    time=(1.0/12.0);
                    rate=8;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                }
                else if(strcmpi(add.acc_type,"current")==0)
                {

                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get no interest\a\a");

                }

            }
        }
    }
    else if (choice==2)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t  Enter the name: ");
        scanf("%s",&check.name);
        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year)!=EOF)
        {
            if(strcmpi(add.name,check.name)==0)
            {
                system("cls");
                test=1;
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\t         CHECK DATA                \xB2\xB2\xB2\xB2\xB2\xB2\xB2\t\n");
                printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
                printf("\n\n\t\t\t\t\t\t\t\t\t\t\t  Account NO.      : %d\n",add.acc_no);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Name             : %s \n",add.name);
                printf("\t\t\t\t\t\t\t\t\t\t\t  DOB              : %d/%d/%d \n",add.dob.month,add.dob.day,add.dob.year);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Age              : %d \n",add.age);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Address          : %s \n",add.address);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Citizenship No   : %s \n",add.citizenship);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Phone number     : %.0lf \n",add.phone);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Type Of Account  : %s \n",add.acc_type);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Amount deposited : $ %.2f \n",add.amt);
                printf("\t\t\t\t\t\t\t\t\t\t\t  Date Of Deposit  : %d/%d/%d\n\n",add.deposit.month,add.deposit.day,add.deposit.year);

                if(strcmpi(add.acc_type,"fixed1")==0)
                {
                    time=1.0;
                    rate=9;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                {
                    time=2.0;
                    rate=11;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                {
                    time=3.0;
                    rate=13;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                }
                else if(strcmpi(add.acc_type,"saving")==0)
                {
                    time=(1.0/12.0);
                    rate=8;
                    intrst=interest(time,add.amt,rate);
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                }
                else if(strcmpi(add.acc_type,"current")==0)
                {

                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  You will get no interest\a\a");

                }

            }
        }
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t  Wrong Entry, Please Enter Correct Number\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t    Press any key to continue......");
        goto lameya;
    }


    fclose(ptr);
    if(test!=1)
    {

        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t    Record not found!!\a\a\a");
see_invalid:
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d",&main_exit);
        if (main_exit==1)
        {
            system("cls");
            menu();
        }

        else if (main_exit==2)
        {
            system("cls");
            main();
        }

        else if(main_exit==0)
        {
            system("cls");
            see();
        }

        else
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tInvalid!\a");
            goto see_invalid;
        }
    }
    else
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
    }
    if (main_exit==1)
    {
        system("cls");
        menu();
    }

    else
    {

        system("cls");
        main();
    }

}


void close(void)
{
    system("CLS");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t         \xB2\xB2\xB2\xB2\xB2\xB2\xB2 COPYRIGHT KHALID SIFULLAH \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    getch();
}


void menu(void)
{
    int choice;
    system("cls");
    system("color 9");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2            WELCOME TO THE MAIN MENU         \xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t   1.Create new account\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t   2.Update information of existing account\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t   3.For transactions\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t   4.Check the details of existing account\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t   5.Removing existing account\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t   6.View customer's list\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t   7.Log Out\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Enter Your Choice:");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
        new_acc();
        break;
    case 2:
        edit();
        break;
    case 3:
        transact();
        break;
    case 4:
        see();
        break;
    case 5:
        erase();
        break;
    case 6:
        view_list();
        break;
    case 7:
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t  Logging Out");
        for(i=0; i<=7; i++)
        {
            fordelay(100000000);
            printf(".");
        }
        main();
        break;

    }



}
 main()
{

   int n;

    system("cls");
    system("color 9");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t1. SIGN IN                   \n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t2. SIGN UP                  \n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t3. EXIT                  \n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        logins();
        break;
    }
    case 2:
    {
        registe();
        break;
    }
    case 3:
    {
        close();
        break;
    }
    default:
    {
        printf("\n\t\t\t\t\t\t\t\t\t\t\t  Wrong Entry, Please Enter Correct Number\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t    Press any key to continue......");
        getch();
        main();


    }
    }
}
