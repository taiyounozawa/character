#include <iostream>
#include <string>
using namespace std;

class Character {
    private:
        string name;
        int health;
        int attackPower;
    public:
        Character(string n, int h, int ap) {
            name = n;
            health = h;
            attackPower = ap;
        }

        void displayStatus() {
            cout <<  "-" + name +  "-" << endl;
            cout << "Health:" << health  << endl;
            cout << "Attack Power:" << attackPower << endl;
            cout << endl;
        }

        void takeDamage(int damage) {
            health -= damage;

            if(health <= 0) {
                health = 0;
                cout << name << "は倒れた！";
            }
        }

        void attack(Character& target) {
            cout << this->name << "は" << target.name << "に攻撃した！" << endl;
            target.takeDamage(this->attackPower);
        }
};

int main () {
    Character hero("hero", 100, 20);
    Character monster("Boss", 1000, 10);

    hero.displayStatus();
    monster.displayStatus();

    hero.attack(monster);
    monster.attack(hero);

    hero.displayStatus();
    monster.displayStatus();

    return 0;
}
