/*
Given an int array which might contain duplicates, find the largest subset of it which form a sequence. Ex: {1,6,10,4,7,9,5} then ans is 4,5,6,7

Sorting is an obvious solution. Can this be done in O(n) time ??
*/

#include <bits/stdc++.h>
using namespace std;
struct range {
	int start;
	int end;
	range(int s, int e) {start=s; end=e;}
};

void find_longest_consecutive_numbers(vector<int>& N)
{
	unordered_map<int,range> hash;
	unordered_map<int,range>::iterator left, right;

	range max_range(0,0);
	int max_length=0;

	for(int i=0; i<N.size(); i++) {		
		range r(N[i],N[i]);

		left = hash.find(N[i]-1);
		right = hash.find(N[i]+1);
		
        // update range r
		if( left!=hash.end() ) 
			r.start = left->second.start;
		if( right!=hash.end() )
			r.end = right->second.end;

		// update hash table
		if( left!=hash.end() ) 
			left->second.end = r.end;
		if( right!=hash.end() )
			right->second.start = r.start;

		// insert range r
		hash.insert(make_pair(N[i],r));

		// check if this range was the longest
		if( r.end-r.start+1 > max_length ) {
			max_length = r.end-r.start+1;
			max_range.start = r.start;
			max_range.end = r.end;
		}
	}

	printf("longest range = %d : %d\n", max_range.start, max_range.end);
}
int main(){
 vector<int> arr={1,6,10,4,7,9,5} ;
 find_longest_consecutive_numbers(arr);
 return 0;
}
