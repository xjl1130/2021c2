///week01-6.cpp
///�b�ƨg�{�]����
#include <stdio.h>
#include <string.h>
char line[1000];///�b�~�����|��l�Ʀ�0
int main()
{
	int total=0;
  	while(scanf("%s", line)==1){
		int ans=0;
		int N=strlen(line);
		for(int i=0; i<N; i++){
		    //if(line[i]=='2') printf("���2\n");
		    if(line[i]=='2') ans++;
		}
		printf("%d\n", ans);
		total+=ans;
	}
	printf("Total: %d\n", total);
}