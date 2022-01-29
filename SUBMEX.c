#include<stdio.h>

int main(int argc, char const *argv[])
{
	int t, n, k, x;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &n, &k, &x);
		if(k < x){
			printf("-1\n");
		}
		else{
			int count = 0;
			for(int i = 0; i < n; i++){
				if(count >= x){
					count = 0;
				}
				printf("%d ", count);
				count++;
			}
			printf("\n");
		}
	}	
	return 0;
}