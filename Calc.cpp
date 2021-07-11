//Calc-一个命令行计算器
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include "EVERY_TR.h"

using namespace std;
void vers();
void camenu();//显示菜单
void MPlus();
void MJian();
void MCheng();
void MChu();
void Mp();//！运算
void Cifang();//x次方运算
void Jinzhi();
void yushu();
void TR();
void TEMPR();
void Weight();
void KMalloc(int choice);
long double f,x,t,r,i;
char EnT = '\r';

int main()
{
	vers();
   cout << "2020-2021 Akarisoft Corporation(c)版权所有 编译日期：2021/6/6\n\n 输入\"q\"以退出哦~ \n\n"
		<< "输入\"h\"以获取帮助\n"
		<< "请输入对应运算符号哦~\n";
	camenu();
	char choice;
	cout << "\n>>>";
	cin >> choice;

	while (choice != 'q' && choice != 'Q')//循环判断退出程序，也许可以EXIT_FAILURE
	{

		switch (choice)
		{
		case '\r': {
			cout << "\n>>>";
		}
		    break;
		case'+':MPlus();
			break;
		case'-':MJian();
			break;
		case'*':MCheng();
			break;
		case'/':MChu();
			break;
		case'!':Mp();
			break;
		case'^':Cifang();
			break;
		case'V':
		case'v':vers();/*显示版本号*/
			break;
		case'A':
		case'a':
		    {
			system("cls");
			cout << "************************************************************************************\n"
				"这里是作者~~\n有什么bug请和我说哦~\n"
				"B站uid454258954\n" 
				"邮箱:2318326683@qq.com\n"
			 "每一个数字的内存地址是：\nf:" << &f << "\nx:" << &x << "\nt:" << &t << "\nr:" << &r << "\ni:" << &i<<
				"占用您的计算机一共："<<sizeof f+sizeof x+sizeof t+sizeof r+sizeof i<<"Byte内存"
				"\n\n介绍：\n"<<"本程序由个人开发\n可以进行进制转换，四则运算\n多数字运算功能、单位转换等等\n"
				"************************************************************************************\n";
		    }//测试内存地址，每一个机子都不一样
		    break;
		case't':
		case'T':TR();
			break;
		case 'h':
		case'H':camenu();
			break;
		case'R':
		case'r':Jinzhi();
			break;
		case'%':yushu();
			break;
		case'c':
		case'C':system("cls");
			break;
		default:
		    {
			cout << "你发现了一个神奇的彩蛋！~~" << endl;
			cout << "康康你输入的是什么~\a" << endl;
		    }
			break;
		}
		cout << "\n>>>";
		cin>>choice;
	}
	return 0;
}
char Cm;//做选择用(你可以看到下面的if语句)
void vers() 
{
	cout << "CalcCommand[版本2.30,x86,build 750]\n";
}
void camenu()
{
	cout<< "1.加法(+)      2.减法(-)\n3.乘法 (*)     4.除法(/)\n5.!运算(!)     6.乘方/开方(^)\n7.余数(%)    T.单位转换\nA.查看此程序说明&使用的内存地址\nR.进制转换    C:清屏";
}
void MPlus()
{
	system("cls");//这里是为了清屏用，下面函数相同
	cout << "请输入一个加数:";
	cin >> f;
	cout << "\n请输入第二个加数:" ;
	cin >> x;
	cout << "\n是否输入第三个加数（y/n）？";
	cin >> Cm;
	if (Cm == 'y' || Cm == 'Y')//为了判断你是不是要输入第三个
	{
		cout << "\n请输入第三个加数：";
		cin >> t;
		cout << "\n如果下面没有加数输入，请在表达式中键入0";//折中方案
		cout << "\n请输入第四个加数：";
		cin >> r;
		cout << "\n请输入最后一个加数：";
		cin >> i;
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f + x + t + r + i << "\n" << endl;
	}
	else if (Cm == 'n' || Cm == 'N')
	{
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f + x << "\n" << endl;
	}
	else//为了判断你是不是输入了其他什么奇怪的东西啊baka。
	{
		cout << "\n你输入的什么qwq~~\a\n";
		cout << "所以最终结果=" << f + x << "\n" << endl;
	}
}
//下面结构差不多，不解释了
void MJian()
{
	system("cls");
	cout << "请输入一个减数:";
	cin >> f;
	cout << "\n请再输入一个减数:";
	cin >> x;
	cout << "\n是否输入第三个减数（y/n）？";
	cin >> Cm;
	if (Cm == 'y' || Cm == 'Y')
	{
		cout << "\n请输入第三个减数：";
		cin >> t;
		cout << "\n如果下面没有减数输入，请在表达式中键入0";
		cout << "\n请输入第四个减数：";
		cin >> r;
		cout << "\n请输入最后一个减数：";
		cin >> i;
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f - x - t - r - i << "\n" << endl;
	}
	else if (Cm == 'n' || Cm == 'N')
	{
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f - x << "\n" << endl;
	}
	else
	{
		cout << "\n你输入的什么qwq~~\a\n";
		cout << "所以最终结果=" << f - x << "\n" << endl;
	}
}
void MCheng()
{
	system("cls");
	cout << "请输入一个乘数:";
	cin >> f;
	cout << "\n请再输入一个乘数:";
	cin >> x;
	cout << "\n是否输入第三个乘数（y/n）？";
	cin >> Cm;
	if (Cm == 'y' || Cm == 'Y')
	{
		cout << "\n请输入第三个乘数：";
		cin >> t;
		cout << "\n如果下面没有乘数输入，请在表达式中键入1";
		cout << "\n请输入第四个乘数：";
		cin >> r;
		cout << "\n请输入最后一个乘数：";
		cin >> i;
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f * x * t * r * i << "\n" << endl;
	}
	else if (Cm == 'n' || Cm == 'N')
	{
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f * x << "\n" << endl;
	}
	else
	{
		cout << "\n你输入的什么qwq~~\a\n";
		cout << "所以最终结果=" << f * x << "\n" << endl;
	}
}
void MChu()
{
	system("cls");
	cout << "请输入一个除数:";
	cin >> f;
	cout << "\n请再输入一个除数:";
	cin >> x;	
	cout << "\n是否输入第三个除数（y/n）？";
	cin >> Cm;
	if (Cm == 'y' || Cm == 'Y')
	{
		cout << "\n请输入第三个除数：";
		cin >> t;
		cout << "\n如果下面没有除数输入，请在表达式中键入1";
		cout << "\n请输入第四个除数：";
		cin >> r;
		cout << "\n请输入最后一个除数：";
		cin >> i;
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f / x / t / r / i << "\n" << endl;
	}
	else if (Cm == 'n' || Cm == 'N')
	{
		cout << "\n计算ing......" << endl;
		cout << "\n结果=" << f / x << "\n" << endl;
	}
	else
	{
		cout << "\n你输入的什么qwq~~]\a\n";
		cout << "所以最终结果=" << f / x << "\n" << endl;
	}
}
void Cifang()//这个函数在输入幂时有惊喜
{
	system("cls");
	cout << "请输入底数:";
	cin >> f;
	cout << "\n请输入幂:";
	cin >> x;
	cout << "\n计算ing......" << endl;
	cout << "\n结果=" << pow(f,x) << "\n" << endl;
}
void Mp()
{
	system("cls");
	double factorial = 1;
	cout << "请输入一个整数: ";
	cin >> f;
    for (int i = 1; i <= f; ++i)
	{
		factorial *= i;
	}
    cout << f<< " 的阶乘= " << factorial;
}
void Jinzhi()
{
	system("cls");
	cout << "请输入一个十进制整数:";
	cin >> f;
	cout << hex<< "\n此数字的十六进制为:" << long long(f) << endl;
	cout << oct << "此数字的八进制为:" <<long long (f)<<endl;
}//我看看能不能写二进制（binary）
void yushu()
{
	system("cls");
	cout << "----------------------------------------------------------------------------\n"
		<<"作者声明：这个程序目前只能接受两个整数数余数运算\n"
		<< "----------------------------------------------------------------------------\n"
		"请输入第一个数:";
	cin >> f;
	cout << "\n请输入最后一个数:";
	cin >> x;
	cout << "\n计算ing......"
		"\n结果="<<(long long)f%(long long)x;
}//取余数必须要整型，浮点数没用，所以必须强制转换
void TR()
{
	char chose;
	system("cls");
	cout << "--------------------------------------------------------\n"
		"                    欢迎来到单位转换\n"
		"             虽然做得不是很好，但是希望你多多提意见~\n"
		"----------------------请选择你要执行的功能----------------------"
		"\n            1.温度（M/Enter）     2.质量（W)    \n            3.电脑存储单位(C)      4.退出(#)\n\nUsing:TR ##";
	cin >> chose;
	while (chose != '#')
	{
		switch (chose) 
		{
		case'm':
		case'M':TEMPR();
			break;
		case 'W':
		case 'w':Weight();
			break;
		case'C':
		case'c':KMalloc(0);
			break;
		default:cout << "QwQ\a\n";
			break;
		}
		cout << "\nUsing:TR ##";
		cin>>chose;
	}
}
/*下面都是转换单位的*/
void TEMPR()
{
	long TRCHO;
	cout << "你需要的是1.华氏度（℉）还是2.摄氏度(℃)？";
	cin >> TRCHO;
	if (TRCHO == 2)
	{
		cout << "请输入摄氏度...";
		cin >> i;
		cout << i << "℃是" << i * 1.8 +32 << "℉\n也是" << 273.15 + i << "开尔文";
	}
	else if (TRCHO == 1)
	{
		cout << "请输入华氏度...";
		cin >> i;
		cout << i << "℉是" << (i - 32) / 1.8 << "℃\n也是" << 273.15+(i - 32) / 1.8  << "开尔文";
	}
	else
		cout << "你输入的什么（awsl）\a\n";
 }
