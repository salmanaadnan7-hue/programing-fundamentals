#include <iostream>
using namespace std;

int main()
{
    const int cities = 5;
    const int hours = 6;
    const int size = cities * hours;
    double temp[size];

    cout << "Enter temperature data (" << hours << " hours) for each of the "
        << cities << " cities:" << endl;

    // Nested Input Loop
    for (int c = 0; c < cities; c++)
    {
        cout << endl << "City " << c + 1 << ":" << endl;
        for (int h = 0; h < hours; h++)
        {
            int index = c * hours + h; // Row-major mapping
            cout << " Hour " << h + 1 << ": ";
            cin >> temp[index];
        }
    }

    // Average Calculation for a Specific City
    int cityChoice;
    cout << endl << "Enter city number (1-5) to find its average temperature: ";
    cin >> cityChoice;

    double sum = 0;
    int start = (cityChoice - 1) * hours;
    for (int h = 0; h < hours; h++)
    {
        sum += temp[start + h];
    }
    cout << "Average temperature of City " << cityChoice
        << " = " << sum / hours << endl;

    // Finding Global Maximum
    double maxTemp = temp[0];
    int maxCity = 1;
    for (int i = 1; i < size; i++)
    {
        if (temp[i] > maxTemp)
        {
            maxTemp = temp[i];
            maxCity = (i / hours) + 1; // Reverse mapping to find city ID
        }
    }
    cout << "City with highest temperature = City " << maxCity
        << " (" << maxTemp << "C)" << endl;

    // Trend Analysis
    cout << endl << "Temperature Trend (increasing or decreasing) per city:" << endl;
    for (int c = 0; c < cities; c++)
    {
        int startIndex = c * hours;
        if (temp[startIndex + hours - 1] > temp[startIndex])
        {
            cout << "City " << c + 1 << ": Increasing trend" << endl;
        }
        else if (temp[startIndex + hours - 1] < temp[startIndex])
        {
            cout << "City " << c + 1 << ": Decreasing trend" << endl;
        }
        else
        {
            cout << "City " << c + 1 << ": No change" << endl;
        }
    }

    return 0;
}