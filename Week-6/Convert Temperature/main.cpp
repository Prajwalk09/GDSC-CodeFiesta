#include <iostream>
#include<vector>
using namespace std;
/* Question Link: https://leetcode.com/problems/convert-the-temperature/ */
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        double kelvin, farenheit;
        kelvin = celsius + 273.15;
        farenheit = (1.8 * celsius) + 32;
        vector<double> values;
        values.push_back(kelvin);
        values.push_back(farenheit);

        return values;
    }
};

int main()
{
    Solution obj;
    double celsius = 122.11;
    vector<double> temp = obj.convertTemperature(celsius);
    for(auto it: temp)
        cout<<it<<" ";
    return 0;
}
