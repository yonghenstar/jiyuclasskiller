#include<iostream>
#include<ctime> //时间
#include<fstream> // 创建文件
#include<cstdlib> // 包含system函数的头文件
#include<stdio.h>
using namespace std;

int main() {
    //开始页面
    cout<<"---欢迎使用极域课堂杀手---"<<endl;
    cout<<"---开源地址：github.com/commandstone/jiyuclasskiller---"<<endl;
    time_t now = time(0);// 基于当前系统的当前日期/时间
    char* dt = ctime(&now);// 把 now 转换为字符串形式
    cout << "当前日期和时间：" << dt << endl;
    //
    char mima = 'h';

    char password;
    cout<<"请输入密码：";
    cin >> password;
    if(mima == password)
    {
        cout<<"密码正确..."<<endl;
        cout<<"启动中..."<<endl;
        cout<<"登陆中..."<<endl;
    }
    else
    {
        cout<<"密码错误！！！"<<endl;
        return false;
    }
    system("cls");
    system("clear");
    //功能
    cout << "-------------------------------------" << endl;
    cout << "|           -|Welcome|-             |" << endl;
    cout << "|      输入1关闭jiyuclass           |" << endl;
    cout << "|      输入2关闭获得使用指南        |" << endl;
    cout << "|      输入3关于jiyuclasskiller     |" << endl;
    cout << "|      输入4关闭程序                |" << endl;
    cout << "|      输入5关机                    |" << endl;
    cout << "|      输入6毁灭电脑不可用🚫        |" << endl;
    cout << "-------------------------------------" << endl;
    int gl;
    cout<<"输入:";
    cin >> gl;
    for(int sx = 0;sx <= 3;++sx)
    {
        if(gl==1)
        {
            // 执行cmd命令
            //system("ls");
            system("taskkill /f /t /im Studentmain.exe");
            gl = 0;
        }
        if(gl==2)
        {
            // 创建一个std::ofstream对象来打开并写入文件
            std::string filePath = "./Desktop/使用指南.txt";
            std::ofstream file("使用指南.txt");
            // 检查文件是否成功打开
            if (!file.is_open())
            {   
            // 如果文件无法打开，输出错误信息并退出程序
            std::cerr << "错误：无法创建或打开文件 '" << "使用指南.txt" << "'" << std::endl;
            return 1; // 返回一个非零值表示错误
            }
            // 写入内容
            file << "   ---------------------" << endl;
            file << "   ｜-- 极域课堂杀手🥷 --｜" << endl;
            file << "   ｜   -使用指南-      ｜" << endl;
            file << "   ｜ 版本号：v1.1      ｜" << endl;
            file << "   ｜拥有nb功能的ToolBox ｜" << endl;
            file << "   ｜ 输入1关闭极域课堂   |" << endl;
            file << "   ｜ 输入2获得使用指南   |" << endl;
            file << "   ---------------------" << endl;
            // 关闭文件以释放资源
            file.close();
            gl = 0;
        }
        if(gl==3)
        {
            cout<<"关于极域课堂杀手"<<endl;
            cout<<"版本号:1.1"<<endl;
            cout<<"作者:Command_stone"<<endl;
            cout<<"开源地址:"<<endl;
            cout<<"github.com/Commandstone/jiyuclasskiller"<<endl;
            gl = 0;
        }
        if(gl==4)
        {
            cout<<"正在关闭~"<<endl;
            cout<<"bye~"<<endl;
            system("exit");
            gl = 0;
        }
        if(gl==0)
        {
            system("exit");
        }
        if(gl==5)
        {
            int gj;
            cout<<"输入1 瞬间关机"<<endl;
            cout<<"输入2 10s关机"<<endl;
            cout<<"输入3 30s关机"<<endl;
            cout<<"输入:"<<endl;
            cin>>gl;
            if(gl==1){system("shutdown /s /t 0");system("sudo shutdown -h now");}
            if(gl==2){system("shutdown /s /t 10");}
            if(gl==3){system("shutdown /s /t 30");}
            gl =0;
        }
        if(gl==6)
        {
            cout<<"毁灭电脑:"<<endl;
            int numberOfFiles; // 要创建的文件数量
            cout<<"hacker攻击次数[不要超过114514]:"<<endl;
            cin >> numberOfFiles;
            const std::string fileNameTemplate = "hack%d.txt"; // 文件名 文件名前加 ._ 在mac文件隐形
            for (int i = 1; i <= numberOfFiles; ++i) {
            // 构建文件名
            char fileName[20];
            snprintf(fileName, sizeof(fileName), fileNameTemplate.c_str(), i);
            // 创建一个std::ofstream对象来打开并写入文件
            std::ofstream file(fileName);
            // 检查文件是否成功打开
            if (!file.is_open()) 
            {
            // 如果文件无法打开，输出错误信息并退出程序
            std::cerr << "错误：无法创建或打开文件 '" << fileName << "'" << std::endl;
            return 1; // 返回一个非零值表示错误
            }
            // 写入相同的内容到每个文件
            file << "Hello, hacker!" << endl;
            file << "毁灭吧!电脑" << endl;

            // 关闭文件以释放资源
            file.close();
            system("exit");
        }
    }
    }
}
