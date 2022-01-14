#include "header.h"
using namespace std;
class Customer
{
private:
public:
    void book_new_tick();
    void viewBookings();
    void cancelTicket();
};
class Ticket
{
private:
    char name[50];
    Admin a;

public:
    void generateTicket(char *, Admin);
    void displayTicket();

    char *getName()
    {
        return name;
    }
};

// GLOBAL FUNCTION
void mainMenu();
void userMenu();
void adminMenu();
void welcomeScreen();
// ADMIN LOGIN FUNCTION
void adminLogin()
{
    string admin_user_name, admin_password;

    system("cls");

    cout << "\n\n\n\n";
    cout << "\t\t ================================================\n";
    cout << "\t\t #################::ADMIN LOGIN::################\n";
    cout << "\t\t ================================================\n\n\n";

    cout << "\n\t\tEnter AdminID:-> ";
    cin >> admin_user_name;
    cout << "\n\t\tEnter Password:-> ";
    cin >> admin_password;

    if (admin_user_name == "admin" && admin_password == "admin123")
    {
        adminMenu();
    }
    else
    {
        cout << "\n\t\tUsername or Password is wrong...!!! ";
        system("pause");
        adminLogin();
    }
}

//  WELCOME SCREEN FUNCTION
void welcomeScreen()
{
    system("cls");

    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t ================================================\n";
    cout << "\t\t ||                  WELCOME TO                ||\n";
    cout << "\t\t ||                                            ||\n";
    cout << "\t\t ||            BUS RESERVATION SYSTEM          ||\n";
    cout << "\t\t ||                                            ||\n";
    cout << "\t\t ||                    PROJECT                 ||\n";
    cout << "\t\t ================================================\n\n\n";

    cout << "\t-------------------------------------------------\n";
    cout << "\t Developed By:-    Hammad Shabir (CodeWithMaddy) \t\n";
    cout << "\t-------------------------------------------------\n\n";

    system("pause");
    mainMenu();
}

// MAIN MENU FUNCTION
void mainMenu()
{
    int choice;

    while (1)
    {
        system("cls");

        // MENU ITEMS
        cout << "\n\n\n\n";
        cout << "\t\t ================================================\n";
        cout << "\t\t #################::MAIN MENU::##################\n";
        cout << "\t\t ================================================\n\n\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t1. Customer Portal \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t2. Admin Portal \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t3. EXIT |\n";
        cout << "\t\t-------------------------------------------------\n\n";

        cout << "\n\t\tEnter your choice:-> ";

        cin >> choice;

        switch (choice)

        {

        case 1:
            userMenu();
            break;

        case 2:
            adminLogin();
            break;

        case 3:
            system("cls");
            cout << "\n##########################################################################\n";
            cout << "\n\n\n\n\t\t  Thanks for using our project...!!! \t\t\t\n";
            cout << "\t\t          Have a nice day...!!!      \t\t\t\n\n";
            cout << "\t\t Subscribe My Youtube Channal Link Below      \t\t\t\n";
            cout << "\t\thttps://www.youtube.com/channel/UCnP51kXl6QDzMGcFVIJsH2A      \t\t\t\n\n";
            cout << "\n##########################################################################\n";
            _sleep(5);
            system("start https://www.youtube.com/channel/UCnP51kXl6QDzMGcFVIJsH2A");

            exit(0);

        default:
            cout << "\n\n\t\t  Choose valid option!!! \t\t\t\n";
            system("pause");
            mainMenu();
        }
    }
}

// USER MENU FUNCTION
void userMenu()
{
    Customer cust1;

    int usr_choice;

    while (1)
    {
        system("cls");

        // MENU ITEMS
        cout << "\n\n\n";
        cout << "\t\t ================================================\n";
        cout << "\t\t #################::USER PORTAL::################\n";
        cout << "\t\t ================================================\n\n\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t1. Book Ticket       \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t2. View Bookings     \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t3. Cancel Ticket     \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t4. BACK              \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";

        cout << "\n\t\tEnter your choice:-> ";

        cin >> usr_choice;

        switch (usr_choice)

        {

        case 1:
            cust1.book_new_tick();
            break;

        case 2:
            cust1.viewBookings();
            system("pause");
            break;

        case 3:
            cust1.cancelTicket();
            system("pause");
            break;

        case 4:
            system("cls");
            mainMenu();
            break;

        default:
            cout << "\n\t  Choose valid option!!! \t\t\t\n";
            system("pause");
            break;
            userMenu();
        }
    }
}

