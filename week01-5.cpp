///week01-5.cpp
///在瘋狂程設測試
#include <stdio.h>
#include <string.h>
char line[1000];///在外面的會初始化成0
int main()
{
    for(int n=0; n<4; n++){
        ///char line[1000];無初始化
        int ans=0;
        int N=strlen[line];
        for(int i=0; i<N; i++){
            if(line[i]=='2') ans++;
        }
        printf("%d", ans);
    }
}
