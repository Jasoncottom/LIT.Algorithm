#include<iostream>
/*
	实验一：用循环、递归、分治三种方法求一维数组元素最大值 
	GAVT
	2022.3.11
*/
using namespace std;
int loop(int data[],int len)
{
	int max=data[0];
	for(int i=0;i<=len;i++){
		if(max>=data[i]);
		else
			max=data[i];
	}
	return max;
}

int recursion(int data[], int len)
{
	if (len==1)
    	return data[0];
	int t = data[len-1];
    return t>recursion(data,len-1) ? t:recursion(data, len-1);	
}

int dac(int a[],int l,int r) {
int u,v;
int m=(l+r)/2;
	if (l==r) 
		return a[l];
	u=dac(a,l,m);
	v=dac(a,m+1,r);
return (u>v?u:v);
}

int main()
{
	int a[12]={4,9,78,62,48,72,15,49,29,84,62,34};
	int loop_max,recursion_max,dac_max;
	loop_max=loop(a,12);
	
	recursion_max=recursion(a,12);
	dac_max=dac(a,0,12);
	cout<<"循环方法求最大值："<<loop_max<<endl<<"递归方法求最大值："<<recursion_max<<endl<<"分治方法求最大值："<<dac_max<<endl; 
} 

