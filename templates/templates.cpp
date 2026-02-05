#include<iostream>
using namespace std;
typedef unsigned long ul;

template <typename T>
class myvector {

    T* data;
    ul capacity;
    ul length;

    public:
    myvector() : length(0) , capacity(1) {
        data = new T[capacity];
    };

    void increaseCapacity(ul newcap)
    {
        T* newdata = new T[newcap];

        for(int i = 0; i<length; i++)
        {
            newdata[i] = data[i];
        }

        this->capacity = newcap;
        data = newdata;

    }


    public:

    void push_back(T value)
    {
        if(length == capacity)
        {
            increaseCapacity(capacity*2);
        }
        data[length++] = value;
    }

    ul size()
    {
        return length;
    }

    void pop_back()
    {
        length--;
    }

    T operator[](ul index)
    {
        return data[index];
    }

    ~myvector()
    {
        delete[] data;
    }

};


int main()
{
    myvector<string> v;

    v.push_back("string");
    v.push_back("string1");
    v.push_back("string2");
    v.push_back("string3");
    
    for(int i = 0; i< v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

}