/*
 * GOAL: Use the clue from Problem 1 to perform vector operations
 *
 * The program should:
 * 1. Take the positions from Problem 1's clue
 * 2. Use these as indices to access a vector
 * 3. Sum the values at these positions
 * 4. Generate a clue combining "FIBONACCI" and the sum
 *
 * Expected clue output: FIBONACCI_160
 * 
 * [0, 2, 4, 6]
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class VectorProcessor
{
private:
    vector<int> data;
    vector<int> cluePositions;

public:
    VectorProcessor()
    {
        data = {10, 20, 30, 40, 50, 60, 70, 80};
        cluePositions = {0, 2, 4, 6}; // From Problem 1
    }

    int processClue()
    {
        cout << "Using clue from Problem 1: [";
        for (int i = 0; i < cluePositions.size(); i++)
        {
            cout << cluePositions[i];
            if (i < cluePositions.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;

        cout << "Vector: [";
        for (int i = 0; i < data.size(); i++)
        {
            cout << data[i];
            if (i < data.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;

        int sum = 0;
        cout << "Values at clue positions: ";
        for (int i = 0; i < cluePositions.size(); i++)
        {
            int a = cluePositions[i];
            cout << data[a];
            sum += data[a];
            if (i < cluePositions.size() - 1)
                cout << ", ";
        }
        cout << endl;

        return sum;
    }

    string generateClue(int sum)
    {
        return "FIBONACCI_" + to_string(sum);
    }
};

int fib(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return fib(num - 1) + fib(num - 2);
}

int main()
{
    VectorProcessor processor;

    int result = processor.processClue();
    cout << "Sum of values: " << result << endl;

    string nextClue = processor.generateClue(result);
    cout << "Clue for Python problem: " << nextClue << endl;

    return 0;
}
/*
SOLUTION - PASTE YOUR CLUE HERE:
Member Name:Arnav 
Clue for Python problem: Clue for Python problem: FIBONACCI_160
*/
