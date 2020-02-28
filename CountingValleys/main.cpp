#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, std::string s)
{
    int level=0;
    int valleys=0;

    for (auto c:s)
    {
        if(c == 'U')
        {
            if(level == -1)
                valleys++;

            level++;
        }
        else
        {
            level--;
        }
    }

    return valleys;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}


