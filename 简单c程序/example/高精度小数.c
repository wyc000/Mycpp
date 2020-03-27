/*由于计算机内部表达方式的限制，浮点运算都有精度问题，为了得到高精度的计算结果，就需要自己设计实现方法。*/
# include <stdio.h>
# include <windows.h>
int main()
{
	int a,b,i;
	
	printf("请输入两个数(以 / 隔开)：");
	scanf("%d/%d",&a,&b);
	printf("%d.",a/b);
	a %= b;
	a *= 10;
	for(i=0;i<200,a!=0;i++){ //输出小数点后两百位；
		printf("%d",a/b);
		a %= b;
		a *= 10;
	}
	printf("\n");
	
	system("pause");
	return 0;
}
