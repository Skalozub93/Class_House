#include <iostream>
using namespace std;

// описать дом, его интерьер, экстерьер, и обитателей
// типы сущностей:
// дом,
// комната,
// холодильник,
// еда, напиток,
// кошка
// жилец (человек)

class Room
{
    double square;
    string color; // цвет стен
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
    // 1) что ты такое - какие сделать поля (аттрибуты, свойства, характеристики) - список переменных/констант, которые описывают сущность
    // какие размеры у этого типа объектов (ширина высота глубина)
    // какого оно цвета
    // какой вес и тд

    int storeys; // этажность
    double square; // площадь жилая
    bool parking; // есть ли паркинг
    bool cozy; // уютно ли там
    int balcony_count; // количество балконов
    string address;
    int count_of_rooms; // количество комнат
    Room* rooms = new Room[3]; // по умолчанию в домах по три комнаты

    /////////////////////////////////////////////////////////////////////
    // 2) что можно делать с помощью объектов таког типа? что умеют делаь сами объекты? что можно сделать с объектами?
    void Print() // посмотреть на дом
    {
        cout << "Этажность дома: " << storeys << "\n";
        cout << "Cколько балконов: " << balcony_count << "\n";
        cout << "Адрес дома: " << address << "\n";
    }

    void Sale() // дом можно продать
    {

    }

    void Repair() // дом можно отремонтировать
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
    // создание объекта класса House - по сути, это переменная с типом House
    House AlexHouse; // квартира Александра в Черновцах

    AlexHouse.balcony_count = 1;
    AlexHouse.address = "проспект Победы, 45";
    AlexHouse.storeys = 5;

    AlexHouse.Print();
}