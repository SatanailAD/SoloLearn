
#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, World!";

    // �������� ��������� �� ������ ��������
    const char* charArray = myString.c_str();

    // ������� ���������� ������� ��������
    std::cout << charArray[0] << std::endl;

    return 0;
}



/*
class FriendClass {
private:
    int privateData;

public:
    FriendClass() : privateData(0) {}

    
    // ������������� �������
    friend void friendFunction(FriendClass obj);

    // ������������� �����
    friend class AnotherFriendClass;
};

// ������������� �������
void friendFunction(FriendClass obj) {
    std::cout << "Private data: " << obj.privateData << std::endl;
}

// ������������� �����
class AnotherFriendClass {
public:
    void accessPrivateData(FriendClass obj) {
        // ������������� ����� ����� ������ � �������� ������
        std::cout << "Private data from AnotherFriendClass: " << obj.privateData << std::endl;
    }
};

int main()
{
    
}

*/