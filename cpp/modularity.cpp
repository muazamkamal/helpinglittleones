/* 
    Example use of submodule for modularity.

    Name: Muazam Kamal
    Date created: 11/06/19
*/

#include <iostream>
using namespace std;

/* Forward declaration for the compiler. */
void welcome();
void goodbye();

int main(int argc, char const *argv[])
{

    /* Calls the welcome module. */
    welcome();

    /* Calls the goodbye module. */
    goodbye();

    return 0;
}

/* Prints a welcome message to the output console. */
void welcome()
{
    cout << "Welcome to Modularity example!" << endl;
}

/* Prints a goodbye message to the output console. */
void goodbye()
{
    cout << "Thank you for using Modularity example!" << endl;
}
