#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <map>					//������Ҫmap������Ҫ����ͷ�ļ���һ��<>�Ǳ�׼ͷ�ļ�����""�Ƿ�ϵͳͷ�ļ�
//��Ŀ������
//���۵�һ�⣬�ǳ����� ,��hash��ʵ��
//����һ���������� nums��һ������Ŀ��ֵ target ,�ڸ��������ҳ���ΪĿ��ֵtarget���������������������ǵ������±�
//����ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��в����ظ�����
//����һ���࣬���������

//����˼·������Ŀ���target"  ��ȥ  �����е�һ���������һ������forѭ���� �Ĳ�    ������m���ҵ��ˣ���ô�ͽ����m����keyֵ��ָ���ʵֵ���� b[0],����һ�������±꣬�����������Ǹ�
//�����±긳��b[1],���ڶ��������±ꡣ
//�������������m��û�ҵ����ͽ���������±���Ϊʵֵ���������Ϊkeyֵ������map�����С�

//ע�� map<int,int>�����е�һ��intΪkeyֵ���ڶ���keyֵΪʵֵ��Ĭ����key����������


class Solution
{
	//�����϶��ǹ�����
public:
	vector<int> Twosum(vector<int>& nums, int target)		//���е�һ����Ա��������������Twosum,����ֵ��һ��vector<int>�����������б���һ��vector<int>��������װ�����飬����һ��\
															int ��������װ�������ĺ͡�
	{
		map<int, int> m;									//����һ��hash��������������±�
		vector<int> b(2, -1);								//����һ��vector<int>����������������֮��Ϊtarget������������vector<int> nums�е��±꣬��ʼ��Ϊ��С2������ʼֵΪ-1��
		for (int i = 0; i < nums.size(); i++)				//��ʼѭ���ˣ��������һ����ʼ����
		{
			if (m.count(target - nums[i]) > 0)				
			{
				b[0] = m[target - nums[i]];
				b[1] = i;
				break;
			}
			m[nums[i]] = i;
		}
		return b;
	}
};

void test01()
{
	int testnumarray[] = { 1,4,6,7,11,14,19 };
	int target = 33;
	vector<int> nums(testnumarray, testnumarray + sizeof(testnumarray) / sizeof(int));
	Solution solution;
	cout << "����Ϊ��";
	for (int i = 0; i < nums.size(); i++)
	{
		cout <<nums[i] << " ";
	}
	cout << endl;
	cout << "Ŀ���Ϊ��" << target << endl;
	cout << "��һ�������±�Ϊ: " << solution.Twosum(nums, target)[0] << endl;
	cout << "�ڶ��������±�Ϊ��" << solution.Twosum(nums, target)[1] << endl;

}


int main() {

	test01();






	system("pause");
	return 0;
}