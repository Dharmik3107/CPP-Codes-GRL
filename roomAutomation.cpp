#include <iostream>
#include <string>
using namespace std;

class Room
{
public:
    int room = 0;
    Room(int number) : room(number)
    {
        room = number;
    }
    void showStatus()
    {
        cout << numFans << " " << fanStatus << endl;
        if (numFans != 0 && fanStatus.length() > 0)
        {
            for (int i = 0; i < fanStatus.length(); i++)
            {
                string status = fanStatus[i] == 'F' ? "OFF" : "ON";
                cout << "Fan " << i + 1 << " is " << status << endl;
            }
        }
        else
        {
            cout << "This Room does not have any Fan" << endl;
        }
        if (numAcs != 0 && acStatus.length() > 0)
        {
            for (int i = 0; i < acStatus.length(); i++)
            {
                string status = acStatus[i] == 'F' ? "OFF" : "ON";
                cout << "AC " << i + 1 << " is " << status << endl;
            }
        }
        else
        {
            cout << "This Room does not have any AC" << endl;
        }
    }

    void setFans(int fanCount)
    {
        numFans = fanCount;
        for (int i = 0; i < fanCount; i++)
        {
            fanStatus += "F";
        }
    }

    void setACs(int acCount)
    {
        numAcs = acCount;
        for (int i = 0; i < acCount; i++)
        {
            acStatus += "F";
        }
    }

    void setRoomData()
    {
        if (numFans == 0)
        {
            int fans;
            cout << "Enter number of Fans in Room " << room << " :";
            cin >> fans;
            setFans(fans);
        }
        if (numAcs == 0)
        {
            int acs;
            cout << "Enter number of ACs in Room " << room << " :";
            cin >> acs;
            setACs(acs);
        }
    }

    //! Function to check current state of device
    bool checkCurrentState(string type, int number, bool command)
    {
        if (type == "Fan")
        {
            if (fanStatus[number] == 'F' && !command)
            {
                cout << "Fan " << number << " is already Off" << endl;
                return true;
            }
            else if (fanStatus[number] == 'T' && command)
            {
                cout << "Fan " << number << " is already On" << endl;
                return true;
            }
        }
        else
        {
            if (acStatus[number] == 'F' && !command)
            {
                cout << "AC " << number << " is already Off" << endl;
                return true;
            }
            else if (acStatus[number] == 'T' && command)
            {
                cout << "AC " << number << " is already On" << endl;
                return true;
            }
        };
        return false;
    }

    //! Input Checking Function
    bool checkInputType(string input){
        if(input == "Fan" || input == "AC"){
            return true;
        }else{
            return false;
        }
    }

    //! Function to get input from user
    string getInput(){
        string device;
        cout << "Select device to control (for Fan: Type Fan or for AC: Type AC or to exit: Type q): ";
        cin >> device;

        bool isValidDevice = checkInputType(device);

        if(isValidDevice){
            return device;
        }else if(device == "q"){
            return device;
        }
        else{
            return "Invalid";
        }
    }
    //! Control Device Function
    void controlDevice(string type, int number, bool command)
    {

        bool c_state = checkCurrentState(type, number, command);
        if (!c_state)
        {
            if (type == "Fan")
            {
                fanStatus[number] = command ? 'T' : 'F';
                string state = command ? "ON" : "OFF";
                cout << "Fan " << number << " is " << state << endl;
            }
            else
            {
                acStatus[number] = command ? 'T' : 'F';
                string state = command ? "ON" : "OFF";
                cout << "AC " << number << " is " << state << endl;
            }
        }
    }

    //!Function to validate device number
    bool validateNumber(string type, int number){
        bool isValid;
        if(type == "Fan"){
            isValid = number > numFans || number < 0 ? false : true; 
        }else{
            isValid = number > numAcs || number < 0 ? false : true;
        }
        return isValid;
    }

    //! Function to get number from user
    int getDeviceNumber(string type){
        string device = type == "Fan" ? "Fan" : "AC";

        int deviceNumber;
        cout << "Enter " << device << " number to control: ";
        cin >> deviceNumber;

        bool isValidNumber = validateNumber(type, deviceNumber);  
        if(isValidNumber){
            return deviceNumber;
        }else{
            return 0;
        }
    }

    //! Function to validate user command
    string getCommand(string type){
        string command;
        string device = type == "Fan" ? "Fan" : "AC";

        cout << "Enter Command to control a " << device << " (to Start: Type ON or to Off: Type OFF)";
        cin >> command;
        if(command == "ON"){
            return command;
        }else if(command == "OFF"){
            return command;
        }else{
            return "q";
        }
    }

private:
    int numFans = 0;
    int numAcs = 0;
    string fanStatus = "";
    string acStatus = "";
};

int main()
{
    Room Room1(1);
    while (true)
    {
        Room1.setRoomData();
        string input;
        cout << "Select a option. (Show Status :Type stat or control device :Type c or to exit :Type q)";
        cin >> input;

        if (input == "q")
        {
            break;
        }
        else
        {
            if (input == "stat")
            {
                Room1.showStatus();
            }
            else if (input == "c")
            {
                while(true){
                    string validInput = Room1.getInput();
                    if(validInput == "q"){
                        break;
                    }else if(validInput == "Invalid"){
                        cout << "Invalid Device Type" << endl;
                        continue;
                    }else{
                        while(true){
                            int number = Room1.getDeviceNumber(validInput);
                            if(number == 0){
                                cout << "Enter Valid Number of Device" << endl;
                                continue;
                            }else{
                                while(true){
                                    string c_command = Room1.getCommand(validInput);
                                    if(c_command == "q"){
                                        cout << "Enter Valid control command" << endl;
                                        continue;
                                    }else{
                                        bool bcommand = c_command == "ON" ? true : false;
                                        Room1.controlDevice(validInput, number, bcommand);
                                    } 
                                }
                            }
                        }

                    }
                }
            }
            else
            {
                cout << "Invalid Command" << endl;
                continue;
            }
        }
    }
    return 0;
}