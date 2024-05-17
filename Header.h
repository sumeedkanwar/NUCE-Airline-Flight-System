#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <cctype>
#include <cstdlib>

using namespace std;

void Logo()
{
    cout << "  _   _          ______ _____ " << endl;
    cout << " | \\ | |   /\\   |  ____/ ____|" << endl;
    cout << " |  \\| |  /  \\  | |__ | (___  " << endl;
    cout << " | . ` | / /\\ \\ |  __| \\___ \\ " << endl;
    cout << " | |\\  |/ ____ \\| |    ____) |" << endl;
    cout << " |_| \\_/_/    \\_\\_|   |_____/ " << endl;
    cout << "----------------------------------" << endl;
    cout << "--- NUCE Airline Flight System ---" << endl;
    cout << "                              " << endl;
}

class Ticket
{
//private data members
private:
    int price;
    string type;
    char seat;
    double id;
//public data members
public:
    //Default Constructor
    Ticket()
    {
        id = 0;
        price = 0;
        type = "";
        seat = 'A';
    }
    //Parameterized Constructor
    Ticket(string type, double id,char seat, int price = 0)
    {
        this->type = type;
        this->id = id;
        this->seat = seat;
        this->price = price;
    }
    //Copy Constructor
    Ticket(Ticket & T)
    {
        this->type = T.type;
        this->id = T.id;
        this->seat = T.seat;
        this->price = T.price;
    }
    //Getters
    int GetPrice() const
    {
        return price;
    }
    string GetType() const
    {
        return type;
    }
    double GetId() const
    {
        return id;
    }
    char GetSeat() const
    {
        return seat;
    }
    //Setters
    void SetPrice(int hrs)
    {
        if (GetType() == "Local")
        {
            price = hrs * 10000;
        }
        else
        {
            price = hrs * 20000;
        }
    }
    void SetId(double id)
    {
        this->id = id;
    }
    void SetType(string type)
    {
        this->type = type;
    }
    void SetSeat(char seat)
    {
        this->seat = seat;
    }
};

class Person
{
//private data members
private:
    string name;
    string password;
//public data members
public:
    //Default Constructor
    Person()
    {
        name = "";
        password = "";
    }
    //Parameterized Constructor
    Person(string name, string password)
    {
        this->name = name;
        this->password = password;
    }
    //Copy Constructor
    Person(Person & P)
    {
        this->name = P.name;
        this->password = P.password;
    }
    //Getters
    string GetName() const
    {
        return name;
    }
    string GetPassword() const
    {
        return password;
    }
    //Setters
    void SetName(string name)
    {
        this->name = name;
    }
    void SetPassword(string password)
    {
        this->password = password;
    }
    //Member Functions
    virtual void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
    }
};

class Admin : public Person
{
//public data members
public:
    //Default Constructor
    Admin()
    {
        SetName("");
        SetPassword("");
    }
    //Parameterized Constructor
    Admin(string name, string password)
    {
        SetName(name);
        SetPassword(password);
    }
    //Copy Constructor
    Admin(Admin & A)
    {
        SetName(A.GetName());
        SetPassword(A.GetPassword());
    }
    //Member Functions
    void Display()
    {
        cout << "Admin" << endl;
        cout << "Name: " << GetName() << endl;
        cout << "Password: " << GetPassword() << endl;
    }
};

