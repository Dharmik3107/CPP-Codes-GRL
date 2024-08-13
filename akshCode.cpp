#include <iostream>
#include <string>

using namespace std;

class Room
{
public:
    int room = 0;
    bool isOn;

    Room(int number): room(number), num_fans(0), num_acs(0) {}

    void show_status()
    {
        cout << num_fans << " FANS, " << fan_status << endl;
        if (num_fans != 0 && fan_status.length() > 0)
        {
            for (int i = 0; i < fan_status.length(); i++)
            {
                string status = fan_status[i] == 'F' ? "OFF" : "ON";
                cout << "FAN " << i + 1 << " IS " << status << endl;
            }
        }
        else
        {
            cout << "THIS ROOM DOES NOT HAVE ANY FAN" << endl;
        }

        if (num_acs != 0 && ac_status.length() > 0)
        {
            for (int i = 0; i < ac_status.length(); i++)
            {
                string status = ac_status[i] == 'F' ? "OFF" : "ON";
                cout << "AC " << i + 1 << " IS " << status << endl;
            }
        }
        else
        {
            cout << "THIS ROOM DOES NOT HAVE ANY AC" << endl;
        }
    }

    
    

    void set_fans(int fan_count)
    {
        num_fans = fan_count;
        fan_status = string(fan_count, 'F');
    }


    void set_acs(int ac_count)
    {
        num_acs = ac_count;
        ac_status = string(ac_count, 'F');
    }

    void set_roomdata()
    {
        if (num_fans == 0)
        {
            int fans;
            cout << "ENTER THE NUMBER OF FANS: ";
            cin >> fans;
            set_fans(fans);
        }

        if (num_acs == 0)
        {
            int acs;
            cout << "ENTER THE NUMBER OF ACS: ";
            cin >> acs;
            set_acs(acs);
        }
    }

    void for_fan()
    {
        int fan_number ;
        cout << "ENTER FAN NUMBER TO OPERATE IT";
        cin >> fan_number;


        string command;
        cout << "ENTER COMMAND GIVEN BELOW: \n (ON OR OFF)";
        cin >> command;
        
        if (fan_number > num_fans || fan_number < 1)
       {
        cout << "INVALID FAN NUMBER" << endl;
        return;
       }else if (fan_number < num_fans)
       {
        if (command == "ON" || "On" || "on")
        {
            cout << "FAN"  << " "<< fan_number << " " << "IS ON" << endl;
        }
        else if (command == "OFF" || "Off" || "off")
        {
            cout << "FAN"  << " "<< fan_number << " " << "IS OFF" << endl;
            }

       }
    }

    

    

private:
    int num_fans;
    int num_acs;
    string fan_status = "";
    string ac_status = "";
};

int main()
{
    Room room1(1);
    while (true)
    {
        room1.set_roomdata();
        string input;
        cout << "SELECT ANY ONE OPTION GIVEN BELOW:\n(SHOW STATUS: TYPE 'S' \nCHANGE DEVICE: TYPE 'D')\n";
        cin >> input;

        if (input == "exit")
        {
            break;
        }
        else if (input == "S" || input == "s")
        {
            cout << "S Entered" << endl;
            room1.show_status();
            
        }else if (input == "D" || input == "d")
          {  
             string device;
             cout << "SELECT DEVICE GIVEN BELOW: \n (AC OR FAN)" ;
             cin >> device;

             if (device == "FAN" || "fan" || "Fan")
             {
                room1.for_fan();
             }
            cout << "D Entered" << endl;

             
          }

}
    return 0;

}