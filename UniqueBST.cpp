/*
�������ڸ���n���������1-n n���ڵ��ܹ���ɶ����ֲ�ͬ��BST
��ʵ�����ò��ķ�����϶�̬�滮��˼�� ���統n=4ʱ BST������Ϊ�ֱ���1 2 3 4Ϊ��ʱ��BST����
������ÿ���ֵ�����������BST�����ĳ˻� ����root=3ʱ leftΪ1 2 ������������Ϸ��� ��rightΪ4 ֻ��1��BST 
��˵�root=3ʱBST����Ϊ2*1=2 ͬ��root=4ʱBST����Ϊnums[3]*1
����n�ǲ��� ���鲻ȷ��Ҫ������� ������һ��vector�洢���ڵ���Ϊ1-nʱ��BST���� 
*/
#include <cstdio>
#include <vector>
using namespace std;

class Solution {
public:
	int numTrees(int n) {
		vector<int> nums;
		nums.push_back(1);//0
		nums.push_back(1);//1
		int sum;
		for (int i=2;i<=n;++i)
		{
			sum=0;
			for (int j=1;j<=i;++j)
				sum+=nums[j-1]*nums[i-j];
			nums.push_back(sum);
		}
		return nums[n];
	}
};

int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		Solution s;
		printf("%d\n",s.numTrees(n));
	}	
	return 0;
}