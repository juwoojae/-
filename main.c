#include <stdio.h>                                                             
#include <string.h>   //strcmp�Լ� ������ֱ�����
 #define area 16 
/*��ǻ�� ���α׷��� �򰡰���(����25��)
�а�:��ǻ�Ͱ��к�
�й�:202203413
�̸�:�ֿ���     
�������� :�ڷγ� �˻����� (�ڷγ� ����������Ȯ����,�ڷγ� ���������������,�ڷγ� ������ ����Ȯ����,��������Ȳ*/
                    
void menu(void);
void a(char*q);
void b(char* q);         // �Լ� ���� ���� [���׸�2]
void c(char* q);          
void d();

struct contury {                    //����ü ���� [���׸�5]
	char c[20];              //�����̸�
	int infecter;            //����Ȯ����          
	char death_rate[20];            //�����
}; 


int main(void)
{
	int choice;         //�޴������� �޾ƿð���
	char response[100];    //response�� �޴������Ѵ���� �޾Ƽ� �����Ұ�
     //���� ����
	// �Լ� ������ �迭�� �����ϰ� �ʱ�ȭ�Ѵ�.       [���׸�4],[���׸�5]
	int (*pf[4])(char*) = { a, b, c,d};    //������ �迭, �Լ��������� �迭 pf[0] >a�Լ�, pf[1]>b�Լ�, pf[2]>c�Լ�,pf[3]>d�Լ�
	while (1)    
	{
		menu();

		printf("�޴��� �����Ͻÿ�:");  //
		scanf("%d", &choice);
		if (choice == 3)
		{
			d();
			break;
		}
			
		if (choice < 0 || choice >= 4)
			break;
		
		printf("������ �Է��ϼ���:");
		
		scanf("%s", response);      //�뱸 ,���� ����� �޾ƿ´ٸ�
		 
		 pf[choice](response);	// �Լ� �����͸� �̿��� �Լ� ȣ��  //  (*pf)[choice]

		
	}
	return 0;
}
