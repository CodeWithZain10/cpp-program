#include <iostream>
#include <string>

using namespace std;

class BloodCamp
{
public:
    string date;
    string location;

    BloodCamp() {}
    BloodCamp(string d, string l) : date(d), location(l) {}
};

class User
{
public:
    string id;
    string name;
    string bloodGroup;

    User() {}
    User(string i, string n, string b) : id(i), name(n), bloodGroup(b) {}
};

class Request
{
public:
    string bloodGroup;
    string hospital;
    bool urgent;

    Request() {}
    Request(string b, string h, bool u) : bloodGroup(b), hospital(h), urgent(u) {}
};

class Sponsor
{
public:
    string name;
    string event;

    Sponsor() {}
    Sponsor(string n, string e) : name(n), event(e) {}
};

// Main application class
class BloodDonationApp
{
private:
    static const int MAX_SIZE = 100; // Maximum size of arrays

    BloodCamp camps[MAX_SIZE];
    int numCamps;

    User donors[MAX_SIZE];
    int numDonors;

    Request requests[MAX_SIZE];
    int numRequests;

    Sponsor sponsors[MAX_SIZE];
    int numSponsors;

public:
    BloodDonationApp() : numCamps(0), numDonors(0), numRequests(0), numSponsors(0) {}

    void addBloodCamp()
    {
        if (numCamps < MAX_SIZE)
        {
            string date, location;
            cout << "Enter Blood Camp Date: ";
            cin >> date;
            cout << "Enter Blood Camp Location: ";
            cin >> location;
            camps[numCamps++] = BloodCamp(date, location);
            cout << "Blood Camp added successfully!" << endl;
            notifyUsers();
        }
        else
        {
            cout << "Cannot add more Blood Camps, array is full!" << endl;
        }
    }

    void addUser()
    {
        if (numDonors < MAX_SIZE)
        {
            string id, name, bloodGroup;
            cout << "Enter User ID: ";
            cin >> id;
            cout << "Enter User Name: ";
            cin >> name;
            cout << "Enter Blood Group: ";
            cin >> bloodGroup;
            donors[numDonors++] = User(id, name, bloodGroup);
            cout << "User added successfully!" << endl;
        }
        else
        {
            cout << "Cannot add more Users, array is full!" << endl;
        }
    }

    void addRequest()
    {
        if (numRequests < MAX_SIZE)
        {
            string bloodGroup, hospital;
            bool urgent;
            cout << "Enter Blood Group Needed: ";
            cin >> bloodGroup;
            cout << "Enter Hospital: ";
            cin >> hospital;
            cout << "Is it Urgent (1 for Yes, 0 for No): ";
            cin >> urgent;
            requests[numRequests++] = Request(bloodGroup, hospital, urgent);
            cout << "Request added successfully!" << endl;
        }
        else
        {
            cout << "Cannot add more Requests, array is full!" << endl;
        }
    }

    void addSponsor()
    {
        if (numSponsors < MAX_SIZE)
        {
            string name, event;
            cout << "Enter Sponsor Name: ";
            cin >> name;
            cout << "Enter Sponsored Event: ";
            cin >> event;
            sponsors[numSponsors++] = Sponsor(name, event);
            cout << "Sponsor added successfully!" << endl;
        }
        else
        {
            cout << "Cannot add more Sponsors, array is full!" << endl;
        }
    }

    void notifyUsers()
    {
        cout << "Notifying users about new blood camp..." << endl;
        for (int i = 0; i < numDonors; ++i)
        {
            cout << "Notification sent to " << donors[i].name << " (ID: " << donors[i].id << ")" << endl;
        }
    }

    void showBloodCamps()
    {
        cout << "Upcoming Blood Camps:" << endl;
        for (int i = 0; i < numCamps; ++i)
        {
            cout << "Date: " << camps[i].date << ", Location: " << camps[i].location << endl;
        }
    }

    void showDonors()
    {
        cout << "Registered Donors:" << endl;
        for (int i = 0; i < numDonors; ++i)
        {
            cout << "ID: " << donors[i].id << ", Name: " << donors[i].name << ", Blood Group: " << donors[i].bloodGroup << endl;
        }
    }

    void showRequests()
    {
        cout << "Blood Requests:" << endl;
        for (int i = 0; i < numRequests; ++i)
        {
            cout << "Blood Group: " << requests[i].bloodGroup << ", Hospital: " << requests[i].hospital << ", Urgent: " << (requests[i].urgent ? "Yes" : "No") << endl;
        }
    }

    void showSponsors()
    {
        cout << "Event Sponsors:" << endl;
        for (int i = 0; i < numSponsors; ++i)
        {
            cout << "Name: " << sponsors[i].name << ", Event: " << sponsors[i].event << endl;
        }
    }
};

int main()
{
    BloodDonationApp app;
    int choice;

    while (true)
    {
        cout << "Blood Donation Management System" << endl;
        cout << "1. Add Blood Camp" << endl;
        cout << "2. Add User" << endl;
        cout << "3. Add Blood Request" << endl;
        cout << "4. Add Sponsor" << endl;
        cout << "5. Show Blood Camps" << endl;
        cout << "6. Show Donors" << endl;
        cout << "7. Show Requests" << endl;
        cout << "8. Show Sponsors" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            app.addBloodCamp();
            break;
        case 2:
            app.addUser();
            break;
        case 3:
            app.addRequest();
            break;
        case 4:
            app.addSponsor();
            break;
        case 5:
            app.showBloodCamps();
            break;
        case 6:
            app.showDonors();
            break;
        case 7:
            app.showRequests();
            break;
        case 8:
            app.showSponsors();
            break;
        case 0:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    }
    return 0;
}