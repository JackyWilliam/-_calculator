//
//  test.cpp
//  for learning C++
//  26/03/19
//  © 2019 Tramme Inc.
//
//

#include <iostream>
#include <cmath>              //  调用头文件cmath（C++格式）或math.h（c格式）
void func(int n);               //  自定函数func
void fun(int n);
using namespace std;
                               //  先自定函数
int sum(int a, int b)          //  加法的函数
{
    int fin;
    
    fin = a + b;               //  列出大体公式(或者说是算法【不是标准定义】)
    return (fin);
}

int mins(int a, int b)        //  加法的函数
{
    int fin1;
    
    fin1 = a - b;            //  同上
    return (fin1);
}

int time(int a, int b)        //  乘法的函数
{
    int fin2;
    
    fin2 = a * b;            //  同上
    return (fin2);
}

int divid(int a, int b)       //  除法的函数
{
    int fin3;
    
    fin3 = a / b;            //  同上
    return (fin3);
}


int main()                  //  主函数体
{
    int e;
    int a;
    int b;
    int c;
    int d;
    double num;          //  为了使用sqrt()函数，要用double声明数字
    int result;
    cout << "版本：0.0.0.1" << endl;
    cout << "请选择你需要的计算方式" << endl;
    cout << "***********************" << endl;
    cout << "*    1. 加法           *" << endl;
    cout << "*    2. 减法           *" << endl;
    cout << "*    3. 乘法           *" << endl;
    cout << "*    4. 除法           *" << endl;
    cout << "*    5. 关于计算器     *" << endl;
    cout << "*    6. 次方           *" << endl;
    cout << "*    7. 根号           *" << endl;
    cout << "*    8. 关闭           *" << endl;
    cout << "***********************" << endl;
    cout << "请输入选项：";
    cin >> e;                                                       //  输入语句
    switch (e) {
        case 1:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = sum(a, b);                                      //  套用上面写的函数，下同
            cout << "你的答案是: " << result << endl;
            func(1);
            break;
        case 2:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = mins(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 3:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = time(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 4:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = divid(a, b);
            cout << "你的答案是:" << result << "(保留整数)" << endl;
            func(1);
            break;
        case 5:
            cout << "除法保留一位小数，此计算器纯粹用了学习制作C++程序，并无商业用途！未经作者允许，不可商用或者公开使用并不声明著作权！！！一经发现，后果自负！！！" << endl;
            cout << "图标的著作权属于苹果(中国)" << endl;
            cout << "© 2019 Tramme Inc." << endl;
            func(1);
            break;
        case 6:
            cout << "请输入你需要的计算方式" << endl;
            cout << "*********************" << endl;
            cout << "*     1. 平方        *" << endl;
            cout << "*     2. 立方        *" << endl;
            cout << "*     3. 自定义次方   *" << endl;
            cout << "*     4. 返回        *" << endl;
            cout << "*********************" << endl;
            cout << "请输入你的选项：";
            cin >> d;
            switch (d) {
                case 1:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 2);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 2:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 3);                                    //  pow()函数需要cmath头文件支持，和sqrt()一样
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 3:
                    cout << "请输入数字（两个 前面写指数，后面写幂）:";
                    cin >> a >> b;
                    c = pow(a, b);
                    cout << "你的答案是:" << c << endl;                 //  打印c
                    fun(1);
                    break;
                case 4:
                    func(1);
                    break;
                default:
                    cout << "无效答案返回上一步" << endl;
                    fun(1);
                    break;
            }
            break;
        case 7:
            cout << "请输入数字：";
            cin >> num;
            c = sqrt(num);
            cout << "你的答案是:" << c << endl;
            func(1);
            break;
        case 8:
            cout << "关闭此计算器" << endl;
            break;
        default:
            cout << "无效答案，回到主页面" << endl;
            func(1);                                     //  自定函数显示回路
            break;
    }
    return 0;
}

