#include <iostream>
using namespace std;

// ������� ���, ��� ��������, ���������, � ����������
// ���� ���������:
// ���,
// �������,
// �����������,
// ���, �������,
// �����
// ����� (�������)

class Room
{
    double square;
    string color; // ���� ����
    int lamp;
    int shelf;
    int table;

    void Live()
    {

    }
    void Admire()
    {

    }
    void Paint()
    {

    }
    void Fair()
    {

    }
    void Hand_Over()
    {

    }
};

class House
{
public:
    // 1) ��� �� ����� - ����� ������� ���� (���������, ��������, ��������������) - ������ ����������/��������, ������� ��������� ��������
    // ����� ������� � ����� ���� �������� (������ ������ �������)
    // ������ ��� �����
    // ����� ��� � ��

    int storeys; // ���������
    double square; // ������� �����
    bool parking; // ���� �� �������
    bool cozy; // ����� �� ���
    int balcony_count; // ���������� ��������
    string address;
    int count_of_rooms; // ���������� ������
    Room* rooms = new Room[3]; // �� ��������� � ����� �� ��� �������

    /////////////////////////////////////////////////////////////////////
    // 2) ��� ����� ������ � ������� �������� ����� ����? ��� ����� ����� ���� �������? ��� ����� ������� � ���������?
    void Print() // ���������� �� ���
    {
        cout << "��������� ����: " << storeys << "\n";
        cout << "C������ ��������: " << balcony_count << "\n";
        cout << "����� ����: " << address << "\n";
    }

    void Sale() // ��� ����� �������
    {

    }

    void Repair() // ��� ����� ���������������
    {

    }

    void Buy()
    {

    }
    void Paint()
    {

    }
    void Live()
    {

    }
};

class Fridge
{
public:
    double weight;
    double size;
    string color;
    bool beautiful;
    int shelf;

    void Buy()
    {

    }
    void Sale()
    {

    }
    void Break()
    {

    }
    void See_To_Fridge()
    {

    }
    void Throw_out()
    {

    }
};

class Food
{
    bool delicious;
    bool beautiful;
    bool expensive;
    int size;
    string name;

    void Eat()
    {

    }
    void Make_A_Photo()
    {

    }
    void Give_To_Friend()
    {

    }
    void Give_To_Dog()
    {

    }
    void Shiff()
    {

    }

};

class Beverage
{
    bool good;
    bool cold;
    int size;
    string color;
    string name;

    void Drink()
    {

    }
    void Give_To_Girl()
    {

    }
    void Pour_Out()
    {

    }
    void Cool_Down()
    {

    }
    void Buy()
    {

    }
};

class Cat
{
    double weight;
    double size;
    int age;
    string name;
    string color;

    void Play()
    {

    }
    void Feed()
    {

    }
    void Love()
    {

    }
    void Buy()
    {

    }
    void Give_To_Friend()
    {

    }
};

class Person
{
    int age;
    double weight;
    double size;
    int eyes;
    string name;

    void Live()
    {

    }
    void Eat()
    {

    }
    void Enjoy()
    {

    }
    void Think()
    {

    }
    void Learn()
    {

    }
};

int main()
{
    setlocale(0, "");
    // �������� ������� ������ House - �� ����, ��� ���������� � ����� House
    House AlexHouse; // �������� ���������� � ���������

    AlexHouse.balcony_count = 1;
    AlexHouse.address = "�������� ������, 45";
    AlexHouse.storeys = 5;

    AlexHouse.Print();
}