class Passenger : public Person
{
//private data members
private:
    string CNIC;
    bool legal;
    bool passport;
    bool visa;
    string account;
    double balance;
    bool verified;
    double *id;
    int totaltickets;
//public data members
public:
    //Default Constructor
    Passenger()
    {
        SetName("");
        SetPassword("");
        CNIC = "";
        legal = false;
        passport = false;
        visa = false;
        account = "";
        balance = 0;
        verified = false;
        totaltickets = 0;
        id = new double;
    }
    //Parameterized Constructor
    Passenger(string name, string password, string CNIC, bool legal, bool passport, bool visa, string account, double balance, bool verified, int totaltickets, double *id)
    {
        SetName(name);
        SetPassword(password);
        this->CNIC = CNIC;
        this->legal = legal;
        this->passport = passport;
        this->visa = visa;
        this->account = account;
        this->balance = balance;
        this->verified = verified;
        this->totaltickets = totaltickets;
        this->id = id;
    }
    //Copy Constructor
    Passenger(Passenger & P)
    {
        SetName(P.GetName());
        SetPassword(P.GetPassword());
        this->CNIC = P.CNIC;
        this->legal = P.legal;
        this->passport = P.passport;
        this->visa = P.visa;
        this->account = P.account;
        this->balance = P.balance;
        this->verified = P.verified;
        this->totaltickets = P.totaltickets;
        this->id = P.id;
    }
    //Getters
    bool GetLegal() const
    {
        return legal;
    }
    string GetCNIC() const
    {
        return CNIC;
    }
    bool GetPassport() const
    {
        return passport;
    }
    bool GetVisa() const
    {
        return visa;
    }
    string GetAccount() const
    {
        return account;
    }
    double GetBalance() const
    {
        return balance;
    }
    bool GetVerified() const
    {
        return verified;
    }
    int GetTotalTickets() const
    {
        return totaltickets;
    }
    double GetId(int index) const
    {
        return id[index];
    }
    //Setters
    void SetCNIC(string CNIC)
    {
        this->CNIC = CNIC;
    }
    void SetLegal(bool legal)
    {
        this->legal = legal;
    }
    void SetPassport(bool passport)
    {
        this->passport = passport;
    }
    void SetVisa(bool visa)
    {
        this->visa = visa;
    }
    void SetAccount(string account)
    {
        this->account = account;
    }
    void SetBalance(double balance)
    {
        this->balance = balance;
    }
    void SetVerified(bool verified)
    {
        this->verified = verified;
    }
    void SetTotalTickets(int totaltickets)
    {
        this->totaltickets = totaltickets;
    }
    void SetId(double *id)
    {
        this->id = id;
    }

    //Member Functions
    void Display()
    {
        cout << "Passenger" << endl;
        cout << "Name: " << GetName() << endl;
        cout << "Password: " << GetPassword() << endl;
        cout << "CNIC: " << CNIC << endl;
        cout << "Legal: " << legal << endl;
        cout << "Passport: " << passport << endl;
        cout << "Visa: " << visa << endl;
        cout << "Account Number: " << account << endl;
        cout << "Balance: " << balance << endl;
        cout << "Verified: " << verified << endl;
        cout << "Total Tickets: " << totaltickets << endl;
        if (totaltickets > 0)
        {
            for(int i = 0; i < totaltickets; i++)
            {
                cout << "Ticket: " << i << endl;
                cout << "TIcket Id: " << id[i] << endl;
            }
        }
    }

    bool BookFlight(Ticket ticket)
    {
        int price;
        if (ticket.GetType() == "Local")
        {
            price = (ticket.GetPrice() * 1.05);
        }
        else if (ticket.GetType() == "International")
        {
            cout << "Do you have a visa? (Y/N)" << endl;
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y')
            {
                visa = true;
                price = (ticket.GetPrice() * 1.1);
            }
            else
            {
                visa = false;
                cout << "You need a visa to book an international flight" << endl;
                return false;
            }
        }
        if (balance >= price && visa == true)
        {
            double *temp = new double [totaltickets];
            for (int i = 0; i < totaltickets; i++)
            {
                temp[i] = id[i];
            }
            delete [] id;
            id = new double [totaltickets + 1];
            for (int j = 0; j < totaltickets; j++)
            {
                id[j] = temp[j];
            }
            id[totaltickets] = ticket.GetId();
            totaltickets++;
            return true;
        }
        else
        {
            cout << "Not enough balance" << endl;
            return false;
        }
    }

    void CancelTicket(Ticket ticket)
    {
        if (totaltickets <= 0)
        {
            cout << "No tickets booked" << endl;
            return;
        }
        else
        {
            double *temp = new double [totaltickets - 1];
            for (int i = 0; i < totaltickets; i++)
            {
                if (id[i] != ticket.GetId())
                {
                    temp[i] = id[i];
                }
            }
            delete [] id;
            id = new double [totaltickets - 1];
            for (int j = 0; j < totaltickets; j++)
            {
                id[j] = temp[j];
            }
            totaltickets--;
            cout << "Ticket canceled" << endl;
        }
    }

    void DisplayBookedFlights()
    {
        if (totaltickets > 0)
        {
            for(int i = 0; i < totaltickets; i++)
            {
                cout << "Ticket: " << i << endl;
                cout << "TIcket Id: " << id[i] << endl;
            }
        }
        else
        {
            cout << "No Ticket Booked" << endl; 
        }
    }

};

