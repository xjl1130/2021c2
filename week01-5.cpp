///week01-5.cpp
///�b�ƨg�{�]����
#include <stdio.h>
#include <string.h>
char line[1000];///�b�~�����|��l�Ʀ�0
int main()
{
    for(int n=0; n<4; n++){
        ///char line[1000];�L��l��
        int ans=0;
        int N=strlen[line];
        for(int i=0; i<N; i++){
            if(line[i]=='2') ans++;
        }
        printf("%d", ans);
    }
}
