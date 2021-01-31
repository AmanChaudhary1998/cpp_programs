#include<stdio.h>
int main()
{
	struct employee{
		int id;
		int mobile;
		float salary;
	};
	struct employee e1,e2,e3;
	printf("enter the details of employee such as id mobile and salary of 3 employee\n");
	scanf("%d %d %f ",&e1.id,e2.mobile,e3.salary);
	scanf("%d %d %f ",&e1.id,e2.mobile,e3.salary);
	scanf("%d %d %f ",&e1.id,e2.mobile,e3.salary);
	printf("ENTERED RESULT\n");
	printf("%d %d %f ",e1.id, e2.mobile,e3.salary);
	printf("%d %d %f ",e1.id, e2.mobile,e3.salary);
	printf("%d %d %f ",e1.id, e2.mobile,e3.salary);
	return 0;
}
