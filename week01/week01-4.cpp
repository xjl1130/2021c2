///week01-4.cpp
///在瘋狂程設測試
#include <stdio.h>
char line[1000];///在外面的會初始化成0
int main()
{
    ///char line[1000];無初始化
    scanf("%s", line);
    for(int i=0; i<1000; i++){
        if(line[i]=='2') printf("找到2\n");
    }
}