// ADMIN MENU FUNCTION
void adminMenu()
{
    Admin adm1;

    int admn_choice;

    while (1)
    {
        system("cls");

        // MENU ITEMS
        cout << "\n\n\n";
        cout << "\t\t ================================================\n";
        cout << "\t\t ################::ADMIN PORTAL::################\n";
        cout << "\t\t ================================================\n\n\n";

        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t1. Add Bus            \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t2. View Buses         \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t3. View Bookings      \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t4. Cancel Ticket      \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t5. Modify Booking     \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t6. Delete Bus         \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n";
        cout << "\t\t|\t7. BACK               \t\t\t|\n";
        cout << "\t\t-------------------------------------------------\n\n";

        cout << "\n\t\tEnter your choice:-> ";

        cin >> admn_choice;

        switch (admn_choice)

        {

        case 1:
            adm1.addBus();
            system("pause");
            break;

        case 2:
            adm1.viewBus();
            cout << "\n\n";
            system("pause");
            break;

        case 3:
            adm1.viewBookings();
            system("pause");
            break;

        case 4:
            adm1.cancelTickets();
            system("pause");
            break;

        case 5:
            adm1.modifyTickets();
            break;

        case 6:
            adm1.deleteBus();
            break;

        case 7:
            system("cls");
            mainMenu();
            break;

        default:
            cout << "\n\t  Choose valid option!!! \t\t\t\n";
            system("pause");
            adminMenu();
        }
    }
}
void Ticket::generateTicket(char cname[], Admin ab)
{
    strcpy(name, cname);
    a = ab;
}

void Ticket::displayTicket()
{
    cout << "\t\t-------------------------------------------------\n";
    cout << "\t\tName: " << name;
    a.showTicket();
}
// ADD BUS FUNCTION
void Admin::addBus()
{
    fstream buses;

    system("cls");

    cout << "\n\n\n\n";
    cout << "\t\t ================================================\n";
    cout << "\t\t ###################::ADD BUS::##################\n";
    cout << "\t\t ================================================\n\n\n";

    cout << "\n\t\tEnter Bus Number:-> ";
    cin.ignore();
    cin >> busID;
    cout << "\n\t\tEnter Time:-> ";
    cin.ignore();
    cin.getline(Time, 50);
    cout << "\n\t\tDestination:-> ";
    cin.getline(DeptSt, 200);
    cout << "\n\t\tFare:-> ";
    cin >> fare;

    buses.open("buses.dat", ios::out | ios::app | ios::binary);
    buses.write((char *)this, sizeof(*this));
    buses.close();

    cout << "\n\t\tBus Added Successfully...!!!:-> \n";
}

// SHOW ALL BUS INFO FUNCTION
void Admin::showBus()
{

    cout << "\t\t-------------------------------------------------\n";
    cout << "\t\tBus No:-> " << busID;
    cout << "\n\t\tDestination:-> " << DeptSt;
    cout << "\n\t\tTime:-> " << Time;
    cout << "\n\t\tSeats Remaining:-> " << max_seats - booked;
    cout << "\n\t\tFare:-> " << fare;
    cout << "\n\t\t-------------------------------------------------\n";

    cout << "\n\n";
}

// VIEW BUS INFO FUNCTION
void Admin::viewBus()
{

    system("cls");

    fstream buses;

    buses.open("buses.dat", ios::in | ios::app | ios::binary);
    if (!buses)
        cout << "\nFile Not Found...!!!";
    else
    {
        cout << "\n\n";
        cout << "\t                                                     ::BUS DETAILS::                                             \n\n";
        cout << "\t===================================================================================================================\n";
        cout << "\t"
             << "   Bus No." << setw(22) << "Destination" << setw(16) << "Arrival" << setw(20) << "Seats" << setw(16) << "Fare"
             << "\n";
        cout << "\t===================================================================================================================\n";

        buses.read((char *)this, sizeof(*this));

        while (!buses.eof())
        {
            cout << "\n\t    " << busID << setw(20) << DeptSt << setw(16) << Time << setw(22) << max_seats - booked << setw(18) << fare << "\n";
            buses.read((char *)this, sizeof(*this));
        }
        buses.close();
    }
}

// SHOW TICKET INFO FUNCTION
void Admin::showTicket()
{
    // cout<<"\nTicket No:-> " << ticketNo;
    cout << "\n\t\tBus No:-> " << busID;
    cout << "\n\t\tDestination:-> " << DeptSt;
    cout << "\n\t\tTime:-> " << Time;
    cout << "\n\t\tFare:-> " << fare;
    cout << "\n\t\t-------------------------------------------------\n";

    cout << "\n\n";
}

