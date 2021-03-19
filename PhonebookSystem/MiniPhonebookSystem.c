#include<stdio.h>

void MainMenu()
{
    printf("\n\n\n******||Main Menu||****** \n 1.)Add new Contact \n 2.)View contact list \n 3. Modify Contact \n 4.)Search contact \n 5.)delete contact");
} 

void AddNewContact()
{
    char Name[50],Gender[50],FName[50],Email[100],Address[200];
    long CN,CZN;
    printf("\n--******|Add New Contact|******--\n");
    printf("Enter the name of the contact : ");
    scanf("%s",&Name);
    printf("\nEnter the Contact number of the contact : ");
    scanf("%d",&CN);
    printf("\nEnter the Father's Name of the contact : ");
    scanf("%s",FName);
    printf("\nEnter the Gender of the contact : ");
    scanf("%s",&Gender);
    printf("\nEnter the Citizenship Number of the contact : ");
    scanf("%d",&CZN);
    printf("\nEnter the Email of the contact : ");
    scanf("%s",&Email);
    printf("\nEnter the Address of the contact : ");
    scanf("%s",&Address);
    printf("You had Successfully added %s in your contact list.",Name);
}
void ViewContactList()
{   int b;
    printf("\n******|View Contact List|******\n");
    printf("1.Abhishek\n\t9658742569\n");
    printf("2.Amarjeet\n\t9585478563\n");
    printf("3.Indresh\n\t9594236541\n");
    printf("4.Sakshi\n\t8754632541\n");
    printf("5.Shivam\n\t9785654123\n");
    printf("6.Shafi\n\t9465321452\n");
    printf("7.Yusuf\n\t9745632541\n");
    printf("Press 1 and enter button to exit and 0 and enter button for Main Menu :");
    scanf("%d",&b);
    switch (b)
    {
    case 1:
         printf("Thank you for using Phonebook system")
;        break;
    case 0:
        MainMenu();
        break;
    default:
        printf("You entered a wrong input !");
        break;
    } 
}
void ModifyContact()
{
    printf("\n******Modify Contact******\n");
    char Name[50],Gender[50],FName[50],Email[100],Address[200];
    long CN,CZN;
    int b;
    printf("Enter the name of the contact you want to modify : ");
    scanf("%s",&Name);
    printf("\nEnter the new Contact number of the contact : ");
    scanf("%d",&CN);
    printf("\nEnter the Father's Name of the contact : ");
    scanf("%s",FName);
    printf("\nEnter the Gender of the contact : ");
    scanf("%s",&Gender);
    printf("\nEnter the Citizenship Number of the contact : ");
    scanf("%d",&CZN);
    printf("\nEnter the Email of the contact : ");
    scanf("%s",&Email);
    printf("\nEnter the Address of the contact : ");
    scanf("%s",&Address);
    printf("You had Successfully Modified cntact number of %s in your contact list.",Name);
    scanf("%d",&b);
    switch (b)
    {
    case 1:
         printf("Thank you for using Phonebook system")
;        break;
    case 0:
        MainMenu();
        break;
    default:
        printf("You entered a wrong input !");
        break;
    } 
}
void SearchContact()
{   int a;
    char Name[50];
    long CN;
    printf("\n******Search Contact******\n");
    printf("Search by 1.Name or 2.Number :");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Enter the name you want to search :");
        scanf("%s",&Name);
        break;
    case 2:
        printf("Enter the number you want to search :");
        scanf("%d",&CN);
    
    default:
        printf("You entered wrong input !");
        break;
    }
    /*if (Name=='Amarjeet')
    {
        printf("This persons details are :");
    }
    */
}
void DeleteContact()
{
    printf("\n****Delete Contact****\n");
    int a,b;
    char Name[50];
    long CN;
    printf("Delete by 1.Name or 2.Number :");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Enter the name you want to delete :");
        scanf("%s",&Name);
        break;
    case 2:
        printf("Enter the number you want to delete :");
        scanf("%d",&CN);
    
    default:
        printf("You entered wrong input !");
        break;
    }
    printf("You had successfully deleted the contact !");
    printf("Press 1 and enter button to exit and 0 and enter button for Main Menu :");
    scanf("%d",&b);
    switch (b)
    {
    case 1:
         printf("Thank you for using Phonebook system")
;        break;
    case 2:
        MainMenu();
    default:
        printf("You entered a wrong input !");
        break;
    }
}

int main(){
    int a;
    printf("\t\t\t---*****Welcome to Phonebook management System*****---\t\t");
    MainMenu();
    printf("\nSelect one of the option from 1 to 5 :");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        AddNewContact();
        break;
    case 2:
        ViewContactList();
        break;
    case 3:
         ModifyContact();
         break;
    case 4:
        SearchContact();
        break;
    case 5:
        DeleteContact();
        break;
    default: printf("You entered wrong input ! Please input options from 1 to 5 ");
        break;
    }
    return 0;
}