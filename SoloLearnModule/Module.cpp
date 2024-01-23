#include <iostream>
#include <string>

int main() {
    std::string myString;
    std::cin >> myString;

    char charArray[myString.length() + 1];

    std::copy(myString.begin(), myString.end(), charArray);

    charArray[myString.length()] = '\0';

    std::cout << charArray << std::endl;

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