/*


Give an array which has n integers,it has both positive and negative integers.Now you need sort this array in a special way.After that,the negative integers should in the front,and the positive integers should in the back.Also the relative position should not be changed. eg. -1 1 3 -2 2 ans: -1 -2 1 3 2.

O(n)time complexity and O(1) space complexity is required .

*/

import java.util.*;
import java.lang.*;
import java.io.*;


/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void sortNegPosSwap(int[] arr)
	{
		int[] neg = new int[arr.length];
		int numNeg = 0;
		int currNeg = -1;
		int numNegSoFar = 0;
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] < 0)
			{
				neg[numNeg++] = arr[i];	
			}
		}
		for(int i = arr.length - 1; i >= 0; i--)
		{
			if(numNegSoFar != 0 && arr[i] >= 0)
			{
				arr[i + numNegSoFar] = arr[i];	
			}
			if(arr[i] < 0)
			{
				numNegSoFar++;
			}
		}
		for(int i = 0; i < numNeg; i++)
		{
			arr[i] = neg[i];
		}
		for(int i=0;i<arr.length;i++)
		System.out.println(arr[i]+" ");
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		int arr[]={-1 ,1 ,3 ,-2, 2};
		Ideone.sortNegPosSwap(arr);
	}
}
