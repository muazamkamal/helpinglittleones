/* 
    Example of using struct with array.
    Ease of use, accessing, modifying of the data members with the help of loop.

    Reference: https://stackoverflow.com/a/6810680/5635689

    Name: Muazam Kamal
    Date: 04/05/19
*/

#include <iostream>
using namespace std;

// Struct declaration
struct Movie
{
    string name;
    int duration;
    double rating;
};

int main(int argc, char const *argv[])
{
    // Initialisation-list type 
    Movie myLife[2] = {{"Welcome to my world", 200, 0.0}, {"This is the end", 30, 100.0}};

    // Default initialisation, with member-access syntax
    Movie netflix[2];

    netflix[0].name = "Iron-Man";
    netflix[0].duration = 10800;
    netflix[0].rating = 76.3;

    netflix[1].name = "Captain Marvel";
    netflix[1].duration = 10800;
    netflix[1].rating = 98.1;

    /*
    Since all the elements in the array are the same data type/struct type,
    obviously because that's how array works.
    All elements, or "movies" in this case, will have the same data members.
    
    With the use of for-loop, Each data member of every movie in the array
    can be printed with ease.
    */
    for(int i = 0; i < 2; i++)
    {
        cout << "Name: "<< myLife[i].name << endl;
        cout << "Duration (seconds): "<< myLife[i].duration << endl;
        cout << "Rating: " << myLife[i].rating << endl;
        cout << endl;
    }

    return 0;
}

