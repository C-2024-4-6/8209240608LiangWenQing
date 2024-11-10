#include <iostream>
using namespace std;

int main(){

    while(1){

	    double num1, num2 ,result;
	    char oper;
	    cout << "请输入两个数字" << endl;
	    cin >> num1 >> num2;
	    cout << "请输入运算符(+ - * / %):" << endl;
	    cin >> oper;

	    switch (oper){
        case'+':
	        result = num1 + num2;
	        break;
        case'-':
	        result = num1 - num2;
	        break;
	    case'*':
		    result = num1 * num2;
		    break;
	    case'/':
		    if (num2 == 0)
		    {
			    cout << "除数不能为0" << endl;
			    continue;
		    }
		    result = num1 / num2;
		    break;
	    case'%':
	    	if (num2 == 0)
    		{
		    	cout << "模数不能为0" << endl;
	    		continue;
    		}
		    result = (int)num1 % (int)num2;
	    	break;
    	default:
		    cout << "非法运算符" << endl;
		    continue;
	    }
	    cout << "结果是" << result << endl;
        system("pause");
	    return 0;

    }

}