void VerifyFinancialDetail(Passenger P)
{
    if (P.GetVerified() == true)
    {
        cout << "Financial details already verified" << endl;
        return;
    }
    else
    {
        string legal = P.GetLegal()? "Yes" : "No";
        cout << "Passenger" << P.GetName() << endl;
        cout << "CNIC: " << P.GetCNIC() << endl;
        cout << "Legal: " << legal << endl;
        cout << "Account Number" << P.GetAccount() << endl;
        cout << "Verify financial details? (Y/N)" << endl;
        char choice;
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            cout << "Financial details verified" << endl;
            P.SetBalance(rand());
            P.SetVerified(true);
        }
        else
        {
            cout << "Financial details not verified" << endl;
        }
    }
}

class Flight
{
//private data members
private:
    string id;
    string type;
    int capacity;
    string from;
    string to;
    string arrival;
    string departure;
    int duration;
    int *idn;
    char *seat;
    int availableEconomySeats;
    int availableBusinessSeats;
//public data members
public:
    //Default Constructor
    Flight()
    {
        id = "";
        type = "";
        capacity = 60;
        from = "";
        to = "";
        arrival = "";
        departure = "";
        duration = 0;
        availableEconomySeats = 50;
        availableBusinessSeats = 10;
        idn = new int[capacity - availableEconomySeats - availableBusinessSeats];
        seat = new char[capacity - availableEconomySeats - availableBusinessSeats];
    }
    //Parameterized Constructor
    Flight(string id, string type, int capacity, string from, string to, string arrival, string departure, int duration, int *idn, char *seat, int availableEconomySeats, int availableBusinessSeats)
    {
        this->id = id;
        this->type = type;
        this->capacity = capacity;
        this->from = from;
        this->to = to;
        this->arrival = arrival;
        this->departure = departure;
        this->duration = duration;
        this->idn = idn;
        this->seat = seat;
        this->availableEconomySeats = availableEconomySeats;
        this->availableBusinessSeats = availableBusinessSeats;
    }
    //Copy Constructor
    Flight(Flight & F)
    {
        this->id = F.id;
        this->type = F.type;
        this->capacity = F.capacity;
        this->from = F.from;
        this->to = F.to;
        this->arrival = F.arrival;
        this->departure = F.departure;
        this->duration = F.duration;
        this->idn = F.idn;
        this->seat = F.seat;
        this->availableEconomySeats = F.availableEconomySeats;
        this->availableBusinessSeats = F.availableBusinessSeats;
    }
    //Getters
    string GetId() const
    {
        return id;
    }
    string GetType() const
    {
        return type;
    }
    int GetCapacity() const
    {
        return capacity;
    }
    string GetFrom() const
    {
        return from;
    }
    string GetTo() const
    {
        return to;
    }
    string GetArrival() const
    {
        return arrival;
    }
    string GetDeparture() const
    {
        return departure;
    }
    int GetDuration() const
    {
        return duration;
    }
    int GetAvailableEconomySeats() const
    {
        return availableEconomySeats;
    }
    int GetAvailableBusinessSeats() const
    {
        return availableBusinessSeats;
    }
    int GetIdn(int index) const
    {
        return idn[index];
    }
    char GetSeat(int index) const
    {
        return seat[index];
    }
    //Setters
    void SetId(string id)
    {
        this->id = id;
    }
    void SetType(string type)
    {
        this->type = type;
    }
    void SetCapacity(int capacity)
    {
        this->capacity = capacity;
    }
    void SetFrom(string from)
    {
        this->from = from;
    }
    void SetTo(string to)
    {
        this->to = to;
    }
    void SetArrival(string arrival)
    {
        this->arrival = arrival;
    }
    void SetDeparture(string departure)
    {
        this->departure = departure;
    }
    void SetDuration(int duration)
    {
        this->duration = duration;
    }
    void SetAvailableEconomySeats(int availableEconomySeats)
    {
        this->availableEconomySeats = availableEconomySeats;
    }
    void SetIdn(int *idn)
    {
        this->idn = idn;
    }
    void SetAvailableBusinessSeats(int availableBusinessSeats)
    {
        this->availableBusinessSeats = availableBusinessSeats;
    }
    void SetSeat(char *seat)
    {
        this->seat = seat;
    }
    //Member Functions
    void AddTicket(Ticket ticket)
    {
        if (ticket.GetSeat() == 'E')
        {
            if (availableEconomySeats <= 0)
            {
                cout << "Flight is full" << endl;
                return;
            }
            else
            {
                int *temp = new int[capacity - (availableEconomySeats + availableBusinessSeats) + 1];
                char *temp2 = new char[capacity - (availableEconomySeats + availableBusinessSeats) + 1];
                for (int i = 0; i < (capacity - (availableEconomySeats + availableBusinessSeats)); i++)
                {
                    temp[i] = idn[i];
                    temp2[i] = seat[i];
                }
                temp[capacity - (availableEconomySeats + availableBusinessSeats)] = ticket.GetId();
                temp2[capacity - (availableEconomySeats + availableBusinessSeats)] = ticket.GetSeat();
                idn = temp;
                seat = temp2;
                this->availableEconomySeats--;
            }
        }
        else if (ticket.GetSeat() == 'B')
        {
            if (availableBusinessSeats <= 0)
            {
                cout << "Flight is full" << endl;
                return;
            }
            else
            {
                int *temp = new int[capacity - (availableEconomySeats + availableBusinessSeats) + 1];
                char *temp2 = new char[capacity - (availableEconomySeats + availableBusinessSeats) + 1];
                for (int i = 0; i < (capacity - (availableEconomySeats + availableBusinessSeats)); i++)
                {
                    temp[i] = idn[i];
                    temp2[i] = seat[i];
                }
                temp[capacity - (availableEconomySeats + availableBusinessSeats)] = ticket.GetId();
                temp2[capacity - (availableEconomySeats + availableBusinessSeats)] = ticket.GetSeat();
                idn = temp;
                seat = temp2;
                this->availableBusinessSeats--;
            }
        }
    }

