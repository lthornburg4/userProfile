Homework Helper: Bit of code to get you started
#include <iostream>
using namespace std;
class User{
private:
    // user's first and last name
    string firstName, lastName;
    // user's address city and state
    string address, city, state;
    //user's zipcode
    string zipCode;
    //user's phone number
    string phoneNumber;
public:
    //default constructor
    User(){}
    /**
     * Parametized constructor
    */
    User(string fname, string lName, string address,
         string city, string state, string zipCode, string phoneNumber):
    //initializing variables, address variable is composed of city, state and zipcode.
            firstName(fname), lastName(lName), address(address + " " + city + " " + state + " " + zipCode),
            city(city), state(state), zipCode(zipCode), phoneNumber(phoneNumber){}
    /* Add Getters and Setters */
    class Account{
    private:
        // Account's number treated as an ID
        string accountNumber;
        // Accounts balance
        double balanceAmount;
        //instance from User class to establish has-a relationship
        User accUser;
    public:
        Account(string accountNumber, double balanceAmount, User user):
                accountNumber(accountNumber), balanceAmount(balanceAmount){
            accUser = user;
        }
        //getters --> call getters from User class
        string getFname(){return accUser.getFname();}
        /* Finish up here */
        int main(){
            User user ("Joe","Struss", "123 Main Street", "Ankeny", "IA", "50000", "111-222-1234");
            Account acc("6781274", 10000, user);
            acc.setUserFName("Joey");
            acc.printInfo();
            return 0;
        }
