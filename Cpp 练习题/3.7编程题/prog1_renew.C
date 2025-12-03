#include <iostream>
using namespace std;

int main() {
    // 定义转换因子的 const 常量（1英尺=12英寸）
    const int INCHES_PER_FOOT = 12;
    int totalInches;

    // 提示用户输入，用下划线指示输入位置
    cout << "请输入你的身高（单位：英寸）：______\b\b\b\b\b\b";
    cin >> totalInches;

    // 计算英尺数和剩余英寸数
    int feet = totalInches / INCHES_PER_FOOT;
    int remainingInches = totalInches % INCHES_PER_FOOT;

    // 输出转换结果
    cout << totalInches << " 英寸 = " << feet << " 英尺 " << remainingInches << " 英寸" << endl;

    return 0;
}
