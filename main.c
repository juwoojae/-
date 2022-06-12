#include <stdio.h>                                                             
#include <string.h>   //strcmp함수 사용해주기위해
 #define area 16 
/*컴퓨터 프로그래밍 평가과제(배점25점)
학과:컴퓨터공학부
학번:202203413
이름:주우재     
과제주제 :코로나 검색엔진 (코로나 지역별누적확진자,코로나 지역별누적사망자,코로나 지역별 일일확진자,국가별현황*/
                    
void menu(void);
void a(char*q);
void b(char* q);         // 함수 원형 정의 [평가항목2]
void c(char* q);          
void d();

struct contury {                    //구조체 선언 [평가항목5]
	char c[20];              //나라이름
	int infecter;            //누적확진자          
	char death_rate[20];            //사망률
}; 


int main(void)
{
	int choice;         //메뉴선지를 받아올것임
	char response[100];    //response는 메뉴에대한대답을 받아서 저장할것
     //변수 선언
	// 함수 포인터 배열을 선언하고 초기화한다.       [평가항목4],[평가항목5]
	int (*pf[4])(char*) = { a, b, c,d};    //포인터 배열, 함수의포인터 배열 pf[0] >a함수, pf[1]>b함수, pf[2]>c함수,pf[3]>d함수
	while (1)    
	{
		menu();

		printf("메뉴를 선택하시오:");  //
		scanf("%d", &choice);
		if (choice == 3)
		{
			d();
			break;
		}
			
		if (choice < 0 || choice >= 4)
			break;
		
		printf("지역을 입력하세요:");
		
		scanf("%s", response);      //대구 ,광주 등등을 받아온다면
		 
		 pf[choice](response);	// 함수 포인터를 이용한 함수 호출  //  (*pf)[choice]

		
	}
	return 0;
}
