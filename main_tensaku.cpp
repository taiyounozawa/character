#include <iostream> // 入出力のために必要
#include <string>   // std::string を使用するために必要

// std:: を明示的に使うことで、名前空間の衝突を避けることが推奨されます。

class Character {
private:
    std::string name;       // キャラクターの名前
    int health;             // 体力
    int attackPower;        // 攻撃力 (camelCase に変更)

public:
    // コンストラクタ: 初期化リストを使用することで、より効率的で推奨される初期化方法です。
    // 引数名も分かりやすいように変更しました。
    Character(std::string characterName, int initialHealth, int initialAttackPower)
        : name(characterName), health(initialHealth), attackPower(initialAttackPower) {
        // ここで追加の初期化ロジックがあれば記述
    }

    // displayStatus はメンバ変数を変更しないため、const メンバ関数にすべきです。
    void displayStatus() const {
        std::cout << "-" << name << "-" << std::endl; // 文字列連結を + ではなく << で行うことで、より効率的
        std::cout << "Health: " << health << std::endl;
        std::cout << "Attack Power: " << attackPower << std::endl;
        std::cout << std::endl;
    }

    void takeDamage(int damage) {
        health -= damage; // 体力を減少させる

        if (health <= 0) {
            health = 0; // 体力が0以下にならないようにする
            std::cout << name << "は倒れた！" << std::endl; // 改行を追加
        }
    }

    void attack(Character& target) {
        std::cout << this->name << "は" << target.name << "に攻撃した！" << std::endl;
        target.takeDamage(this->attackPower); // ターゲットにダメージを与える
    }

    // 必要に応じてゲッターを追加することも検討できます (例: int getHealth() const { return health; })
};

int main() {
    // マジックナンバーを定数として定義することで、可読性と保守性を向上させます。
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