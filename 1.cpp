// question: C++ 数组a[3]如何初始化给struct 成员变量数组float c[3]
#include <iostream>
#include <memory.h>

struct MyStruct {
    float c[3];
};

int main() {
    float a[3] = {1.0f, 2.0f, 3.0f};

    MyStruct myStruct;
    // 方法一：通过一一赋值方法
    // myStruct.c[0] = a[0];
    // myStruct.c[1] = a[1];
    // myStruct.c[2] = a[2];

    // 方法二：使用聚合初始化的方式：
    // MyStruct myStruct = { a[0], a[1], a[2] };

    // 方法三：通过memcpy的方法
    memcpy(myStruct.c, a, sizeof(a));

    // 检查初始化结果
    for (int i = 0; i < 3; ++i) {
        std::cout << myStruct.c[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}