void Weight()
{
	long WECHO;
	cout << "1.千克  2.克  3.吨\n请输入你的选择：";
	cin >> WECHO;
		if (WECHO == 1)
		{
			cout << "请输入千克：";
			cin >> r;
			cout << r << "KG=" << 1000 * r << "G=" << 0.001 * r << "T";
		}
		else if (WECHO == 2)
		{
			cout << "请输入克：";
			cin >> r;
			cout << r << "G=" << 0.001 * r << "KG=" << 0.001 * 0.001 * r << "T";
		}
		else if (WECHO == 3)
		{
			cout << "请输入吨：";
			cin >> r;
			cout << r << "T=" << 1000 * r << "KG=" << 1000 * 1000 * r << "G";
		}
		else {
			cout << "嗯?\a";
		}
}

void KMalloc(int choice)
{ 


	cout << "This is a mode of calc' the computer storage unit.\n"
		"The Storage of this num' is : " << sizeof(kma) << " B\n";
		printf("%d1:KB  2:MB  3:GB  4:TB ",1);
	cout<<"\nEnter a choice:";

	cin >> choice;
	while(choice!=6)
	{
		switch (choice)
		{
		case 1: {
			cout << "Enter a number,in KB";
			cin >> kma;
			cout << endl << kma << "kb,is:\n" << CKiB_B << " Byte\t"
				<< CiB_KiB << " MB\t" << CiB_MiB << " GB\t"
				<< CiB_GiB << " TB\t";
		}
		}
	}
}
/*不会有人发现我吧，不会吧不会吧~~*/