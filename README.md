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

