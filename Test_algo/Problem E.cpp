#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int temp;
    while (true)
    {
        cin >> temp;
        if (temp == 0)
        {
            return 0;
        }
        int first [temp];
        for (int i = 0; i < temp; i++)
        {
            cin >> first[i];
        }
        stack<int> lane;
        int temp1 = 1;
        bool state = true;
        for (int i = 0; i < temp; i++)
        {
            while (!lane.empty() && lane.top() == temp1)
            {
                temp1++;
                lane.pop();
            }
            if (first[i] == temp1)
            {
                temp1++;
            }
            else if (!lane.empty() && lane.top() < first[i])
            {
                state = false;
                break;
            }
            else
            {
                lane.push(first[i]);
            }
        }
        if (state)
        {
            cout << "yes"
                 << "\n";
        }
        else
        {
            cout << "no"
                 << "\n";
        }
    }
}
