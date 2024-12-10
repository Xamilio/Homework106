#include <iostream>
using namespace std;

int main()
{
    double array[12];
    double sum = 0;
    int count = 0;
    cout << "Enter 12 real numbers: ";
    for (int i = 0; i < 12; ++i)
    {
        cin >> array[i];
    }

    double lastE = array[11];

    for (int i = 0; i < 12; ++i)
    {
        if (array[i] < lastE)
        {
            sum += array[i];
            ++count;
        }
    }

    cout << "Count of elements less than the last element: " << count << endl;
    cout << "Sum of these elements: " << sum << endl;

    // Оцінка складності: O(n), де n = 12.
}


#include <iostream>

int main() 
{
    int array[15];

    cout << "Enter 15 integers: ";
    for (int i = 0; i < 15; ++i) 
    {
        cin >> array[i];
    }

    int maxElement = array[0];
    int minElement = array[0];

    for (int i = 1; i < 15; ++i) 
    {
        if (array[i] > maxElement) 
        {
            maxElement = array[i];
        }
        if (array[i] < minElement) 
        {
            minElement = array[i];
        }
    }

    int sum = maxElement + minElement;
    int difference = maxElement - minElement;

    cout << "Sum of max and min elements: " << sum << endl;
    cout << "Difference of max and min elements: " << difference << endl;

    // Оцінка складності: O(n), де n = 15.
}

