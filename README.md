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
## 这是第三周的内容: [week3](https://github.com/uonlraSnaey/cs50/tree/main/week3)

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
## 这是第四周的内容: [week4](https://github.com/uonlraSnaey/cs50/tree/main/week4)
- [x] lab: smiley
- [x] bottomup
- [x] license
- [x] filter-more
- [x] recover
- [x] 部分练习题


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

*************
## 这是第五周的内容: [week5](https://github.com/uonlraSnaey/cs50/tree/main/week5)

- [x] practice: tire
- [x] Lab: inheritance
- [X] problem set : 

###数据结构：

本质是内存的组织形式，抽象难懂

###栈和队列

队列是抽象数据的一种形式，他具有特定的属性（FIFIO）和特定的的操作

堆栈的属性不同于队列，但他也有特定的属性（LIFO）和特定操作

堆栈：
```
const int CAPACITY = 50;

typedef struct
{
    person people[CAPACITY];
    int size;
}
stack;
```
数组是一种数据结构，它是一组按顺序排列的元素的集合。

关于数组大小的[相关介绍](https://cs50.harvard.edu/x/2023/notes/5/#resizing-arrays)

###链表 [详细介绍](https://cs50.harvard.edu/x/2023/notes/5/#linked-lists)

链接列表是C 语言中最强大的数据结构之一，由一系列称为节点的元素组成，每个节点包含数据和指向下一个节点的指针，通过指针连接节点，形成一个动态的数据结构，可以灵活地插入、删除和修改节点，而无需预先分配固定大小的内存空间

简单定义：
```
struct Node {
    int data;          // 数据
    struct Node* next; // 指向下一个节点的指针
};
```

基本操作：

1、创建列表 2、插入节点 3、删除节点 4、遍历链表


-> 运算符：用于通过指针直接访问结构体成员，而不需要先解引用指针再使用点运算符来访问成员

```
struct Person {
    char name[20];
    int age;
};

// 创建一个结构体指针
struct Person* personPtr;

// 通过结构体指针访问结构体成员
strcpy(personPtr->name, "John"); // 设置name为"John"
personPtr->age = 25;             // 设置age为25

// 输出结构体成员的值
printf("Name: %s\n", personPtr->name);
printf("Age: %d\n", personPtr->age);
```

###树 [详细解释](https://cs50.harvard.edu/x/2023/notes/5/#trees)

是一种非线性的数据结构，由一组称为节点的元素组成，节点之间通过边连接。树的结构类似于现实生活中的树，根节点位于顶部，分支从根节点延伸出来，最终形成叶节点。

树的节点由两个部分组成：数据和指向其他节点的指针


###哈希 [详](https://cs50.harvard.edu/x/2023/notes/5/#hashing-and-hash-tables)

哈希（Hash）是一种将数据映射到固定大小的索引值（哈希值）的技术。哈希表（Hash table）是基于哈希算法实现的数据结构，用于高效地存储和检索数据。

哈希表由一个固定大小的数组和一个哈希函数组成 （哈希函数是一种将较大值减少为较小且可预测的值的算法）

###字典树（tries） [详细解释](https://cs50.harvard.edu/x/2023/notes/5/#tries)

用于高效存储和搜索字符串的数据结构。它的名称"Trie"来自于retrieve（检索）一词的发音 hhh

Trie的主要特点是每个节点都代表一个字符串的字符，并且通过边连接形成树状结构，缺点是它们往往会占用大量内存