// VIEW BOOKINGS FUNCTION
void Admin::viewBookings()
{
    Ticket t;
    fstream ticket;

    system("cls");

    cout << "\n\n\n\n";
    cout << "\t\t ================================================\n";
    cout << "\t\t ################::YOUR BOOKINGS::###############\n";
    cout << "\t\t ================================================\n\n\n";

    ticket.open("tickets.dat", ios::in | ios::app | ios::binary);
    if (ticket.fail())
    {
        cout << "\n\t\tCan't Open File...!!";
        system("pause");
    }

    else
    {
        ticket.read((char *)&t, sizeof(t));
        while (!ticket.eof())
        {
            t.displayTicket();
            ticket.read((char *)&t, sizeof(t));
        }
    }

    ticket.close();
}

// CANCEL TICKET FUNCTION
void Admin::cancelTickets()
{
    system("cls");

    char cname[50];
    int chk = 0;
    Ticket t;
    fstream buses, ticket;

    cout << "\n\n\n\n\n\n\n";
    cout << "\n\t\tEnter Name:-> ";
    cin.ignore();
    cin.getline(cname, 50);

    ticket.open("tickets.dat", ios::in | ios::out | ios::app | ios::binary);
    buses.open("temp.dat", ios::out | ios::app | ios::binary);

    if (ticket.fail())
    {
        cout << "\n\t\tCan't Open File...!!";
        system("pause");
    }

    else
    {
        ticket.seekg(0, ios::beg);
        while (ticket.read((char *)&t, sizeof(t)))
        {
            if (strcmpi(t.getName(), cname) != 0)
            {
                buses.write((char *)&t, sizeof(t));
            }
            else
            {
                chk = 1;
            }
        }
        if (chk == 0)
        {
            cout << "\n\t\tTicket Not Found...!!";
        }
        else
        {
            cout << "\n\t\tTicket Cancelled...!!";
        }
    }

    ticket.close();
    buses.close();
    remove("tickets.dat");
    rename("temp.dat", "tickets.dat");
}

// MODIFY TICKET FUNCTION
void Admin::modifyTickets()
{
    system("cls");

    char cname[50], name[50];
    int chk = 0;
    Ticket t;
    fstream ticket;

    cout << "\n\n\n\n\n\n\n";
    cout << "\n\t\tEnter Name:-> ";
    cin.ignore();
    cin.getline(cname, 50);

    ticket.open("tickets.dat", ios::in | ios::out | ios::app | ios::binary);
    if (ticket.fail())
    {
        cout << "\n\t\tCan't Open File...!!";
        system("pause");
    }

    else
    {
        while (ticket.read((char *)&t, sizeof(t)))
        {
            if (strcmpi(t.getName(), cname) == 0)
            {
                t.displayTicket();
                ticket.seekg(0, ios::cur);
                cout << "\n\n\t\tEnter New Details \n";
                cout << "\n\t\tEnter Customer Name :-> ";
                cin.getline(name, 50);
                ticket.seekp(ticket.tellg());
                ticket.write((char *)&t, sizeof(t));
                cout << "\n\t\tName Updated Successfully...!!";
                chk = 1;
            }
        }
        if (chk = 0)
        {
            cout << "\n\t\tRecord Not Found...!!";
            system("pause");
        }
    }

    ticket.close();
}

