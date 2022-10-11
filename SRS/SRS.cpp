
#include <iostream>
using namespace std;

int line1()
{
	float M, S, F;
	S = 0.01;
	cout << "Введите массу:";
	cin >> M;
	cout << M * 10 / S << "ps";
	return 0;
}
int line2()
{
	float V, R, F;
	cout << "\nВведите обьем:";
	cin >> V;
	V = V / 2;
	cout << "Сила =" << 1000 * V * 10;
	return 0;
}
int line3()
{
	float M, q, Q, m;
	cout << "\nВведите m:";
	cin >> m;
	cout << "Q =" << 46000000 * m;
	return 0;
}
int line4()
{
	float	I, U, R;
	cout << "\nВведите напряжение U (В)";
	cin >> U;
	cout << "Введите сопротивление R (Ом)";
	cin >> R;
	cout << "I =" << U / R << "(A)";
	return 0;
}
int line5()
{
	float R, R1, R2, R3, U, I;
	cout << "Введите R1:";
	cin >> R1;
	cout << "Введите R2:";
	cin >> R2;
	cout << "Введите R3:";
	cin >> R3;
	cout << "R =" << R1 + R2 + R3;
	cout << "\nВведите Силу Тока I (A)";
	cin >> I;
	cout << "Введите Сопротивление R (Ом)";
	cin >> R;
	cout << "U =" << I * R;
	return 0;
}
int line6()
{
	float R, U, I;
	cout << "\nВведите напряжение U (B)";
	cin >> U;
	cout << "Введите сопротивление R (Ом)";
	cin >> R;
	cout << "I=" << U / R << "(А)";
	return 0;
}
int braching1()
{
	int x;
	cout << "Введите число:";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "четное";
	}
	else
	{
		cout << "нечетное";
	}
	return 0;
}
int braching2()
{
	int x;
	cout << "Введите число:";
	cin >> x;
	if (x <= 10)
	{
		cout << "Входит";
	}
	else
	{
		cout << "Не входит";
	}
	return 0;
}
int braching3()
{
	int a, b; float m;
	cout << "Введите число:";
	cin >> a;
	cout << "Введите число:";
	cin >> b;
	if (a > b) m = a;
	else m = b;
	cout << "большее число:" << m;
	return 0;
}
int braching4()
{
	int a, b, c; float result;
	cout << "Введите число:";
	cin >> a;
	cout << "Введите число:";
	cin >> b;
	cout << "Введите число:";
	cin >> c;
	if (a > b) result = a;
	else if (a < b) result = b;
	else result = c;
	cout << "лучший результат:" << result;
	return 0;
}
int braching5()
{
	int a, b, x = 0; float y = 5 * (x * x) - 7 * x + 2;
	cout << "Введите a:";
	cin >> a;
	cout << "Введите b:";
	cin >> b;
	if (b = 5 * (x * x) - 7 * x + 2);
	else (a = 5 * (x * x) - 7 * x + 2);
	cout << "Ваш ответ:";
	cout << y;
	return 0;
}
int choose1()
{
	char(a);
	cin >> a;
	switch (a)
	{
	case '+':cout << "символ оператора";
		break;
	case '-':cout << "символ оператора";
		break;
	case '*':cout << "символ оператора";
		break;
	case '=':cout << "символ оператора";
		break;
	case '<':cout << "символ оператора";
		break;
	case '>':cout << "символ оператора";
		break;
	case '/':cout << "символ оператора";
		break;
	case ',':cout << "знак пунктуации";
		break;
	case ';':cout << "знак пунктуации";
		break;
	case '(':cout << "знак пунктуации";
		break;
	case ')':cout << "знак пунктуации";
		break;
	default:cout << "цифра";
	}
	return 0;
}
int choose2()
{
	double a, b, result = 0.0;
	char NextCh;
	cout << "Введите первые значение: " << endl;
	cin >> a;
	cout << "Введите второе значение: " << endl;
	cin >> b;
	cout << "Выберите одну из операции:" << endl;
	cout << "Вычитание -" << endl;
	cout << "Сложение +" << endl;
	cout << "Умножение *" << endl;
	cout << "Деление /" << endl;
	cin >> NextCh;

	switch (NextCh)
	{
	case '-':
		cout << "a - b = " << a - b << '\n';
		break;
	case '+':
		cout << "a + b = " << a + b << '\n';
		break;
	case '*':
		cout << "a * b = " << a * b << '\n';
		break;
	case '/':
		cout << "a / b = " << a / b << '\n';
		break;
	default:
		cout << "Error\n";
	}
	return 0;
}
int choose3()
{

	return 0;
}
int choose4()
{
	int k;
	cout << "Введите количество найденных грибов(k):";
	cin >> k;
	switch (k % 10)
	{
	case 1: cout << "Мы нашли в лесу " << k << " гриб"; break;
	case 2: cout << "Мы нашли в лесу " << k << " гриба"; break;
	case 3: cout << "Мы нашли в лесу " << k << " гриба"; break;
	case 4: cout << "Мы нашли в лесу " << k << " гриба"; break;
	default: cout << "Мы нашли в лесу " << k << " грибов"; break;
	}
	return 0;
}
int choose5()
{
	int a, n;
	cout << "введите номер месяца:";
	cin >> n;
	cout << "если год високосный введите 1 иначе введите 0";
	cin >> a;
	switch (n) {
	case 1:cout << "в январе 31 день";
		break;
	if (a == 1) case 2:cout << "в феврале 29дней";
					  else cout << "в феврале 28 дней";
					  break;
	case 3:cout << "в марте 31 день";
		break;
	case 4:cout << "в апреле 30 дней";
		break;
	case 5:cout << "в мае 31 день";
		break;
	case 6:cout << "в июне 30 дней";
		break;
	case 7:cout << "в июле 31 день";
		break;
	case 8:cout << "в августе 31 день";
		break;
	case 9:cout << "в сентябре 30 дней";
		break;
	case 10:cout << "в октябре 31 день";
		break;
	case 11:cout << "в ноябре 30 дней";
		break;
	case 12:cout << "в декабре 31 день";
		break;
		return 0;
	}
}
int cycle1()
{
	int i, n, sum = 0;
	cout << "Введите значение:";
	cin >> n;
	for (i = 1; i < n + 1; i++)
	{
		cout << i << " ";
		sum = sum + i;
	}
	cout << sum;
	return 0;
}
int cycle2()
{
	int i = 1, s = 0;
	while (i < 100)
	{
		if (i % 2 != 0)
			s = s + i;
		i = i + 1;
	}
	cout << "сумма нечетных чисел: " << s;
	return 0;
}
//int cycle3() 
//{


	//return 0;
//}
int cycle4()
{
	int n;
	cin >> n;
	double s = 0.0;

	for (int i = 1; i <= n; i++)
		s = s + 1.0 / (double)i;

	cout << s;
	return s;
}
int cycle5()
{
	int a, b, t;
	a = 0;
	b = 1;
	cout << "Введите кол-во времени (minute):";
	cin >> t;
	while (a < t)
	{
		b = b * 2;
		a = a + 1;
	}
	cout << a;
	return 0;
}



int main()
{
	setlocale(LC_ALL, "Russian");
	//line1();
	//line2();
	//line3();
	//line4();
	//line5();
	//line6();
	//braching1();
	//braching2();
	//braching3();
	//braching4();
	//braching5();
	//choose1();
	//choose2();
	//choose3();
	//choose4();
	//choose5();
	//cycle1();
	//cycle2();
	//cycle3();
	//cycle4();
	//cycle5();
}