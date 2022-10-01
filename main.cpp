#include <iostream>

using namespace std;

int main()
{
    float temperature;
    cout << "Maukan temperature : "<< endl;
    cin >> temperature;
    if (temperature <= 0)
    {
        cout << "ice" << endl;
    } else if (temperature > 100) {
        cout << "gas" << endl;
    } else {
        cout << "liquid" << endl;
    }
    return 0;
}