// DELETE BUS FUNCTION
void Admin::deleteBus()
{
    system("cls");

    int bid;
    int chk = 0;
    Ticket t;
    Admin adm;
    fstream buses, ticket;

    cout << "\n\n\n\n\n\n\n";
    cout << "\n\t\tEnter Bus No:-> ";
    cin >> bid;

    buses.open("buses.dat", ios::in | ios::out | ios::app | ios::binary);
    ticket.open("temp.dat", ios::out | ios::app | ios::binary);

    if (buses.fail())
    {
        cout << "\n\\t\tCan't Open File...!!";
        system("pause");
    }

    else
    {
        buses.seekg(0, ios::beg);
        while (buses.read((char *)&adm, sizeof(Admin)))
        {
            if (adm.getBusId() != bid)
            {
                ticket.write((char *)&adm, sizeof(Admin));
            }
            else
            {
                chk = 1;
            }
        }
        if (chk == 0)
        {
            cout << "\n\t\tBus Not Found...!!";
        }
        else
        {
            cout << "\n\t\tBus Deleted...!!";
        }
    }

    buses.close();
    ticket.close();
    remove("buses.dat");
    rename("temp.dat", "buses.dat");
}
// CUSTOMER BOOK TICKET FUNCTION
void Customer::book_new_tick()
{
    system("cls");

    char from[200], name[50];
    int chk = 0;

    Ticket t;
    Admin ad;
    fstream buses, ticket;

    cout << "\n\n\n\n";
    cout << "\t\t ================================================\n";
    cout << "\t\t ###############::TICKET BOOKING::###############\n";
    cout << "\t\t ================================================\n\n\n";

    cout << "\n\t\tEnter Destination:-> ";
    cin.ignore();
    cin.getline(from, 200);

    buses.open("buses.dat", ios::in | ios::out | ios::app | ios::binary);
    if (buses.fail())
    {
        cout << "\n\t\tCan't Open File...!!";
        system("pause");
    }

    else
    {
        while (buses.read((char *)&ad, sizeof(ad)))
        {
            if (strcmpi(ad.getDeptSt(), from) == 0)
            {
                system("cls");
                cout << "\n\n\n\n";
                cout << "\t\t ================================================\n";
                cout << "\t\t ###############::AVAILABLE BUSES::##############\n";
                cout << "\t\t ================================================\n\n\n";
                ad.showBus();
                chk = 1;
                cout << "\n\t\tEnter Customer Name :-> ";
                cin.getline(name, 50);
                ad.book();
                // ad.setTicketNo();
                t.generateTicket(name, ad);
                ticket.open("tickets.dat", ios::out | ios::app | ios::binary);
                ticket.write((char *)&t, sizeof(t));
                ticket.close();

                buses.seekp(buses.tellg(), ios::beg);
                buses.write((char *)&ad, sizeof(ad));

                cout << "\n\t\tTicket Booked Successfully...!!";
                cout << "\n\t\tYour Alloted TicketNo is [" << ad.getTicketNo() << "]";
                cout << "\n\t\tPlease Remember Your TicketNo Carefully...!!";
            }
        }

        if (chk == 0)
            cout << "\n\t\tNo Buses Found...!!";
        system("pause");
    }

    buses.close();
}

// CUSTOMER VIEW BOOKINGS FUNCTION
void Customer::viewBookings()
{
    system("cls");

    char cname[50];
    int chk = 0;
    Ticket t;
    fstream ticket;

    cout << "\n\n\n\n\n\n\n";
    cout << "\n\t\tEnter Name:-> ";
    cin.ignore();
    cin.getline(cname, 50);

    system("cls");

    cout << "\n\n\n\n";
    cout << "\t\t ================================================\n";
    cout << "\t\t ################::YOUR BOOKINGS::###############\n";
    cout << "\t\t ================================================\n\n\n";

    ticket.open("tickets.dat", ios::in | ios::app | ios::binary);
    if (ticket.fail())
    {
        cout << "\n\t\tCan't Open File...!!";
        system("pause");
    }

    else
    {
        while (ticket.read((char *)&t, sizeof(t)))
        {
            if (strcmpi(t.getName(), cname) == 0)
            {
                t.displayTicket();
                chk = 1;
            }
        }
        if (chk = 0)
        {
            cout << "\n\t\tNo Bookings...!!";
            system("pause");
        }
    }

    ticket.close();
}

void Customer::cancelTicket()
{
    system("cls");

    char cname[50];
    int chk = 0;
    Ticket t;
    Admin ad;
    fstream buses, ticket;

    cout << "\n\n\n\n\n\n\n";
    cout << "\n\t\tEnter Name:-> ";
    cin.ignore();
    cin.getline(cname, 50);

    ticket.open("tickets.dat", ios::in | ios::out | ios::app | ios::binary);
    buses.open("temp.dat", ios::out | ios::app | ios::binary);

    if (ticket.fail())
    {
        cout << "\n\t\tCan't Open File...!!";
        system("pause");
    }

    else
    {
        ticket.seekg(0, ios::beg);
        while (ticket.read((char *)&t, sizeof(t)))
        {
            if (strcmpi(t.getName(), cname) != 0)
            {
                buses.write((char *)&t, sizeof(t));
            }
            else
            {
                chk = 1;
            }
        }
        if (chk == 0)
        {
            cout << "\n\t\tTicket Not Found...!!";
        }
        else
        {
            cout << "\n\t\tTicket Cancelled...!!";
        }
    }

    ticket.close();
    buses.close();
    remove("tickets.dat");
    rename("temp.dat", "tickets.dat");
}
// MAIN FUNCTION
int main()
{
    system("cls");

    welcomeScreen();

    return 0;
}
