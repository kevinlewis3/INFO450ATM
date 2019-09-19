#include <iostream>
using namespace std;

int getWithdraw();

int main() {
    // initializing variables
    int i = 0;
    int withdraw = 0;
    //double minValue = 0.00;
    //double maxValue = 301.00;
    int billFifty;
    int billTwenty;
    int billTen;
    int billFive;
    int billOne;
    //Y or y ensures the loop continue
    char answer = 'a';

    //Using a do/while loop
    do
        {
        withdraw = getWithdraw();
            if (withdraw >= 50) {
                //Divides the remainder to be withdrawn by 50, which determines what should be depsended.
                billFifty = (withdraw / 50);
                cout << "You have: [" << billFifty << "] $50 dollar bills." << endl;
                //Determine the remaining amount to be withdrawn to user after removing $50 bills
                withdraw %= 50;
            }

            if (withdraw >= 20) {
                billTwenty = (withdraw / 20);
                cout << "You have: [" << billTwenty << "] $20 dollar bills." << endl;
                withdraw %= 20;
            }

            if (withdraw >= 10) {
                billTen = (withdraw / 10);
                cout << "You have: [" << billTen << "] $10 dollar bills." << endl;
                withdraw %= 10;
            }

            if (withdraw >= 5) {
                billFive = (withdraw / 5);
                cout << "You have: [" << billFive << "] $5 dollar bills." << endl;
                withdraw %= 5;
            }

            if (withdraw >= 1) {
                billOne = (withdraw / 1);
                cout << "You have [" << billOne << "] $1 dollar bills." << endl;
                withdraw %= 1;
            }

            if (withdraw == 0) {
                cout << "Would you like to make another withdraw?" << endl;
                cout << "Enter y to continue" << endl;
                cin >> answer;
            }

    }while ((answer == 'Y') || (answer == 'y'));

    return 0;
}


//Additional function collecting the users input and validating their input
//to ensure it meets the min and max requirement.
    int getWithdraw()
    {
    int withdraw;
    int maxValue2 = 300;
    int minValue2 = 1;

    do
        {
        cout << "Please enter withdraw amount " << endl;
        cin >> withdraw;

            //If user input is less than $0 they will receive this error.
            if (withdraw < minValue2)
                cout << "The minimum amount that you can withdraw is $1.00." << endl;

            //If user input is more than $300 they will receive this error.
            if (withdraw > maxValue2)
                cout << "The maximum amount that you can withdraw is $300.00." << endl;


        } while (withdraw < minValue2 || withdraw > maxValue2);

        //Stores withdraw value to be used later in program.
        return withdraw;
    }


