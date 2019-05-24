#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <math.h>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

bool check(long long candies, long long boxes[], long long total, long long n)
{
    for (long long i = 0; i < n; i++)
    {
        total -= (boxes[i] / candies);
    }
    if (total <= 0)
        return true;
    return false;
}

int main()
{
    int counter = 0;
    int temp[2];
    long long max = 1000000000;

    long long a, boxes[50001];

    cin >> a;

    while (a--)
    {
        long long n, k;
        cin >> n >> k;

        for (long long i = 0; i < n; i++)
        {
            cin >> boxes[i];
        }

        long long start = 1, end = max, final = 0;

        while (start <= end)
        {
            long long middle = (start + end) / 2;
            if (check(middle, boxes, k, n))
            {
                final = final < middle ? middle : final

                start = middle + 1;
            }
            else
            {
                end = middle - 1;
            }
        }

        temp[counter] = int(final);
        counter++;
    }
    cout << temp[0] << endl;
    cout << temp[1];
}