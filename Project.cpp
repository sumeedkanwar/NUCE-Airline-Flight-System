#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <cctype>
#include <windows.h>
#include "Header.h"

using namespace std;

int main()
{
    //Declaration of variables
    static int idnum = 10000;
    string *Inquiry = new string;
    int totalinquiries = 0;
    //Passengers
    Passenger* P = nullptr;
    int totalpassengers = 0;
    //Admins
    Admin* A = nullptr;
    int totaladmins = 0;
    //Airports
    Airport *airport;
    int totalairports = 35;
    airport = new Airport[35];
    {
        airport[0].SetName("Lahore South Internation Airport");
        airport[0].SetCountry("Pakistan");
        airport[1].SetName("Lahore North International Airport");
        airport[1].SetCountry("Pakistan");
        airport[2].SetName("Islamabad South International Airport");
        airport[2].SetCountry("Pakistan");
        airport[3].SetName("Islamabad North International Airport");
        airport[3].SetCountry("Pakistan");
        airport[4].SetName("Karachi South International Airport");
        airport[4].SetCountry("Pakistan");
        airport[5].SetName("Karachi North International Airport");
        airport[5].SetCountry("Pakistan");
        airport[6].SetName("Peshawar South International Airport");
        airport[6].SetCountry("Pakistan");
        airport[7].SetName("Peshawar North International Airport");
        airport[7].SetCountry("Pakistan");
        airport[8].SetName("Quetta South International Airport");
        airport[8].SetCountry("Pakistan");
        airport[9].SetName("Quetta North International Airport");
        airport[9].SetCountry("Pakistan");
        airport[10].SetName("Kabul International Airport");
        airport[10].SetCountry("Afghanistan");
        airport[11].SetName("Singapore Changi Airport");
        airport[11].SetCountry("Singapore");
        airport[12].SetName("Hong Kong International Airport");
        airport[12].SetCountry("Hong Kong");
        airport[13].SetName("Beijing Capital International Airport");
        airport[13].SetCountry("China");
        airport[14].SetName("Tokyo Haneda Airport");
        airport[14].SetCountry("Japan");
        airport[15].SetName("Incheon International Airport");
        airport[15].SetCountry("South Korea");
        airport[16].SetName("Shanghai Pudong International Airport");
        airport[16].SetCountry("China");
        airport[17].SetName("Mumbai Chhatrapati Shivaji Airport");
        airport[17].SetCountry("India");
        airport[18].SetName("Bangkok Suvarnabhumi Airport");
        airport[18].SetCountry("Thailand");
        airport[19].SetName("Taiwan Taoyuan International Airport");
        airport[19].SetCountry("Taiwan");
        airport[20].SetName("Dubai International Airport");
        airport[20].SetCountry("United Arab Emirates");
        airport[21].SetName("Istanbul Ataturk Airport");
        airport[21].SetCountry("Turkey");
        airport[22].SetName("Amsterdam Schiphol Airport");
        airport[22].SetCountry("Netherlands");
        airport[23].SetName("Frankfurt Airport");
        airport[23].SetCountry("Germany");
        airport[24].SetName("London Heathrow Airport");
        airport[24].SetCountry("United Kingdom");
        airport[25].SetName("Paris Charles de Gaulle Airport");
        airport[25].SetCountry("France");
        airport[26].SetName("Madrid Barajas Airport");
        airport[26].SetCountry("Spain");
        airport[27].SetName("Rome Fiumicino Airport");
        airport[27].SetCountry("Italy");
        airport[28].SetName("Moscow Sheremetyevo Airport");
        airport[28].SetCountry("Russia");
        airport[29].SetName("New York John F. Kennedy Airport");
        airport[29].SetCountry("United States");
        airport[30].SetName("Los Angeles International Airport");
        airport[30].SetCountry("United States");
        airport[31].SetName("Toronto Pearson Airport");
        airport[31].SetCountry("Canada");
        airport[32].SetName("Mexico City International Airport");
        airport[32].SetCountry("Mexico");
        airport[33].SetName("Rio de Janeiro Galeao Airport");
        airport[33].SetCountry("Brazil");
        airport[34].SetName("Buenos Aires Ezeiza Airport");
        airport[34].SetCountry("Argentina");
    }
    //Flights
    Flight *flight;
    int totalflights = 50;
    flight = new Flight[50];
    {       
        flight[0].SetId("PK-001");
        flight[0].SetType("Local");
        flight[0].SetFrom("Lahore South Internation Airport");
        flight[0].SetTo("Karachi North International Airport");
        flight[0].SetArrival("10:00 AM");
        flight[0].SetDeparture("12:00 PM");
        flight[0].SetDuration(2);

        flight[1].SetId("PK-002");
        flight[1].SetType("Local");
        flight[1].SetFrom("Lahore South Internation Airport");
        flight[1].SetTo("Karachi South International Airport");
        flight[1].SetArrival("11:00 AM");
        flight[1].SetDeparture("10:00 PM");
        flight[1].SetDuration(2);

        flight[2].SetId("PK-003");
        flight[2].SetType("Local");
        flight[2].SetFrom("Lahore South Internation Airport");
        flight[2].SetTo("Islamabad North International Airport");
        flight[2].SetArrival("12:00 PM");
        flight[2].SetDeparture("02:00 PM");
        flight[2].SetDuration(1);

        flight[3].SetId("PK-004");
        flight[3].SetType("Local");
        flight[3].SetFrom("Lahore South International Airport");
        flight[3].SetTo("Peshawar North International Airport");
        flight[3].SetArrival("01:00 PM");
        flight[3].SetDeparture("03:00 PM");
        flight[3].SetDuration(1);

        flight[4].SetId("PK-005");
        flight[4].SetType("Local");
        flight[4].SetFrom("Lahore South International Airport");
        flight[4].SetTo("Quetta North International Airport");
        flight[4].SetArrival("02:00 PM");
        flight[4].SetDeparture("04:00 PM");
        flight[4].SetDuration(1);

        flight[5].SetId("PK-006");
        flight[5].SetType("Local");
        flight[5].SetFrom("Lahore North International Airport");
        flight[5].SetTo("Karachi South International Airport");
        flight[5].SetArrival("03:00 PM");
        flight[5].SetDeparture("05:00 PM");
        flight[5].SetDuration(2);

        flight[6].SetId("PK-007");
        flight[6].SetType("Local");
        flight[6].SetFrom("Lahore North International Airport");
        flight[6].SetTo("Karachi North International Airport");
        flight[6].SetArrival("04:00 PM");
        flight[6].SetDeparture("06:00 PM");
        flight[6].SetDuration(2);
        
        flight[7].SetId("PK-008");
        flight[7].SetType("Local");
        flight[7].SetFrom("Lahore North International Airport");
        flight[7].SetTo("Islamabad South International Airport");
        flight[7].SetArrival("05:00 PM");
        flight[7].SetDeparture("07:00 PM");
        flight[7].SetDuration(1);
        
        flight[8].SetId("PK-009");
        flight[8].SetType("Local");
        flight[8].SetFrom("Lahore North International Airport");
        flight[8].SetTo("Peshawar South International Airport");
        flight[8].SetArrival("06:00 PM");
        flight[8].SetDeparture("08:00 PM");
        flight[8].SetDuration(1);

        flight[9].SetId("PK-010");
        flight[9].SetType("Local");
        flight[9].SetFrom("Lahore North International Airport");
        flight[9].SetTo("Quetta South International Airport");
        flight[9].SetArrival("07:00 PM");
        flight[9].SetDeparture("09:00 PM");
        flight[9].SetDuration(1);

        flight[10].SetId("PK-011");
        flight[10].SetType("Local");
        flight[10].SetFrom("Islamabad South International Airport");
        flight[10].SetTo("Karachi North International Airport");
        flight[10].SetArrival("10:00 AM");
        flight[10].SetDeparture("12:00 PM");
        flight[10].SetDuration(2);

        flight[11].SetId("PK-012");
        flight[11].SetType("Local");
        flight[11].SetFrom("Islamabad South International Airport");
        flight[11].SetTo("Questta South International Airport");
        flight[11].SetArrival("11:00 AM");
        flight[11].SetDeparture("01:00 PM");
        flight[11].SetDuration(1);

        flight[12].SetId("PK-013");
        flight[12].SetType("Local");
        flight[12].SetFrom("Islamabad South International Airport");
        flight[12].SetTo("Lahore North International Airport");
        flight[12].SetArrival("12:00 PM");
        flight[12].SetDeparture("02:00 PM");
        flight[12].SetDuration(1);
        
        flight[13].SetId("PK-014");
        flight[13].SetType("Local");
        flight[13].SetFrom("Islamabad South International Airport");
        flight[13].SetTo("Peshawar North International Airport");
        flight[13].SetArrival("01:00 PM");
        flight[13].SetDeparture("03:00 PM");
        flight[13].SetDuration(1);
        
        flight[14].SetId("PK-015");
        flight[14].SetType("Local");
        flight[14].SetFrom("Islamabad South International Airport");
        flight[14].SetTo("Quetta North International Airport");
        flight[14].SetArrival("02:00 PM");
        flight[14].SetDeparture("04:00 PM");
        flight[14].SetDuration(1);
        
        flight[15].SetId("PK-016");
        flight[15].SetType("Local");
        flight[15].SetFrom("Islamabad North International Airport");
        flight[15].SetTo("Karachi South International Airport");
        flight[15].SetArrival("03:00 PM");
        flight[15].SetDeparture("05:00 PM");
        flight[15].SetDuration(2);
        
        flight[16].SetId("PK-017");
        flight[16].SetType("Local");
        flight[16].SetFrom("Islamabad North International Airport");
        flight[16].SetTo("Quetta North International Airport");
        flight[16].SetArrival("04:00 PM");
        flight[16].SetDeparture("06:00 PM");
        flight[16].SetDuration(1);
        
        flight[17].SetId("PK-018");
        flight[17].SetType("Local");
        flight[17].SetFrom("Islamabad North International Airport");
        flight[17].SetTo("Lahore South International Airport");
        flight[17].SetArrival("05:00 PM");
        flight[17].SetDeparture("07:00 PM");
        flight[17].SetDuration(1);
        
        flight[18].SetId("PK-019");
        flight[18].SetType("Local");
        flight[18].SetFrom("Islamabad North International Airport");
        flight[18].SetTo("Peshawar South International Airport");
        flight[18].SetArrival("06:00 PM");
        flight[18].SetDeparture("08:00 PM");
        flight[18].SetDuration(1);

        flight[19].SetId("PK-020");
        flight[19].SetType("Local");
        flight[19].SetFrom("Islamabad North International Airport");
        flight[19].SetTo("Quetta South International Airport");
        flight[19].SetArrival("07:00 PM");
        flight[19].SetDeparture("09:00 PM");
        flight[19].SetDuration(1);
        
        flight[20].SetId("PK-021");
        flight[20].SetType("Local");
        flight[20].SetFrom("Karachi South International Airport");
        flight[20].SetTo("Lahore North International Airport");
        flight[20].SetArrival("10:00 AM");
        flight[20].SetDeparture("12:00 PM");
        flight[20].SetDuration(2);

        flight[21].SetId("PK-022");
        flight[21].SetType("Local");
        flight[21].SetFrom("Karachi South International Airport");
        flight[21].SetTo("Peshawar South International Airport");
        flight[21].SetArrival("11:00 AM");
        flight[21].SetDeparture("01:00 PM");
        flight[21].SetDuration(2);

        flight[22].SetId("PK-023");
        flight[22].SetType("Local");
        flight[22].SetFrom("Karachi South International Airport");
        flight[22].SetTo("Islamabad North International Airport");
        flight[22].SetArrival("12:00 PM");
        flight[22].SetDeparture("02:00 PM");
        flight[22].SetDuration(2);

        flight[23].SetId("PK-024");
        flight[23].SetType("Local");
        flight[23].SetFrom("Karachi South International Airport");
        flight[23].SetTo("Peshawar North International Airport");
        flight[23].SetArrival("01:00 PM");
        flight[23].SetDeparture("03:00 PM");
        flight[23].SetDuration(2);

        flight[24].SetId("PK-025");
        flight[24].SetType("Local");
        flight[24].SetFrom("Karachi South International Airport");
        flight[24].SetTo("Quetta North International Airport");
        flight[24].SetArrival("02:00 PM");
        flight[24].SetDeparture("04:00 PM");
        flight[24].SetDuration(1);


        flight[25].SetId("PK-026");
        flight[25].SetType("Local");
        flight[25].SetFrom("Karachi North International Airport");
        flight[25].SetTo("Lahore South International Airport");
        flight[25].SetArrival("03:00 PM");
        flight[25].SetDeparture("05:00 PM");
        flight[25].SetDuration(2);

        flight[26].SetId("PK-027");
        flight[26].SetType("Local");
        flight[26].SetFrom("Karachi North International Airport");
        flight[26].SetTo("Peshawar South International Airport");
        flight[26].SetArrival("04:00 PM");
        flight[26].SetDeparture("06:00 PM");
        flight[26].SetDuration(2);
        
        flight[27].SetId("PK-028");
        flight[27].SetType("Local");
        flight[27].SetFrom("Karachi North International Airport");
        flight[27].SetTo("Islamabad South International Airport");
        flight[27].SetArrival("05:00 PM");
        flight[27].SetDeparture("07:00 PM");
        flight[27].SetDuration(2);
        
        flight[28].SetId("PK-029");
        flight[28].SetType("Local");
        flight[28].SetFrom("Karachi North International Airport");
        flight[28].SetTo("Peshawar North International Airport");
        flight[28].SetArrival("06:00 PM");
        flight[28].SetDeparture("08:00 PM");
        flight[28].SetDuration(2);
        
        flight[29].SetId("PK-030");
        flight[29].SetType("Local");
        flight[29].SetFrom("Karachi North International Airport");
        flight[29].SetTo("Quetta South International Airport");
        flight[29].SetArrival("07:00 PM");
        flight[29].SetDeparture("09:00 PM");
        flight[29].SetDuration(1);

        flight[30].SetId("PK-031");
        flight[30].SetType("Local");
        flight[30].SetFrom("Peshawar South International Airport");
        flight[30].SetTo("Quetta North International Airport");
        flight[30].SetArrival("10:00 AM");
        flight[30].SetDeparture("12:00 PM");
        flight[30].SetDuration(2);

        flight[31].SetId("PK-032");
        flight[31].SetType("Local");
        flight[31].SetFrom("Peshawar South International Airport");
        flight[31].SetTo("Karachi North International Airport");
        flight[31].SetArrival("11:00 AM");
        flight[31].SetDeparture("01:00 PM");
        flight[31].SetDuration(2);

        flight[32].SetId("PK-033");
        flight[32].SetType("Local");
        flight[32].SetFrom("Peshawar South International Airport");
        flight[32].SetTo("Islamabad North International Airport");
        flight[32].SetArrival("12:00 PM");
        flight[32].SetDeparture("02:00 PM");
        flight[32].SetDuration(2);

        flight[33].SetId("PK-034");
        flight[33].SetType("Local");
        flight[33].SetFrom("Peshawar South International Airport");
        flight[33].SetTo("Islamabad South International Airport");
        flight[33].SetArrival("01:00 PM");
        flight[33].SetDeparture("03:00 PM");
        flight[33].SetDuration(1);

        flight[34].SetId("PK-035");
        flight[34].SetType("Local");
        flight[34].SetFrom("Peshawar South International Airport");
        flight[34].SetTo("Lahore North International Airport");
        flight[34].SetArrival("02:00 PM");
        flight[34].SetDeparture("04:00 PM");
        flight[34].SetDuration(1);
        
        flight[35].SetId("PK-036");
        flight[35].SetType("Local");
        flight[35].SetFrom("Peshawar North International Airport");
        flight[35].SetTo("Quetta South International Airport");
        flight[35].SetArrival("03:00 PM");
        flight[35].SetDeparture("05:00 PM");
        flight[35].SetDuration(2);

        flight[36].SetId("PK-037");
        flight[36].SetType("Local");
        flight[36].SetFrom("Peshawar North International Airport");
        flight[36].SetTo("Karachi South International Airport");
        flight[36].SetArrival("04:00 PM");
        flight[36].SetDeparture("06:00 PM");
        flight[36].SetDuration(2);
        
        flight[37].SetId("PK-038");
        flight[37].SetType("Local");
        flight[37].SetFrom("Peshawar North International Airport");
        flight[37].SetTo("Islamabad South International Airport");
        flight[37].SetArrival("05:00 PM");
        flight[37].SetDeparture("07:00 PM");
        flight[37].SetDuration(2);
        
        flight[38].SetId("PK-039");
        flight[38].SetType("Local");
        flight[38].SetFrom("Peshawar North International Airport");
        flight[38].SetTo("Islamabad North International Airport");
        flight[38].SetArrival("06:00 PM");
        flight[38].SetDeparture("08:00 PM");
        flight[38].SetDuration(2);

        flight[39].SetId("PK-040");
        flight[39].SetType("Local");
        flight[39].SetFrom("Peshawar North International Airport");
        flight[39].SetTo("Lahore South International Airport");
        flight[39].SetArrival("07:00 PM");
        flight[39].SetDeparture("09:00 PM");
        flight[39].SetDuration(1);

        flight[40].SetId("PK-041");
        flight[40].SetType("Local");
        flight[40].SetFrom("Quetta South International Airport");
        flight[40].SetTo("Karachi North International Airport");
        flight[40].SetArrival("10:00 AM");
        flight[40].SetDeparture("12:00 PM");
        flight[40].SetDuration(2);
        
        flight[41].SetId("PK-042");
        flight[41].SetType("Local");
        flight[41].SetFrom("Quetta South International Airport");
        flight[41].SetTo("Peshawar North International Airport");
        flight[41].SetArrival("11:00 AM");
        flight[41].SetDeparture("01:00 PM");
        flight[41].SetDuration(2);

        flight[42].SetId("PK-043");
        flight[42].SetType("Local");
        flight[42].SetFrom("Quetta South International Airport");
        flight[42].SetTo("Islamabad North International Airport");
        flight[42].SetArrival("12:00 PM");
        flight[42].SetDeparture("02:00 PM");
        flight[42].SetDuration(2);

        flight[43].SetId("PK-044");
        flight[43].SetType("Local");
        flight[43].SetFrom("Quetta South International Airport");
        flight[43].SetTo("Lahore South International Airport");
        flight[43].SetArrival("01:00 PM");
        flight[43].SetDeparture("03:00 PM");
        flight[43].SetDuration(1);

        flight[44].SetId("PK-045");
        flight[44].SetType("Local");
        flight[44].SetFrom("Quetta South International Airport");
        flight[44].SetTo("Lahore North International Airport");
        flight[44].SetArrival("02:00 PM");
        flight[44].SetDeparture("04:00 PM");
        flight[44].SetDuration(1);

        flight[45].SetId("PK-046");
        flight[45].SetType("Local");
        flight[45].SetFrom("Quetta North International Airport");
        flight[45].SetTo("Karachi South International Airport");
        flight[45].SetArrival("03:00 PM");
        flight[45].SetDeparture("05:00 PM");
        flight[45].SetDuration(2);
        
        flight[46].SetId("PK-047");
        flight[46].SetType("Local");
        flight[46].SetFrom("Quetta North International Airport");
        flight[46].SetTo("Peshawar South International Airport");
        flight[46].SetArrival("04:00 PM");
        flight[46].SetDeparture("06:00 PM");
        flight[46].SetDuration(2);
        
        flight[47].SetId("PK-048");
        flight[47].SetType("Local");
        flight[47].SetFrom("Quetta North International Airport");
        flight[47].SetTo("Islamabad South International Airport");
        flight[47].SetArrival("05:00 PM");
        flight[47].SetDeparture("07:00 PM");
        flight[47].SetDuration(2);
        
        flight[48].SetId("PK-049");
        flight[48].SetType("Local");
        flight[48].SetFrom("Quetta North International Airport");
        flight[48].SetTo("Lahore North International Airport");
        flight[48].SetArrival("06:00 PM");
        flight[48].SetDeparture("08:00 PM");
        flight[48].SetDuration(1);

        flight[49].SetId("PK-050");
        flight[49].SetType("Local");
        flight[49].SetFrom("Quetta North International Airport");
        flight[49].SetTo("Lahore South International Airport");
        flight[49].SetArrival("07:00 PM");
        flight[49].SetDeparture("09:00 PM");
        flight[49].SetDuration(1);
    }
    //Add flights to airports
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 35; j++)
        {
            if (flight[i].GetFrom() == airport[j].GetName())
            {
                airport[j].AddFlight(flight[i]);
            }
        }
    }

    char choice;
    do
    {
        system("CLS");
        MainMenu();
        //Reading from files
        {
            ifstream pfile("passenger.txt");
            string str1;
            string str2;
            string str3;
            string str4;
            string str5;
            string str6;

            if (pfile.is_open())
            {
                while (getline(pfile, str1) && getline(pfile, str2) && getline(pfile, str3) && getline(pfile, str4) && getline(pfile, str5) && getline(pfile, str6))
                {
                    Passenger* temp = new Passenger[totalpassengers + 1];

                    for (int i = 0; i < totalpassengers; i++)
                    {
                        temp[i] = P[i];
                    }

                    delete[] P;
                    P = temp;

                    if (str4 == "1")
                    {
                        P[totalpassengers].SetLegal(true);
                    }
                    else
                    {
                        P[totalpassengers].SetLegal(false);
                    }

                    if (str5 == "1")
                    {
                        P[totalpassengers].SetPassport(true);
                    }
                    else
                    {
                        P[totalpassengers].SetPassport(false);
                    }

                    P[totalpassengers].SetName(str1);
                    P[totalpassengers].SetPassword(str2);
                    P[totalpassengers].SetCNIC(str3);
                    P[totalpassengers].SetAccount(str6);

                    totalpassengers++;
                }

                pfile.close();
            }
        }

        {
            ifstream afile("admin.txt");
            string line1;
            string line2;
    
            if (afile.is_open())
            {
                while (getline(afile, line1) && getline(afile, line2))
                {
                    Admin* temp = new Admin[totaladmins + 1];
    
                    for (int i = 0; i < totaladmins; i++)
                    {
                        temp[i] = A[i];
                    }
    
                    delete[] A;
                    A = temp;
    
                    A[totaladmins].SetName(line1);
                    A[totaladmins].SetPassword(line2);
                    totaladmins++;
                }
    
                afile.close();
            }
        }

        do
        {
            cin >> choice;
            if (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5')
            {
                cout << "Invalid Choice! Please enter again" << endl;
            }
        } while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5');
        switch (choice)
        {
            case '1':
            //Basic Information
                system("CLS");
                AboutUs();
                char choice1;
                do
                {
                    cin >> choice1;
                    if (choice1 != '2' && choice1 != '1')
                    {
                        cout << "Invalid Choice! Please enter again" << endl;
                    }
                } while (choice1 != '2' && choice1 != '1');
                break;
            case '2':
            //Display all airports and their flights
                system("CLS");
                for(int i = 0; i < 35; i++)
                {
                    airport[i].Display();
                    Sleep(3000);
                    system("CLS"); 
                }
                break;
            case '3':
            //Login
                system("CLS");
                LoginMenu();
                char pick;
                do
                {
                    cin >> pick;
                    if (pick != '1' && pick != '2' && pick != '3')
                    {
                        cout << "Invalid choice. Please try again." << endl;
                    }
                } while (pick != '1' && pick != '2' && pick != '3');

                switch (pick)
                {
                    case '1':
                        if (AdminLogin() == true)
                        {
                            Sleep(5000);
                            system("cls");
                            AdminMenu();
                            char pick1;
                            do
                            {
                                do
                                {
                                    cin >> pick1;
                                    if (pick1 != '1' && pick1 != '2' && pick1 != '3' && pick1 != '4' && pick1 != '5' && pick1 != '6' && pick1 != '7' && pick1 != '8' && pick1 != '9' && pick1 != '0')
                                    {
                                        cout << "Invalid choice. Please try again." << endl;
                                    }
                                } while (pick1 != '1' && pick1 != '2' && pick1 != '3' && pick1 != '4' && pick1 != '5' && pick1 != '6' && pick1 != '7' && pick1 != '8' && pick1 != '9' && pick1 != '0');
                                if (pick1 == '1')
                                {
                                    system("CLS");
                                    for(int i = 0; i < totalairports; i++)
                                    {
                                        cout << i+1 << ". " << airport[i].GetName() << endl;
                                    }
                                    int pick2;
                                    cout << "Enter the number of the airport you want to add a flight to: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > totalairports)
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > totalairports);
                                    Flight add;
                                    airport[pick2-1].AddFlight(add.AddFlight(airport[pick2-1].GetName()));
                                    Flight *temp;
                                    temp = new Flight[totalflights];
                                    for (int i = 0; i < totalflights; i++)
                                    {
                                        temp[i] = flight[i];
                                    }
                                    delete [] flight;
                                    totalflights++;
                                    flight = new Flight[totalflights];
                                    for (int i = 0; i < (totalflights - 1); i++)
                                    {
                                        flight[i] = temp[i];
                                    }
                                    flight[totalflights-1] = add;
                                    delete [] temp;
                                    cout << "Flight added successfully!" << endl;
                                    break;
                                }
                                else if (pick1 == '2')
                                {
                                    system("CLS");
                                    for(int i = 0; i < totalairports; i++)
                                    {
                                        cout << i+1 << ". " << airport[i].GetName() << endl;
                                    }
                                    int pick2;
                                    cout << "Enter the number of the airport you want to cancel flight for: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > totalairports)
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > totalairports);
                                    airport[pick2-1].Display();
                                    int pick3;
                                    cout << "Enter the number of the flight you want to remove: ";
                                    do
                                    {
                                        cin >> pick3;
                                        if (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights())
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights());
                                    airport[pick2-1].RemoveFlight(pick3 - 1);
                                    break;
                                }
                                else if (pick1 == '3')
                                {
                                    system("CLS");
                                    for(int i = 0; i < totalairports; i++)
                                    {
                                        cout << i+1 << ". " << airport[i].GetName() << endl;
                                    }
                                    int pick2;
                                    cout << "Enter the number of the airport you want to make changes to: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > totalairports)
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > totalairports);
                                    airport[pick2-1].Display();
                                    int pick3;
                                    cout << "Enter the number of the flight you want to edit: ";
                                    do
                                    {
                                        cin >> pick3;
                                        if (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights())
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights());
                                    airport[pick2-1].EditFlight(pick3 - 1);
                                    cout << "Flight edited successfully!" << endl;
                                    break;
                                }
                                else if (pick1 == '4')
                                {
                                    system("CLS");
                                    if (totalinquiries == 0)
                                    {
                                        cout << "There are no inquiries in the system." << endl;
                                    }
                                    else
                                    {
                                        cout << "There are " << totalinquiries << " inquiries in the system." << endl;
                                        for (int i = 0; i < totalinquiries; i++)
                                        {
                                            cout << i+1 << ". " << Inquiry[i] << endl;
                                        }
                                        int pick2;
                                        cout << "Enter the number of the inquiry you want to resolve: ";
                                        do
                                        {
                                            cin >> pick2;
                                            if (pick2 < 1 || pick2 > totalinquiries)
                                            {
                                                cout << "Invalid choice. Please try again." << endl;
                                            }
                                        } while (pick2 < 1 || pick2 > totalinquiries);
                                        cout << "Inquiry resolved successfully!" << endl;
                                        for (int i = pick2 - 1; i < totalinquiries - 1; i++)
                                        {
                                            Inquiry[i] = Inquiry[i+1];
                                        }
                                        totalinquiries--;
                                    }
                                    break;
                                }
                                else if (pick1 == '5')
                                {
                                    system("CLS");
                                    for(int i = 0; i < totalairports; i++)
                                    {
                                        cout << i+1 << ". " << airport[i].GetName() << endl;
                                    }
                                    int pick2;
                                    cout << "Enter the number of the airport you want to pick: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > totalairports)
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > totalairports);
                                    airport[pick2-1].Display();
                                    int pick3;
                                    cout << "Enter the number of the flight you want to pick: ";
                                    do
                                    {
                                        cin >> pick3;
                                        if (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights())
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights());
                                    airport[pick2-1].UpdateSeating(pick3 - 1);
                                    cout << "Flight seating updated successfully!" << endl;
                                    break;
                                }
                                else if (pick1 == '6')
                                {
                                    system("CLS");
                                    for(int i = 0; i < totalpassengers; i++)
                                    {
                                        cout << i+1 << ". " << P[i].GetName() << endl;
                                    }
                                    int pick2;
                                    cout << "Enter the number of the passenger you want: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > totalpassengers)
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > totalpassengers);
                                    VerifyFinancialDetail(P[pick2-1]);
                                    break;
                                }
                                else if (pick1 == '7')
                                {
                                    AdminSignup();
                                    break;
                                }
                                else if (pick1 == '8')
                                {
                                    break;
                                }
                            }while (pick1 != '8');
                        }
                        else
                        {
                            cout << "Invalid username or password. Please try again." << endl;
                        }
                        break;
                    case '2':
                        if (PassengerLogin() == true)
                        {
                            string name;
                            int id;
                            cout << "Checking if you are a human" << endl;
                            cout << "Reenter your name: ";
                            cin >> name;
                            for (int i = 0; i < totalpassengers; i++)
                            {
                                if (name == P[i].GetName())
                                {
                                    cout << "You are a human!" << endl;
                                    id = i;
                                    break;
                                }
                                else if (i == totalpassengers - 1)
                                {
                                    cout << "You are not a human!" << endl;
                                    exit(0);
                                }
                            }
                            Sleep(5000);
                            char pick1;
                            do
                            {
                                system("CLS");
                                PassengerMenu();
                                do
                                {
                                    cin >> pick1;
                                    if (pick1 != '1' && pick1 != '2' && pick1 != '3' && pick1 != '4' && pick1 != '5' && pick1 != '6')
                                    {
                                        cout << "Invalid choice. Please try again." << endl;
                                    }
                                } while (pick1 != '1' && pick1 != '2' && pick1 != '3' && pick1 != '4' && pick1 != '5' && pick1 != '6');
                                if (pick1 == '1')
                                {
                                    system("CLS");
                                    for(int i = 0; i < totalairports; i++)
                                    {
                                        cout << i+1 << ". " << airport[i].GetName() << endl;
                                    }
                                    int pick2;
                                    cout << "Enter the name of the airport you want to book a flight from: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > totalairports)
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > totalairports);
                                    airport[pick2-1].Display();
                                    int pick3;
                                    cout << "Enter the number of the flight you want to book: ";
                                    do
                                    {
                                        cin >> pick3;
                                        if (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights())
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick3 < 1 || pick3 > airport[pick2-1].GetTotalFlights());
                                    cout << "Enter the type of ticket you want to book: " << endl;
                                    cout << "E. Economy" << endl;
                                    cout << "B. Business" << endl;
                                    char pick4;
                                    do
                                    {
                                        cin >> pick4;
                                        if (pick4 != 'B' || pick4 != 'b' || pick4 != 'E' || pick4 != 'e')
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick4 != 'B' || pick4 != 'b' || pick4 != 'E' || pick4 != 'e');
                                    if (pick4 == 'B' || pick4 == 'b')
                                    {
                                        pick4 = 'B';
                                    }
                                    else
                                    {
                                        pick4 = 'E';
                                    }
                                    Ticket T(airport[pick2-1].GetFlight(pick3-1).GetType(), idnum, pick4);
                                    idnum++;
                                    T.SetPrice(airport[pick2-1].GetFlight(pick3-1).GetDuration());
                                    if (P[id].BookFlight(T) == true)
                                    {
                                        airport[pick2-1].GetFlight(pick3-1).AddTicket(T);
                                        cout << "Flight booked successfully!" << endl;
                                    }
                                    
                                }
                                else if (pick1 == '2')
                                {
                                    system("CLS");
                                    cout << "Your booked flights are: " << endl;
                                    P[id].DisplayBookedFlights();
                                    int pick2;
                                    cout << "Enter the number of the flight you want to cancel: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > P[id].GetTotalTickets())
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > P[id].GetTotalTickets());
                                    int idcheck = P[id].GetId(pick2-1);
                                    for (int i = 0; i < totalflights; i++)
                                    {
                                        for (int j = 0; j < (flight[i].GetCapacity() - (flight[i].GetAvailableEconomySeats() + flight[i].GetAvailableBusinessSeats())); j++)
                                        {
                                            if (flight[i].GetIdn(j) == idcheck)
                                            {
                                                flight[i].CancelTicket(idcheck);
                                            }
                                        }
                                    }
                                }
                                else if (pick1 == '3')
                                {
                                    system("CLS");
                                    cout << "Most Visited Country : France" << endl;
                                    cout << "Most Visited City : Paris" << endl;
                                    cout << "Most Visited Airport : Charles de Gaulle Airport" << endl;
                                    cout << "Total Expense From Islamabad to Paris : 220000" << endl;
                                    cout << "Travel Time : 11 Hours" << endl;
                                    Sleep(5000);
                                }
                                else if (pick1 == '4')
                                {
                                    system("CLS");
                                    P->DisplayBookedFlights();
                                    Sleep(5000);
                                }
                                else if (pick1 == '5')
                                {
                                    system("CLS");
                                    UpdateInformation();
                                    int pick2;
                                    cout << "Enter the number of the information you want to update: ";
                                    do
                                    {
                                        cin >> pick2;
                                        if (pick2 < 1 || pick2 > 3)
                                        {
                                            cout << "Invalid choice. Please try again." << endl;
                                        }
                                    } while (pick2 < 1 || pick2 > 3);
                                    if (pick2 == 1)
                                    {
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
                                        fstream cfile("passengers.txt", ios::in | ios::out);
                                        string line;
                                        while (!cfile.eof())
                                        {
                                            getline(cfile, line);
                                            if (line == P->GetPassword())
                                            {
                                                cfile << password;
                                            }
                                        }
                                        cfile.close();
                                        P->SetPassword(password);
                                        cout << "Password updated successfully!" << endl;
                                    }
                                    else if (pick2 == 2)
                                    {
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
                                        fstream cfile("passengers.txt", ios::in | ios::out);
                                        string line;
                                        while (!cfile.eof())
                                        {
                                            getline(cfile, line);
                                            if (line == P->GetCNIC())
                                            {
                                                cfile << CNIC;
                                            }
                                        }
                                        cfile.close();
                                        P->SetCNIC(CNIC);
                                        cout << "CNIC updated successfully!" << endl;
                                    }
                                    else if (pick2 == 3)
                                    {
                                        string account;
                                        cout << "Enter your account number: ";
                                        cin >> account;
                                        fstream cfile("passengers.txt", ios::in | ios::out);
                                        string line;
                                        while (!cfile.eof())
                                        {
                                            getline(cfile, line);
                                            if (line == P->GetAccount())
                                            {
                                                cfile << account;
                                            }
                                        }
                                        cfile.close();
                                        P->SetAccount(account);
                                        P->SetVerified(false);
                                        cout << "Account number updated successfully!" << endl;

                                    }
                                    else if (pick2 == 4)
                                    {
                                        break;
                                    }
                                }
                                else if (pick1 == '6')
                                {
                                    cout << "Enter your inquiry: ";
                                    string inquiry;
                                    cin.ignore();
                                    getline(cin, inquiry);
                                    Inquiry[totalinquiries] = inquiry;
                                    totalinquiries++;
                                    cout << "Inquiry made successfully!" << endl;
                                    break;
                                }
                                else if (pick1 == '7')
                                {
                                    break;
                                }
                                else
                                {
                                    break;
                                }
                            } while (pick1 != '7');
                        }
                        else
                        {
                            cout << "Invalid username or password. Please try again." << endl;
                        }
                        break;
                    case '3':
                        break;
                }
                Sleep(1000);
                break;
            case '4':
            //Signup
                system("CLS");
                SignupMenu();
                do
                {
                    cin >> pick;
                    if (pick != '1' && pick != '2')
                    {
                        cout << "Invalid choice. Please try again." << endl;
                    }
                } while (pick != '1' && pick != '2');

                switch (pick)
                {
                    case '1':
                        PassengerSignup();
                        break;
                    case '2':
                        break;
                }
                Sleep(1000);
                break;
            case '5':
            //Exit
                system("CLS");
                Logo();
                
                cout << "Thank you for using our system!" << endl;
                cout << "Have a nice day!" << endl;
                exit(0);
                break;
        }
    } while (choice != '5');
    
    return 0;
}