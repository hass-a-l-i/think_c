#include "include.h"

/*
Encapsulate the single pass histogram from 

int num_values = 100000;
int upper_bound = 10;
vector<int> vector = random_vector(num_values, upper_bound);
vector<int> histogram(upper_bound);

for (int i = 0; i < upper_bound; i++) {
    int count = how_many(vector, i);
    histogram[i] = count;
}

in a function named histogram that takes a vector and returns a histogram of the values in the vector.
*/

vector<int> random_vector(int n, int upper_bound)
{
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % upper_bound;
    }

    return vec;
}

int how_many(const vector<int>& vec, int value)
{
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) count++;
    }
    return count;
}

vector<int> histogram(vector<int> x, int num_values)
{
    int count = 0;
    vector<int> histogram(num_values);
    for (int i = 0; i < x.size(); i = i + 1)
    {
        int count = how_many(x, i);
        histogram[i] = count;
    }
    return histogram;
}

int main()
{
    int num_values = 1000;
    int upper_bound = 10;
    vector<int> rand_vector = random_vector(num_values, upper_bound);
    vector<int> hist = histogram(rand_vector, num_values);
    int i = 0;
    cout << "value\thow many" << endl;
    for (int i = 0; i < upper_bound; i = i + 1)
    {
        cout << rand_vector[i] << "\t" << hist[i] << endl;
    }
}