    void CancelTicket(int index)
    {
        if (availableBusinessSeats <= 0 && availableEconomySeats <= 0)
        {
            cout << "Flight is empty" << endl;
            return;
        }
        else
        {
            int *temp = new int[capacity - availableEconomySeats - availableBusinessSeats - 1];
            char *temp2 = new char[capacity - availableEconomySeats - availableBusinessSeats - 1];
            for (int i = 0; i < (capacity - availableEconomySeats - availableBusinessSeats); i++)
            {
                if (i != index)
                {
                    temp[i] = idn[i];
                    temp2[i] = seat[i];
                }
            }
            idn = temp;
            seat = temp2;
            if (seat[index] == 'E')
            {
                this->availableEconomySeats++;
            }
            else if (seat[index] == 'B')
            {
                this->availableBusinessSeats++;
            }
        }
    }

    Flight AddFlight(string name)
    {
        Flight flight;
        int pick;
        cout << "Enter flight ID: ";
        cin >> flight.id;
        cout << "Enter flight type" << endl;
        cout << "1. Local" << endl;
        cout << "2. International" << endl;
        do
        {
            cin >> pick;
            if (pick == 1)
            {
                flight.type = "Local";
            }
            else if (pick == 2)
            {
                flight.type = "International";
            }
            else
            {
                cout << "Invalid input" << endl;
            }
        } while (pick < 1 || pick > 2);

        cout << "Enter plane capacity: ";
        cin >> flight.capacity;
        flight.from = name;
        cout << "Enter flight to: ";
        cin >> flight.to;
        cout << "Enter arrival time: ";
        cin >> flight.arrival;
        cout << "Enter departure time: ";
        cin >> flight.departure;
        cout << "Enter duration: ";
        cin >> flight.duration;
        return flight;
    }
    
};

