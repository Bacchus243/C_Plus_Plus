#include <iostream>


using namespace std;


// the Chef class is the 'super class'
class Chef {        
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

// the ItalianChef class is a 'subclass' of the chef class
class ItalianChef : public Chef{
    public:
        void makePasta() {
            cout << "The Italian chef makes pasta" << endl;
        }
        void makeSpecialDish() {
            cout << "The Italian chef makes chicken parm" << endl;
        }
};

int main()
{

    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();



    return 0;
}