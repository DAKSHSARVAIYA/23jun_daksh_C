#include <stdio.h>
#include <cstdlib>

class Matrix {
private:
    int size;
    int *data;

public:
    // Constructor to initialize matrix with given size
    Matrix(int s) {
        size = s;
        data = new int[size];
    }

    // Destructor to free dynamically allocated memory
    ~Matrix() {
        delete[] data;
    }

    // Overloading '+' operator to perform addition of two matrices
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            fprintf(stderr, "Matrix sizes are not equal. Addition cannot be performed.\n");
            exit(1);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to display matrix
    void display() {
        for (int i = 0; i < size; ++i) {
            printf("%d ", data[i]);
        }
        printf("\n");
    }
};

int main() {
    int size;
    printf("Enter size of matrices: ");
    scanf("%d", &size);

    // Create two matrices
    Matrix matrix1(size);
    Matrix matrix2(size);

    // Input elements of first matrix
    printf("Enter elements of first matrix: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &matrix1.data[i]);
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &matrix2.data[i]);
    }

    // Perform addition of matrices and display the result
    Matrix result = matrix1 + matrix2;
    printf("Resultant matrix after addition: ");
    result.display();

    return 0;
}
