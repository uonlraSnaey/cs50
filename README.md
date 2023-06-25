# cs50x 2023
Record the cs50 learning process

This [CS50](https://cs50.harvard.edu/x/2023) ！ 

[video](https://youtu.be/AcWIE9qazLI) 

[Notes](https://cs50.harvard.edu/x/2023/notes/)

打算加快速度，先完成问题集的基础部分 ，问就是 __懒__

**********
# scratch 内容

真好玩，嘿嘿🤤🤤🤤

[space travel](https://github.com/uonlraSnaey/space-ravel)

*********************
## 这是第一周的内容：[week1](https://github.com/uonlraSnaey/cs50/tree/main/week1)<br>
- [x] Lab :population 
- [x] Hello
- [ ] mario-Less
- [x] mario-more
- [x] Cash
- [x] Credit
- [x] 部分练习题

总结：很久没写过C了，但还是熟悉的味道<br>
    练习和实验几乎没有难度，习题集还挺有意思的，特别是 cash 和 credit 这二个问题，学有余的话可以把四道题都尝试以下。	<br> 
****
## 这是第二周的内容：[week2](https://github.com/uonlraSnaey/cs50/tree/main/week2)<br>

- [x] Lab: Scrabble
- [x] Readability
- [x] bulbx 
- [x] Caesar
- [ ] Substitution
- [ ] Wordle50
- [x] 部分练习题

总结：
1. 编码器(字符串（compiler）)：将信息从一种格式或表示形式转换为另一种格式或表示形式的设备、程序或算法。<br>
2. 调试（Debugging）：用来识别、定位和解决程序中存在的错误或异常。<br>
3. **数组**（Array）:一种数据结构，用于存储一组相同类型的元素。<br>
4. **字符串**（String）：种数据类型，用于表示一串字符序列。<br>
5. 命令行参数(Command-Line Arguments)：在命令行界面上输入的参数，用于向程序传递额外的信息或配置。<br>
6. 退出状态(exit Status)：程序在执行完毕后返回给操作系统的一个整数值，用于表示程序的执行结果或状态。<br>
7. 密码学……<br>
    
数组和字符串这两个概念很重要，实验、练习和习题集都要用到，在整个CS课程的学习过程中相信我们还多多次与他们相逢。<br>

没有写增加难度的题目（其实是没有思路，没做出来），/remake<br>

*************
## 这是第三周的内容: [week3]()

- [x] lab: sort 
- [x] Plurality
- [x] Runoff
- [ ] Tideman
- [x] 部分练习题

总结：

1、时间复杂度：O(x).<br>
    Ω符号用于表示算法的最佳情况；θ符号用于表示算法上限和下限相同的地方，即最好情况和最坏情况的运行时间相同。
    
2、线性和二分搜索

3、数据结构

```
typedef struct
{
    string name;
    string number;
}
person;
```
4、排序 (排序是采用未排序的值列表并将该列表转换为已排序列表的行为。
    
    选择排序：从左往右选最小 O(n)
    
    冒泡排序：重复交换元素 O(n^2)
    
    递归排序：函数调用自身
    
    合并排序: 更高效的递归排序
    
    常 规！

*************
## 这是第四周的内容: [week3]()

总结：

像素可以想象为位图，0为黑色，1为白色。

RGB:(red, green, blue).

十六进制：0 1 2 3 4 5 6 7 8 9 a b c d e f

    255 表示为FF,因为16*15 = 240 ，再加上 15 就为255.

**指针**：

[video](https://www.youtube.com/watch?v=5VnDaHBi8dM)

指针是一个包含某个值地址的变量 (计算机内存的地址)

指针的声明：

    int n = 50;
    int *p = &n;

字符串：

打印字符串的某一项值：

printf("%p\n", &s\[0]);// printf("%c\n",*s);

copy:
复制地址，为不是复制值

交换两个值需要第三个量充当中转。






