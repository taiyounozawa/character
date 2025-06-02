#include <iostream>
#include <string>
using namespace std;

class Character {
    private:
        string name;
        int health;
        int AttackPower;
    public:
        Character(string n, int h, int ap) {
            name = n;
            health = h;
            AttackPower = ap;
        }

        void displayStatus() {
            cout <<  "-" + name +  "-" << endl;
            cout << "Health:" + health << endl;
            cout << "Attack Power:" + AttackPower << endl;
        }

        void takeDamage(int damage) {

        }

        void attack(Character& target) {
        }
};

int main () {
    Character hero("hero", 100, 20);
    Character monster("Boss", 1000, 10);


    return 0;
}
