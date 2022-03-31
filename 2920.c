#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	//int scaleArr[8] = { 1,2,3,4,5,6,7,8 };
	//int dscaleArr[8] = { 8,7,6,5,4,3,2,1 };
	int numArr[8] = { 0, };

	for (int i = 0;i < 8;i++) {
		scanf("%1d", &numArr[i]);
	}//한번에 입력받아서 배열에 한개씩 저장 완료!0!

	int a = 0;
	int d = 0;
	
	int position = 0;
	for (position;position < 8;position++) {
		if ((position + 1) != numArr[position]) {
			a++;
			break;
		}
	}
	for (position;position < 8;position++){
		if ((position+numArr[position])!=8) {
			d++;
			break;	
		}
	}

	printf("%d\n", a);
	printf("%d\n", d);
	
	if (a == 0)
		printf("ascending");
	else if (d == 0)
		printf("descending");
	else if (a == 1 && d == 1)
		printf("mixed");

	return 0;
}
