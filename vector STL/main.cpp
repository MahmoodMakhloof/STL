#include<iostream>
#include<vector>

//vector is a dynamic array
using namespace std;

int main()
{
	vector<int>v1(5);//5 element with default 0
	vector<int>v2 = {1,2,3,4,5};
	vector<float>(5,1.5); //5 element with default 1.5

	cout<<v1[0]<<endl;
	cout<<v2[2]<<endl;

	v1.pop_back();
	v1.push_back(5);
	cout<<v1.back()<<endl;
	cout<<v1.front()<<endl;
	cout<<v1.at(2)<<endl;


	v2.push_back(7);
	cout<<v2.size()<<endl;
	cout<<v2.capacity()<<endl;
	cout<<v2.max_size()<<endl;


	vector<int>v4={10,20,30,40,50};


	//iterator acts as a pointer
	vector<int>::iterator it1 = v4.begin();
	for(; it1!=v4.end() ; it1++)
	{
		cout<<*it1<<endl;
	}

	vector<int>::reverse_iterator it2 = v4.rbegin();
		for( ; it2!=v4.rend() ; it2++)
		{
			cout<<*it2<<endl;
		}

	vector<int>::const_iterator it3 = v4.cbegin();
		for( ; it3!=v4.cend() ; it3++)
		{
			cout<<*it3<<endl;
		}

	vector<int>::const_reverse_iterator it4 = v4.crbegin();
		for( ; it4!=v4.crend() ; it4++)
		{
			cout<<*it4<<endl;
		}

//auto keyword , compiler choose the data type by itself
	auto it5 = v4.begin();
			for( ; it5!=v4.end() ; it5++)
			{
				cout<<*it5<<endl;
			}
	//copy from v4 vector
	vector<int>vec(v4);

	//insert slower than emplace but the same function
	vec.insert(vec.begin(),0);
	vec.insert(vec.end(),100);

	vec.emplace(vec.begin()+1,0);
	vec.emplace(vec.end()-1,100);
	//erase third element
	vec.erase(vec.begin()+2);
	//erase from second to end
	vec.erase(vec.begin()+1,vec.end());

	//after resize all elements still there
	//after call shrink_to_fit the element that i want still and others erased
	vec.resize(3);
	vec.shrink_to_fit();


	return 0;
}
