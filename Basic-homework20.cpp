/* �p������׹��-�򥻽m�ߧ@�~-�@�~20*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/07 01:15*/ 
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw 
struct phone //�ŧiphone�o�@�ӵ��c�� 
{
   char brand[16],type[10];//�~�P�B����
   int year,price;//�X�t�~���B���
}; 
int main(void)
{
    int i;//�j���ܼ�(for�j��) 
    printf("�p������׹��-��¦�m�ߧ@�~-�@�~20\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/07 01:15\n");
	printf("-------------------------------------------------\n");
	printf("                 phone������c��                 \n");
	printf("-------------------------------------------------\n"); 
    struct phone p[5]={  
	"APPLE", "X", 2017, 35000, 
    "Samsung", "S9", 2018, 30000, 
    "Huawei", "P20 Pro", 2018, 32000, 
    "OPPO", "R15", 2018, 9000, 
    "ASUS", "Zenfone 5", 2018, 12000
	};
    
    for (i=0; i<5; i++) //�C�X 
    {
        printf("%s %s %4d %5d\n", p[i].brand, p[i].type, p[i].year, p[i].price);//��� 
    }
    system("pause");//�Ȱ� 
    return 0;//�^�ǭ� 0 
}

