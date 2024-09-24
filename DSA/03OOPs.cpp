#include<iostream>
using namespace std;

class Character{
private:
    string name;
    string type;
    int health;
    int attackPower;
    int defensePower;
    int magicPower;

public:
    Character(){
        name  = "Unnamed";
        type = "Unknown";
        health = 100;
        attackPower = 10;
        defensePower = 5;
        magicPower = 0;
    }
    Character(string name, string type, int health, int attackPower, int defensePower, int magicPower){
        this->name = name;
        this->type = type;
        this->health = (health <= 100) ? health : 100;
        this->attackPower = attackPower;
        this->defensePower = defensePower;
        this->magicPower = (type == "Mage") ? magicPower : 0;
    }
    Character(string name, string type, int health, int attackPower, int defensePower){
        this->name = name;
        this->type = type;
        this->health = (health <= 100) ? health : 100;
        this->attackPower = attackPower;
        this->defensePower = defensePower;
    }

    void setName(string name){
        this->name = name;
    }
    void setType(string type){
        this->type = type;
    }
    void setHealth(int health){
        if(health <= 100) this->health = health;
    }
    void setAttackPower(int attackPower){
        this->attackPower = attackPower;
    }
    void setDefensePower(int defensePower){
        this->defensePower = defensePower;
    }
    void setMagicPower(int magicPower){
        if(this->type == "Mage") this->magicPower = magicPower;
    }

    string getName(){
        return name;
    }
    string getType(){
        return type;
    }
    int getHealth(){
        return health;
    }
    int getAttackPower(){
        return attackPower;
    }
    int getDefensePower(){
        return defensePower;
    }
    int getMagicPower(){
        return magicPower;
    }

    void attack(Character &enemy){
        cout << name << " attacks with power: " << attackPower << endl;
        enemy.setHealth(enemy.getHealth() - attackPower);
    }
    void defend(){
        cout << name << " defends with power: " << defensePower << endl;
    }
    void useMagic(Character &enemy){
        if(type == "Mage"){
            cout << name << " uses magic power: " << magicPower << endl;
            enemy.setHealth(enemy.getHealth() - magicPower);
        }
    }
};

int main()
{
    Character knight("Arthur", "Knight", 100, 20, 15);
    Character mage("Merlin", "Mage", 80, 10, 10, 30);
    Character thief("Robin", "Thief", 90, 15, 8);

    knight.attack(mage);
    mage.defend();
    mage.useMagic(knight);
    
    cout << "Knight's health: " << knight.getHealth() << endl;
    cout << "Mage's health: " << mage.getHealth() << endl;
}



// Ensure that:
// The health value cannot exceed 100.
// The magic power can only be set for certain types (e.g., "Mage").
// The setter methods should include validation checks (e.g., health must be between 0 and 100).
// Behavior Methods:
// Add a method attack() that simulates an attack. The method should print the attack power and deduct a value from an enemy's health.
// Add a method defend() that simulates a defensive action. It should print the defense power and calculate the health loss reduction when attacked.
// Add a method useMagic() for magic-capable characters (like Mages) that prints the magic power and applies special damage.
// Main Program:
// In the main function:
// Create multiple objects using the different constructors.
// Demonstrate the use of getter and setter methods.
// Perform some actions (e.g., attacking, defending, using magic).
// Print out all character details using the getter methods.