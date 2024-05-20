#include <stdio.h>

class cricketer {
protected:
    char name[50];
    int age;

public:
    // Function to input data
    void input_data() {
        printf("Enter name of cricketer: ");
        scanf("%s", name);
        printf("Enter age of cricketer: ");
        scanf("%d", &age);
    }
};

class batsman : public cricketer {
private:
    int total_runs;
    double average_runs;
    int best_performance;

public:
    // Function to input data for batsman
    void input_data() {
        cricketer::input_data();
        printf("Enter total runs scored: ");
        scanf("%d", &total_runs);
        printf("Enter best performance (in a single match): ");
        scanf("%d", &best_performance);
    }

    // Function to calculate average runs
    void calculate_average_runs() {
        // Assuming an arbitrary number of matches played
        average_runs = (double)total_runs / 10; // Dividing total runs by 10 matches
    }

    // Function to display data
    void display_data() {
        printf("\nBatsman Information:\n");
        printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Total Runs: %d\n", total_runs);
        printf("Average Runs: %.2f\n", average_runs);
        printf("Best Performance (in a single match): %d\n", best_performance);
    }
};

int main() {
    batsman player;

    // Input data for batsman
    player.input_data();

    // Calculate average runs
    player.calculate_average_runs();

    // Display batsman's data
    player.display_data();

    return 0;
}
