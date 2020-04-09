# ClangStudy
Clang Study

### 编译
```
gcc -std=c99 app.c -o app.out
```

### 基础

#### 一些量
```
%4.2f 
常量
#define PI 3.14
```

#### 强制类型转换
```
double num = 2.5;
printf("num %4.2f \n",(int)num);
```

#### 三元表达式
和js的差不多
```
int c = a>b?1:0
```

#### if
```
if (a > 100) {

}else if (a > 50) {

}else {

}
```

#### while
```
    int i = 0;
    int sum = 0;
    while(i<100) {
        i++;
        sum += i;
    }
```

#### do while
```
    int i = 0;
    int sum = 0;
    do {
        i++
        sum += i
    }while(i<100)
```

#### for
```
for (int a=0;a<10;a++) {}
```
#### 臭名远扬的goto
```
    int a = 0;
    ac:
    printf("he");
    if (a < 10) {
        a ++;
        goto ac;
    }
    printf("哈哈哈");
    return 0;
```

### 分别编译
```
现在有两个文件 a.c  b.c
a.c 依赖 b.c中的函数

gcc -std=c99 -c b.c -o b.o   // 先编译b.c
```

### Makefile
```
#this is make file
hello.out:sum.o main.c
	gcc sum.o main.c -o hello.out
sum.o:sum.c
	gcc -c sum.c -o sum.o

# 最终的在最上层  依赖依次往下
```

### 关于返回
```
#include 
int main(int argc,char* argc[])
{
    printf("Hello C\n");
    return 101;
}

>>> echo $?   // if $? == 0 这个程序就没有问题
```
### 数组pro
```
// 这里传入之后 尽然可以直接修改值
void convert(int a[],int b[])
{
    for(int i=0;i<5;i++) {
        if (a[i] > b[i]) {
            int c = b[i];
            b[i] = a[i];
            a[i] = c;
        }
    }
}

int main(void) {
    int a[] = {1,2,3,4,5};
    int b[] = {5,4,3,2,1};
    convert(a,b);
    for (int i=0;i<5;i++) {
        printf("%d \n",a[i]);
    }
}

// 冒泡排序   
void sort(int a[]) {
    for (int j=4;j>0;j--) {
        for (int i=0;i<j;i++) {
            int temp;
            if (a[i] < a[i + 1]) {
                temp = a[i + 1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
    }
}
```
#### 数组字符串
```
    char a[]= "你好世界!";
    char b[6] = {'h','e','l','l','o','\0'};  // \0为结束符
    printf("%s \n",a);
    printf("%s \n",b);

    char s1[] = "a";
    char s2[] = "a";
    char s3[] = "c";

    // 常用字符串函数
    printf("a ASICII: %d \n",'a');
    printf("b ASICII: %d \n",'b');
    printf("s1 len: %d s2 ;en: %d \n",strlen(a),strlen(b));
    printf("s1 eq s2 ?: %d \n",strcmp(s1,s2));
    printf("s1 eq b s3: %d \n",strcmp(s1,s3));  // o eq 反之就是asicii的差值

    // strcpy()  字符串覆盖
    char test1[] = "hello world";
    strcpy(test1,"helo"); // 会把 helo 覆盖到test1中  不能超出啊
    printf("%s \n",test1);

    // strcat() 字符串拼接
    char a1[100]="我是你爸爸 ";
    char b1[] = "Hello World";
    strcat(a1,b1);
    printf("%s \n",a1);
```

### 指针
```
void change(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 5;
	int b = 3;
	change(&a,&b);
	printf("num a=%d\nnum b=%d\n",a,b);
	return 0;
}
```

### gdb工具
`gcc -g main.c -o main.out` -g生成支持调试的

```
Temporary breakpoint 1, main () at c4.c:11
11      {
(gdb) p a
$1 = -8672
(gdb) n
12              int a = 5;
(gdb) p a
$2 = -8672
(gdb) p b
$3 = 32767
(gdb) n
13              int b = 3;
(gdb) n
14              change(&a,&b);
(gdb) l
9
10      int main()
11      {
12              int a = 5;
13              int b = 3;
14              change(&a,&b);
15              printf("num a=%d\nnum b=%d\n",a,b);
16              return 0;
17      }
18
(gdb) 
```
- start // 开始代码
- p s // 查看s的指针
- n   // next
- s   // 进入
- l   // 显示当前代码
- bt  // 打印堆栈
- f 1 // 切换函数栈层级
- q   // 推出调试
- 回车 // 执行上一步的命令

### 指针与内存
![](./README/mem.png)