void func(int n)
{
    int e;
    int a;
    int b;
    int c;
    int d;
    int result;
    double num;
    cout << endl << endl << "版本：0.0.0.1" << endl;
    cout << "请选择你需要的计算方式" << endl;
    cout << "***********************" << endl;
    cout << "*    1. 加法           *" << endl;
    cout << "*    2. 减法           *" << endl;
    cout << "*    3. 乘法           *" << endl;
    cout << "*    4. 除法           *" << endl;
    cout << "*    5. 关于计算器     *" << endl;
    cout << "*    6. 次方           *" << endl;
    cout << "*    7. 平方根         *" << endl;
    cout << "*    8. 关闭           *" << endl;
    cout << "***********************" << endl;
    cout << "请输入选项：";
    cin >> e;                                                       //  输入语句
    switch (e) {
        case 1:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = sum(a, b);                                      //  套用上面写的函数，下同
            cout << "你的答案是: " << result << endl;
            func(1);
            break;
        case 2:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = mins(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 3:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = time(a, b);
            cout << "你的答案是:" << result << endl;
            func(1);
            break;
        case 4:
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = divid(a, b);
            cout << "你的答案是:" << result << "(保留整数)" << endl;
            func(1);
            break;
        case 5:
            cout << "除法保留一位小数，此计算器纯粹用了学习制作C++程序，并无商业用途！未经作者允许，不可商用或者公开使用并不声明著作权！！！一经发现，后果自负！！！" << endl;
            cout << "图标的著作权属于苹果(中国)" << endl;
            cout << "© 2019 Tramme Inc." << endl;
            func(1);
            break;
        case 6:
            cout << "请输入你需要的计算方式" << endl;
            cout << "*********************" << endl;
            cout << "*     1. 平方        *" << endl;
            cout << "*     2. 立方        *" << endl;
            cout << "*     3. 自定义次方   *" << endl;
            cout << "*     4. 返回        *" << endl;
            cout << "*********************" << endl;
            cout << "请输入你的选项：";
            cin >> d;
            switch (d) {
                case 1:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 2);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 2:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 3);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 3:
                    cout << "请输入数字（两个 前面写指数，后面写幂）:";
                    cin >> a >> b;
                    c = pow(a, b);
                    cout << "你的答案是:" << c << endl;
                    fun(1);
                    break;
                case 4:
                    func(1);
                    break;
                default:
                    cout << "无效答案返回上一步" << endl;
                    fun(1);
                    break;
            }
        case 7:
            cout << "请输入数字：";
            cin >> num;
            c = sqrt(num);
            cout << "你的答案是:" << c << endl;
            func(1);
            break;
        case 8:
            cout << "关闭此计算器" << endl;
            break;
        default:
            cout << "无效答案，回到主页面" << endl;
            func(1);                                     //  自定函数显示回路
            break;
    }
}

void fun(int n)
{
    int d;
    int a;
    int b;
    int c;
    
    cout << endl << endl << "请输入你需要的计算方式" << endl;
    cout << "*********************" << endl;
    cout << "*     1. 平方        *" << endl;
    cout << "*     2. 立方        *" << endl;
    cout << "*     3. 自定义次方   *" << endl;
    cout << "*     4. 返回        *" << endl;
    cout << "*********************" << endl;
    cout << "请输入你的选项：";
    cin >> d;
    switch (d) {
        case 1:
            cout << "请输入数字（一个）:";
            cin >> a;
            c = pow(a, 2);
            cout << "你的答案是:" << c << endl;
            fun(1);
            break;
        case 2:
            cout << "请输入数字（一个）:";
            cin >> a;
            c = pow(a, 3);
            cout << "你的答案是:" << c << endl;
            fun(1);
            break;
        case 3:
            cout << "请输入数字（两个 前面写指数，后面写幂）:";
            cin >> a >> b;
            c = pow(a, b);
            cout << "你的答案是:" << c << endl;
            fun(1);
            break;
        case 4:
            func(1);
            break;
        default:
            cout << "无效答案返回上一步" << endl;
            fun(1);
            break;
    }
}
