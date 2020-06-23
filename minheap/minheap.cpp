#include<iostream>
using namespace std;

int swap(int& x , int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
//Below class is used to implement the Minheap
class MinHeap{

	int size;
	int* arr;
    
    public:
       Minheap(int size, int input[]);
       void heapify(int i);
       void buildheap();
};


Minheap::Minheap(int size , int input[])
{
	this->size = size;
	this->arr = input;

	buildheap();
}

void Minheap::heapify(int i)
{
	if(i >= size/2)
	{
		return;
	}

	int smallest;
	int left = 2*i + 1;
	int right = 2*i + 2;


	smallest = arr[left] <arr[i] ? left :i;

	if(right < size)
	{
		smallest = arr[right] <arr[smallest] ? right:smallest;
	}

	if(smallest != i)
	{
		swap(arr[i],arrp[smallest]);
		heapify(smallest);
	}
}


void Minheap::buildheap()
{
	for(int i = size/2 - 1; i >= 0; i--)
	{
		heapify(i);
	}
}

