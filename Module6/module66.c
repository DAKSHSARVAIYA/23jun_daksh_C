#include <stdio.h>
#include <cstring>

class MyString {
private:
    char *str;

public:
    // Constructor to initialize the string
    MyString(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor to free dynamically allocated memory
    ~MyString() {
        delete[] str;
    }

    // Overloading '+' operator to concatenate two strings
    MyString operator+(const MyString& other) const {
        char *newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        MyString result(newStr);
        delete[] newStr;
        return result;
    }

    // Function to display the string
    void display() const {
        printf("%s", str);
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    // Concatenate two strings using '+' operator
    MyString result = str1 + str2;

    // Display the concatenated string
    printf("Concatenated string: ");
    result.display();
    printf("\n");

    return 0;
}