class Airport
{
//private data members
private:
    string name;
    string country;
    int totalflights;
    Flight *flights;
//public data members
public:
    //Default Constructor
    Airport()
    {
        name = "";
        country = "";
        totalflights = 0;
        flights = NULL;
    }
    //Parameterized Constructor
    Airport(string name, string location, int totalflights)
    {
        this->name = name;
        this->country = country;
        this->totalflights = totalflights;
        flights = new Flight[totalflights];
    }
    //Copy Constructor
    Airport(Airport & A)
    {
        this->name = A.name;
        this->country = A.country;
        this->totalflights = A.totalflights;
        this->flights = A.flights;
    }
    //Getters
    string GetName() const
    {
        return name;
    }
    string GetCountry() const
    {
        return country;
    }
    int GetTotalFlights() const
    {
        return totalflights;
    }
    Flight GetFlight(int index)
    {
        return flights[index];
    }
    //Setters
    void SetName(string name)
    {
        this->name = name;
    }
    void SetCountry(string country)
    {
        this->country = country;
    }
    void SetTotalFlights(int totalflights)
    {
        this->totalflights = totalflights;
    }
    void SetFlights(Flight *flights)
    {
        this->flights = flights;
    }
    //Member Functions
    void AddFlight(Flight flight)
    {
        if (totalflights >= 5)
        {
            cout << "Airport is full" << endl;
            return;
        }
        else
        {
            Flight *temp = new Flight[totalflights + 1];
            for (int i = 0; i < totalflights; i++)
            {
                temp[i] = flights[i];
            }
            temp[totalflights] = flight;
            totalflights++;
            flights = temp;       
        }
    }

    void RemoveFlight(int index)
    {
        if (totalflights <= 0)
        {
            cout << "Airport is empty" << endl;
            return;
        }
        else
        {
            Flight *temp = new Flight[totalflights - 1];
            for (int i = 0; i < totalflights; i++)
            {
                if (i != index)
                {
                    temp[i] = flights[i];
                }
            }
            totalflights--;
            flights = temp;
            delete [] temp;
        }
    }

    void EditFlight(int index)
    {
        if (totalflights <= 0)
        {
            cout << "Airport is empty" << endl;
            return;
        }
        else
        {
            int pick;
            cout << "Enter flight type" << endl;
            cout << "1. Local" << endl;
            cout << "2. International" << endl;
            do
            {
                cin >> pick;
                if (pick == 1)
                {
                    flights[index].SetType("Local");
                }
                else if (pick == 2)
                {
                    flights[index].SetType("International");
                }
                else
                {
                    cout << "Invalid input" << endl;
                }
            } while (pick < 1 || pick > 2);
            int cap;
            cout << "Enter plane capacity: ";
            cin >> cap;
            flights[index].SetCapacity(cap);
            string to;
            cout << "Enter flight to: ";
            cin >> to;
            flights[index].SetTo(to);
            string arrival;
            cout << "Enter arrival time: ";
            cin >> arrival;
            flights[index].SetArrival(arrival);
            string departure;
            cout << "Enter departure time: ";
            cin >> departure;
            flights[index].SetDeparture(departure);
            int duration;
            cout << "Enter flight duration: ";
            cin >> duration;
            flights[index].SetDuration(duration);
        }
    }

    void UpdateSeating(int index)
            {
                if (totalflights <= 0)
                {
                    cout << "Airport is empty" << endl;
                    return;
                }
                else
                {
                    int seat;
                    cout << "Enter plane seating for economy class: ";
                    cin >> seat;
                    flights[index].SetAvailableEconomySeats(seat);
                    cout << "Enter plane seating for business class: ";
                    cin >> seat;
                    flights[index].SetAvailableBusinessSeats(seat);
                }
            }

    void Display()
    {
        if (totalflights > 0)
        {
            cout << endl;
            cout << "Airport Name: " << name << endl;
            cout << "Airport Country: " << country << endl;
            cout << "Total Flights: " << totalflights << endl;
            for(int i = 0; i < totalflights; i++)
            {
                cout << endl;
                cout << "Flight " << i + 1 << ": " << endl;
                cout << "Flight ID: " << flights[i].GetId() << endl;
                cout << "Flight Available Seats: " << flights[i].GetAvailableEconomySeats() + flights[i].GetAvailableBusinessSeats() << endl;
                cout << "Flight To: " << flights[i].GetTo() << endl;
                cout << "Flight Arrival: " << flights[i].GetArrival() << endl;
                cout << "Flight Departure: " << flights[i].GetDeparture() << endl;
                cout << "Flight Duration: " << flights[i].GetDuration() << endl;
            }
        }
    }
};

void MainMenu()
{
    Logo();
    cout << "Welcome to NUCES Airline Flight System" << endl;
    cout << "1. About Us" << endl;
    cout << "2. Flight Schedule" << endl;
    cout << "3. Login" << endl;
    cout << "4. Sign up" << endl;
    cout << "5. Exit" << endl;
}

