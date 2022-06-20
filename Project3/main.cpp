#include <iostream>
#include <string>
using namespace std;

class Story
{
public:
    string name,
           age,
           city,
           college,
           profession,
           animal,
           petname;
    string vowels = "aeiouAEIOU";
    Story()
    {
        cout << "Please enter a NAME: ";
        getline(cin, name);
        cout << "Please enter an AGE: ";
        getline(cin, age);
        cout << "Please enter a CITY: ";
        getline(cin, city);
        cout << "Please enter a COLLEGE: ";
        getline(cin, college);
        cout << "Please enter a PROFESSION: ";
        getline(cin, profession);
        cout << "Please enter an ANIMAL: ";
        getline(cin, animal);
        cout << "Please enter a PET NAME: ";
        getline(cin, petname);
    }
    /**
     * Print a story containing all of the constructor fields.
     *
     * I miss Python's fstrings.
     *
     * @Returns none.
     */
    void printStory()
    {
        cout<< "There once was a person named " << name << " who lived in "
            << city << ". At the age of " << age << ", " << name
            << " went to college at " << college << ". " << name
            << " graduated and went to work as ";
        if (vowels.find(profession.at(0)) != string::npos)
        {
            cout << "an ";
        } else {
            cout << "a ";
        }
        cout<< profession << ". Then, " << name << " adopted ";
        if (vowels.find(animal.at(0)) != string::npos)
        {
            cout << "an ";
        } else {
            cout << "a ";
        }
        cout<< animal << " named " << petname
            << ". They both lived happily ever after!\n";
    }
};

int main()
{
    Story one;
    one.printStory();
    return 0;
}

// RESOURCES USED:
// https://cplusplus.com/reference/string/string/at/
// https://cplusplus.com/reference/string/string/find/
// https://www.geeksforgeeks.org/constructors-c/