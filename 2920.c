#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	//int scaleArr[8] = { 1,2,3,4,5,6,7,8 };
	//int dscaleArr[8] = { 8,7,6,5,4,3,2,1 };
	int numArr[8] = { 0, };

	for (int i = 0;i < 8;i++) {
		scanf("%1d", &numArr[i]);
	}//�ѹ��� �Է¹޾Ƽ� �迭�� �Ѱ��� ���� �Ϸ�!0!

	int a = 0;
	int d = 0;
	
	int position = 0;
	for (position;position < 8;position++) {
		if ((position + 1) != numArr[position]) {
			a++;
			break;
			//ascending�� �ƴϸ� a�� 1
		}
	}
	for (position;position < 8;position++){
		if ((position+numArr[position])!=8) {
			d++;
			break;
				//descending�� �ƴϸ� b�� 1
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