void AboutUs()
{
    Logo();
    cout << "About Us" << endl;
    cout << "NUCES Airline Flight System is a flight booking system that allows users to book flights to their desired destination." << endl;
    cout << "It is a simple and easy to use system that allows users to book flights in a few simple steps." << endl;
    cout << "NUCES Airline Flight System is a project by: " << endl;
    cout << "Sumeed Jawad Kanwar" << endl;
    cout << "22i - 2651" << endl;
    cout << "SE - B" << endl;
    cout << "1. Exit" << endl;
}

void AdminMenu()
{
    Logo();
    cout << "1. Add Flight" << endl;
    cout << "2. Cancel Flight" << endl;
    cout << "3. Update Flight" << endl;
    cout << "4. Update Airplane Inquiry" << endl;
    cout << "5. Update Number of Passengers" << endl;
    cout << "6. Update Financial Details" << endl;
    cout << "7. Add Another Admin" << endl;
    cout << "8. Exit" << endl;
}

void PassengerMenu()
{
    Logo();
    cout << "1. Book Ticket" << endl;
    cout << "2. Cancel Ticket" << endl;
    cout << "3. Detail Of Most Visited Country" << endl;
    cout << "4. Display All Tickets" << endl;
    cout << "5. Update Information" << endl;
    cout << "6. Enter Inquiry" << endl;
    cout << "7. Exit" << endl;
}

