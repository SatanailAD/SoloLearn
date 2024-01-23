
#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, World!";

    // Получаем указатель на массив символов
    const char* charArray = myString.c_str();

    // Выводим содержимое массива символов
    std::cout << charArray[0] << std::endl;

    return 0;
}



/*
class FriendClass {
private:
    int privateData;

public:
    FriendClass() : privateData(0) {}

    
    // Дружественная функция
    friend void friendFunction(FriendClass obj);

    // Дружественный класс
    friend class AnotherFriendClass;
};

// Дружественная функция
void friendFunction(FriendClass obj) {
    std::cout << "Private data: " << obj.privateData << std::endl;
}

// Дружественный класс
class AnotherFriendClass {
public:
    void accessPrivateData(FriendClass obj) {
        // Дружественный класс имеет доступ к закрытым членам
        std::cout << "Private data from AnotherFriendClass: " << obj.privateData << std::endl;
    }
};

int main()
{
    
}

*/