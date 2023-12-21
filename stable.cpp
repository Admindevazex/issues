#include <bits/stdc++.h>
using namespace std;

int main() {
vector<pair<int, string>> data = {
{3, "Apple"},
{2, "Orange"},
{2, "Banana"},
{1, "Grape"},
{1, "Mango"}
};

sort(data.begin(), data.end());
cout << "After sorting using sort (unstable sort):" << endl;
for (const auto& pair : data) {
cout << pair.first << ": " << pair.second << endl;}
cout << endl;
data = {
{3, "Apple"},
{2, "Orange"},
{2, "Banana"},
{1, "Grape"},
{1, "Mango"}
};

stable_sort(data.begin(), data.end());
cout << "After sorting using stable_sort (stable sort):" << endl;
for (const auto& pair : data) {
cout << pair.first << ": " << pair.second << endl;}
return 0;
}