bool AdminLogin()
{
    bool valid = false;
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("admin.txt", ios::in);
    if (file.is_open())
    {
        cout << "Checking admin credentials..." << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    string line;
    while (getline(file, line))
    {
        if (line == username)
        {
            getline(file, line);
            if (line == password)
            {
                cout << "Login successful!" << endl;
                valid = true;
            }
        }
    }
    file.close();
    return valid;
}

bool PassengerLogin()
{
    bool valid = false;
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("passengers.txt", ios::in);
    if (file.is_open())
    {
        cout << "Checking passenger credentials..." << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    string line;
    while (!file.eof())
    {
        getline(file, line);
        if (line == username)
        {
            getline(file, line);
            if (line == password)
            {
                cout << "Login successful!" << endl;
                valid = true;
                cout << "Welcome " << username << "!" << endl;
            }
        }
    }
    file.close();
    return valid;
}

void LoginMenu()
{
    Logo();
    cout << "Login as: " << endl;
    cout << "1. Admin" << endl;
    cout << "2. Passenger" << endl;
    cout << "3. Exit" << endl;
}

bool AdminSignup()
{
    string username;
    cout << "Enter username: ";
    cin >> username;
    string password, verify;
    bool validPassword = false;

    while (!validPassword)
    {
        // Prompt user to enter password
        cout << "Enter password: ";

        // Hide password as user types
        char c;
        password = "";
        while ((c = getch()) != '\r')
        {
            if (c == 8 && password.length() > 0)
            {
                password.erase(password.length() - 1, 1);
                cout << "\b \b";
            }
            else if (isprint(c))
            {
                password += c;
                cout << "*";
            }
        }

        // Verify password meets requirements
        bool hasSpecialChar = false, hasUppercase = false, hasLowercase = false, hasDigit = false;
        if (password.length() == 8)
        {
            for (char c : password)
            {
                if (!hasSpecialChar && ispunct(c))
                {
                    hasSpecialChar = true;
                }
                else if (!hasUppercase && isupper(c))
                {
                    hasUppercase = true;
                }
                else if (!hasLowercase && islower(c))
                {
                    hasLowercase = true;
                }
                else if (!hasDigit && isdigit(c))
                {
                    hasDigit = true;
                }
            }
        }

        // If password is valid, prompt user to re-enter password
        if (hasSpecialChar && hasUppercase && hasLowercase && hasDigit)
        {
            cout << endl << "Password meets requirements." << endl;
            cout << "Re-enter password to verify: ";

            // Hide password as user types
            verify = "";
            while ((c = getch()) != '\r')
            {
                if (c == 8 && verify.length() > 0)
                {
                    verify.erase(verify.length() - 1, 1);
                    cout << "\b \b";
                }
                else if (isprint(c))
                {
                    verify += c;
                    cout << "*";
                }
            }

            // Verify password matches
            if (verify == password)
            {
                cout << endl << "Password verified." << endl;
                validPassword = true;
            }
            else
            {
                cout << endl << "Passwords do not match. Please try again." << endl;
            }
        }
        else
        {
            cout << endl << "Password does not meet requirements." << endl;
        }
    }

    ofstream file("admin.txt", ios::app);
    if (file.is_open())
    {
        cout << "Signing up admin..." << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    file << username << endl;
    file << password << endl;
    file.close();
    return true;
}

bool PassengerSignup()
{
    string username;
    cout << "Enter username " << endl;
    cin >> username;
    string password, verify;
    bool validPassword = false;
    while (!validPassword)
    {
        // Prompt user to enter password
        cout << "Enter password: ";

        // Hide password as user types
        char c;
        password = "";
        while ((c = getch()) != '\r')
        {
            if (c == 8 && password.length() > 0)
            {
                password.erase(password.length() - 1, 1);
                cout << "\b \b";
            }
            else if (isprint(c))
            {
                password += c;
                cout << "*";
            }
        }

        // Verify password meets requirements
        bool hasSpecialChar = false, hasUppercase = false, hasLowercase = false, hasDigit = false;
        if (password.length() == 8)
        {
            for (char c : password)
            {
                if (!hasSpecialChar && ispunct(c))
                {
                    hasSpecialChar = true;
                }
                else if (!hasUppercase && isupper(c))
                {
                    hasUppercase = true;
                }
                else if (!hasLowercase && islower(c))
                {
                    hasLowercase = true;
                }
                else if (!hasDigit && isdigit(c))
                {
                    hasDigit = true;
                }
            }
        }

        // If password is valid, prompt user to re-enter password
        if (hasSpecialChar && hasUppercase && hasLowercase && hasDigit)
        {
            cout << endl << "Password meets requirements." << endl;
            cout << "Re-enter password to verify: ";

            // Hide password as user types
            verify = "";
            while ((c = getch()) != '\r')
            {
                if (c == 8 && verify.length() > 0)
                {
                    verify.erase(verify.length() - 1, 1);
                    cout << "\b \b";
                }
                else if (isprint(c))
                {
                    verify += c;
                    cout << "*";
                }
            }

            // Verify password matches
            if (verify == password)
            {
                cout << endl << "Password verified." << endl;
                validPassword = true;
            }
            else
            {
                cout << endl << "Passwords do not match. Please try again." << endl;
            }
        }
        else
        {
            cout << endl << "Password does not meet requirements." << endl;
        }
    }

    char choice;
    string CNIC;
    bool validCNIC = false;

    while (!validCNIC)
    {
        cout << "Enter your CNIC" << endl;
        cin >> CNIC;
        if (CNIC.length() == 13)
        {
            validCNIC = true;
            ifstream cnic("passenger.txt", ios::in);
            string line;
            while (getline(cnic, line))
            {
                if (line == CNIC)
                {
                    cout << "CNIC already exists" << endl;
                    validCNIC = false;
                }
            }
        }
        else
        {
            cout << "Invalid CNIC" << endl;
        }
    }
    cout << "Are you 18+? (Y/N)" << endl;
    cin >> choice;
    bool legal;
    if (choice == 'Y' || choice == 'y')
    {
        legal = true;
    }
    else
    {
        legal = false;
    }
    cout << "Do you have a passport? (Y/N)" << endl;
    cin >> choice;
    bool passport;
    if (choice == 'Y' || choice == 'y')
    {
        passport = true;
    }
    else
    {
        passport = false;
    }
    cout << "Enter account number: " << endl;
    string account;
    cin >> account;

    ofstream file("passenger.txt", ios::app);
    if (file.is_open())
    {
        cout << "Signing up passenger..." << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    file << username << endl;
    file << password << endl;
    file << CNIC << endl;
    file << legal << endl;
    file << passport << endl;
    file << account << endl;
    file.close();
    return true;
}

void SignupMenu()
{
    Logo();
    cout << "Sign up as: " << endl;
    cout << "1. Passenger" << endl;
    cout << "2. Exit" << endl;
}

void UpdateInformation()
{
    cout << "1. Update Password" << endl;
    cout << "2. Update CNIC" << endl;
    cout << "3. Update Account" << endl;
    cout << "4. Exit" << endl;
}