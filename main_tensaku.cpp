#include <iostream> // ���o�͂̂��߂ɕK�v
#include <string>   // std::string ���g�p���邽�߂ɕK�v

// std:: �𖾎��I�Ɏg�����ƂŁA���O��Ԃ̏Փ˂�����邱�Ƃ���������܂��B

class Character {
private:
    std::string name;       // �L�����N�^�[�̖��O
    int health;             // �̗�
    int attackPower;        // �U���� (camelCase �ɕύX)

public:
    // �R���X�g���N�^: ���������X�g���g�p���邱�ƂŁA�������I�Ő�������鏉�������@�ł��B
    // ��������������₷���悤�ɕύX���܂����B
    Character(std::string characterName, int initialHealth, int initialAttackPower)
        : name(characterName), health(initialHealth), attackPower(initialAttackPower) {
        // �����Œǉ��̏��������W�b�N������΋L�q
    }

    // displayStatus �̓����o�ϐ���ύX���Ȃ����߁Aconst �����o�֐��ɂ��ׂ��ł��B
    void displayStatus() const {
        std::cout << "-" << name << "-" << std::endl; // ������A���� + �ł͂Ȃ� << �ōs�����ƂŁA�������I
        std::cout << "Health: " << health << std::endl;
        std::cout << "Attack Power: " << attackPower << std::endl;
        std::cout << std::endl;
    }

    void takeDamage(int damage) {
        health -= damage; // �̗͂�����������

        if (health <= 0) {
            health = 0; // �̗͂�0�ȉ��ɂȂ�Ȃ��悤�ɂ���
            std::cout << name << "�͓|�ꂽ�I" << std::endl; // ���s��ǉ�
        }
    }

    void attack(Character& target) {
        std::cout << this->name << "��" << target.name << "�ɍU�������I" << std::endl;
        target.takeDamage(this->attackPower); // �^�[�Q�b�g�Ƀ_���[�W��^����
    }

    // �K�v�ɉ����ăQ�b�^�[��ǉ����邱�Ƃ������ł��܂� (��: int getHealth() const { return health; })
};

int main() {
    // �}�W�b�N�i���o�[��萔�Ƃ��Ē�`���邱�ƂŁA�ǐ��ƕێ琫�����コ���܂��B
    const int HERO_INITIAL_HEALTH = 100;
    const int HERO_INITIAL_ATTACK_POWER = 20;
    const int MONSTER_INITIAL_HEALTH = 1000;
    const int MONSTER_INITIAL_ATTACK_POWER = 10;

    Character hero("Hero", HERO_INITIAL_HEALTH, HERO_INITIAL_ATTACK_POWER);
    Character monster("Boss", MONSTER_INITIAL_HEALTH, MONSTER_INITIAL_ATTACK_POWER);

    hero.displayStatus();
    monster.displayStatus();

    hero.attack(monster);
    monster.attack(hero);

    hero.displayStatus();
    monster.displayStatus();

    return 0;
}