///week01-6.cpp
///在瘋狂程設測試
#include <stdio.h>
#include <string.h>
char line[1000];///在外面的會初始化成0
int main()
{
	int total=0;
  	while(scanf("%s", line)==1){
		int ans=0;
		int N=strlen(line);
		for(int i=0; i<N; i++){
		    //if(line[i]=='2') printf("找到2\n");
		    if(line[i]=='2') ans++;
		}
		printf("%d\n", ans);
		total+=ans;
	}
	printf("Total: %d\n", total);
}
