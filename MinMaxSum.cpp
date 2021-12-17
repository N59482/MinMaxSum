#include<iostream>
#include<ctime>
#include<vector>

using namespace std;

// Вывод вектора
void Show(vector<int> n)
	{
 		for(auto it : n)
 			cout<<it<<" ";
 		cout<<endl;
	};
// Наполение вектора ГПСЧ
void rand_fill(vector<int> & n, int size, int Max_val)
 	{
 		if(Max_val > 0)
	 		{
	 		 	for(int i = 0; i < size; i++)
	 		 		{
	 		 			n.push_back(rand() % (Max_val) + 1);
	 		 		};
	 		};
 	};
/*
* Функция PairSum() возвращяет наименьшее возможное значение максимальной суммы пары двух элементов.
* Пары в векторе подбираются таким образом чтобы самое большое значение суммы двух элементов было как можно меньше.
* Функция принимает массив четной длинный и возвращет значение минимальной возможной максимальной суммы двух элементов.
* Сначала массив сортируется, потом с обоих концов числа начинают суммироваться друг с другом и находить максимальное значение пары двух чисел.
* Тем самым складывая самое большое число вектора (находящееся справа после сортировки) с самым маленьким - левым, мы получаем наименьшее занчние суммы для правого числа.
*/
int PairSum(vector<int> & nums)
	{
		sort(nums.begin(),nums.end());
		int max_pair = -2147483648;
		int il = 0;
		int ir = nums.size() - 1;
		while (il < ir)
			{
				max_pair = max(max_pair, (nums[il] + nums[ir]));
				il++;
				ir--;
			};
		return max_pair;
	};

int main()
 	{
 	    srand(time(0));
 	    vector<int> test;
 	    rand_fill(test, 10, 9);
 	    Show(test);
 	    int MinMaxSum = minPairSum(test);
 	    cout<<"MinMaxSum = "<<MinMaxSum<<endl;
 	};