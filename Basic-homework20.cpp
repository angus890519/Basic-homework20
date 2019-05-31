/* 計算機概論實務-基本練習作業-作業20*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/07 01:15*/ 
#include <stdio.h>  //函示庫 
#include <stdlib.h> //函示庫 
struct phone //宣告phone這一個結構體 
{
   char brand[16],type[10];//品牌、型號
   int year,price;//出廠年份、售價
}; 
int main(void)
{
    int i;//迴圈變數(for迴圈) 
    printf("計算機概論實務-基礎練習作業-作業20\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/07 01:15\n");
	printf("-------------------------------------------------\n");
	printf("                 phone手機結構體                 \n");
	printf("-------------------------------------------------\n"); 
    struct phone p[5]={  
	"APPLE", "X", 2017, 35000, 
    "Samsung", "S9", 2018, 30000, 
    "Huawei", "P20 Pro", 2018, 32000, 
    "OPPO", "R15", 2018, 9000, 
    "ASUS", "Zenfone 5", 2018, 12000
	};
    
    for (i=0; i<5; i++) //列出 
    {
        printf("%s %s %4d %5d\n", p[i].brand, p[i].type, p[i].year, p[i].price);//顯示 
    }
    system("pause");//暫停 
    return 0;//回傳值 0 
}

