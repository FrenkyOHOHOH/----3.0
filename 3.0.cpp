#include<iostream>
#include <fstream>
#include <stdlib.h> 
#include <time.h>  
#include<string.h>
#include <iomanip>
using namespace std;
int xuhao,n;
char mingzi[10],kecheng[10];
struct xinxi
	{   string xuehao;
		string   name;
	    float yuwen;
	    float shuxue;
		float yingyu;
		float chengxu;
		float pinjun;
	} student[6];
 
 void jiemian()
{	
    cout<<"版权信息"<<endl;
	cout<<"制作人：杨积鑫       傅学瑜        王振宇"<<endl; 
    cout<<"学号： 20201002985   20201002997   20201003238"<<endl; 
    cout<<"分工情况：杨积鑫1、2、框架  傅学瑜6、7、8  王振宇3、4、5"<<endl; 
    cout<<"**********************************************"<<endl;
	cout<<"*       欢迎使用学生成绩管理系统 v3.0        *"<<endl;
	cout<<"*     1、显示同学的成绩列表                  *"<<endl;
    cout<<"*     2、查询某同学的分数                    *"<<endl;
    cout<<"*     3、查询某课程的分数                    *"<<endl;
    cout<<"*     4、统计各课程平均成绩                  *"<<endl;
    cout<<"*     5、统计各同学平均成绩                  *"<<endl;
    cout<<"*     6、查找各科最高分                      *"<<endl;
    cout<<"*     7、查找最高平均分                      *"<<endl;
    cout<<"*     8、退出                                *"<<endl;
    cout<<"*     请输入(1-8)选择：                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*  注：程序会自动输出数据至「cj11-out.txt」  *"<<endl;
    cout<<"*                                            *"<<endl;	    
    cout<<"**********************************************"<<endl;
    cout<<"输入你要执行的操作序号:";
}

void input1(int n)
{ for(int i=0; i<=n; i++)      
    { if(i==0)          
	 {  cout<<"             语文     数学     英语     程序";
         	cout<<endl;    }
  	  else 
		{cout<<setw(9)<<student[i-1].name;
		cout<<setw(7)<<student[i-1].yuwen<<setw(8)<<student[i-1].shuxue<<setw(10)<<student[i-1].yingyu<<setw(10)<<student[i-1].chengxu<<endl;
	    }	
	
	 }

}

void input2()
{cout<<"请输入同学的名字"<<endl; 
cin>>mingzi;
if(mingzi[0]=='W'&&mingzi[1]=='a') 
	{cout<<"             语文     数学     英语     程序"<<endl;
	 cout<<setw(9)<<student[0].name<<setw(7)<<student[0].yuwen<<setw(8)<<student[0].shuxue<<setw(10)<<student[0].yingyu<<setw(10)<<student[0].chengxu<<endl;
	}
if(mingzi[0]=='L'&&mingzi[1]=='i') 
	{cout<<"             语文     数学     英语     程序"<<endl;
	 cout<<setw(9)<<student[1].name<<setw(7)<<student[1].yuwen<<setw(8)<<student[1].shuxue<<setw(10)<<student[1].yingyu<<setw(10)<<student[1].chengxu<<endl;
	}
if(mingzi[0]=='H'&&mingzi[1]=='e') 
	{cout<<"             语文     数学     英语     程序"<<endl;
	 cout<<setw(9)<<student[2].name<<setw(7)<<student[2].yuwen<<setw(8)<<student[2].shuxue<<setw(10)<<student[2].yingyu<<setw(10)<<student[2].chengxu<<endl;
	}
if(mingzi[0]=='Z'&&mingzi[1]=='h') 
	{cout<<"             语文     数学     英语     程序"<<endl;
	 cout<<setw(9)<<student[3].name<<setw(7)<<student[3].yuwen<<setw(8)<<student[3].shuxue<<setw(10)<<student[3].yingyu<<setw(10)<<student[3].chengxu<<endl;
	}
if(mingzi[0]=='C'&&mingzi[1]=='h') 
	{cout<<"             语文     数学     英语     程序"<<endl;
	 cout<<setw(9)<<student[4].name<<setw(7)<<student[4].yuwen<<setw(8)<<student[4].shuxue<<setw(10)<<student[4].yingyu<<setw(10)<<student[4].chengxu<<endl;
	}
if(mingzi[0]=='W'&&mingzi[1]=='u') 
	{cout<<"             语文     数学     英语     程序"<<endl;
	 cout<<setw(9)<<student[5].name<<setw(7)<<student[5].yuwen<<setw(8)<<student[5].shuxue<<setw(10)<<student[5].yingyu<<setw(10)<<student[5].chengxu<<endl;
	}
} 

void input3(int n)
{cout<<"请输入课程名字"<<endl; 
cin>>kecheng;
if(kecheng[0]=='y'&&kecheng[1]=='u')//yuwen
	{cout<<setw(8)<<"语文";
	for(int i=0;i<n;i++)
		{cout<<setw(8)<<student[i].yuwen;
		}
	}

if(kecheng[0]=='s')//shuxue
	{cout<<setw(8)<<"数学";
	for(int i=0;i<n;i++)
		{cout<<setw(8)<<student[i].shuxue;
		}
	}

if(kecheng[0]=='y'&&kecheng[1]=='i')//yingyu
	{cout<<setw(8)<<"英语";
	for(int i=0;i<n;i++)
		{cout<<setw(8)<<student[i].yingyu;
		}
	}

if(kecheng[0]=='c')//chengxu
	{cout<<setw(8)<<"程序";
	for(int i=0;i<n;i++)
		{cout<<setw(8)<<student[i].chengxu;
		}
	}
}

void input4(int n)
{float sum=0;
for(int i=0;i<n;i++)
	{sum+=student[i].yuwen; 
	}
cout<<setw(8)<<"语文"<<setw(8)<<sum/n;
sum=0;

for(int i=0;i<n;i++)
	{sum+=student[i].shuxue;
	}
cout<<setw(8)<<"数学"<<setw(8)<<sum/n;
sum=0;

for(int i=0;i<n;i++)
	{sum+=student[i].yingyu;
	}
cout<<setw(8)<<"英语"<<setw(8)<<sum/n;
sum=0;

for(int i=0;i<n;i++)
	{sum+=student[i].chengxu;
	}
cout<<setw(8)<<"程序"<<setw(8)<<sum/n;
sum=0;
}

void input5(int n)
{for(int i=0;i<n;i++)
	{cout<<setw(8)<<student[i].name<<setw(8)<<student[i].pinjun<<endl;
	}
}

void input6(int n)
{
	float maxen1= 0; 
	float maxen2= 0;
	float maxen3= 0;
	float maxen4= 0;
    int i,k1,k2,k3,k4;
    for(i=0; i<n; i++) 
        if(student[i].yingyu>maxen3)
    {
	    maxen3=student[i].yingyu;
        k3=i;
    }
    for(i=0; i<n; i++) 
        if(student[i].yuwen>maxen1)
    {
	    maxen1=student[i].yuwen;
        k1=i;
    }
    for(i=0; i<n; i++) 
        if(student[i].shuxue>maxen2)
    {
	    maxen2=student[i].shuxue;
        k2=i;
    }
    for(i=0; i<n; i++) 
        if(student[i].chengxu>maxen4)
    {
	    maxen4=student[i].chengxu;
        k4=i;
    }
    cout<<student[k1].name<<"的语文是最高分："<<maxen1<<endl;
	cout<<student[k2].name<<"的数学是最高分："<<maxen2<<endl;
	cout<<student[k3].name<<"的英语是最高分："<<maxen3<<endl;
	cout<<student[k4].name<<"的程序是最高分："<<maxen4<<endl;
}

void input7(int n)
{
	int i,k4;
	float maxen4= 0;
	for(i=0; i<n; i++) 
        if(student[i].pinjun>maxen4)
    {
	    maxen4=student[i].pinjun;
        k4=i;
    }
    cout<<student[k4].name<<"的平均分是最高平均分："<<maxen4<<endl;
}

int main()
{ 

ifstream  infile; 
 ofstream  outfile;
 
infile.open("cj11.txt"); 
	infile>>n;
	for(int i=0; i<n; i++)      //  文件数据读入到结构体数组 
    {  
	infile>>student[i].xuehao;
	infile>>student[i].name;
	infile>>student[i].yuwen;
	infile>>student[i].shuxue;
	infile>>student[i].yingyu;
	infile>>student[i].chengxu;  
	student[i].pinjun=(student[i].yuwen+student[i].shuxue+student[i].yingyu+student[i].chengxu)/4;
     }  	
infile.close();

outfile.open("cj11-out.txt"); 
    outfile<< setw(12) << "学号" << setw(20) << "姓名" ;
outfile << setw(10) << "语文"<<setw(10)<<"数学" ;
outfile << setw(13)<< "英语"<<setw(10)<<"程序"<<setw(10)<<"平均成绩"<<endl;
	for(int i=0; i<n; i++)      //  文件数据读入到结构体数组 
    {  
	outfile<<setw(12) <<student[i].xuehao<<setw(20) <<student[i].name<<setw(10) <<student[i].yuwen;
	outfile<<setw(10) <<student[i].shuxue<<setw(13)<<student[i].yingyu;
	outfile<<setw(10)<<student[i].chengxu<<setw(10)<<student[i].pinjun<<endl;
     
     }

outfile.close();

jiemian();
while(cin>>xuhao)
{switch (xuhao)
{case 1: {input1(n) ; 
          system("pause") ;
			system("cls");
    	    jiemian();	
			break;
        }
 case 2:{	input2( ) ; 
          	system("pause") ;
			system("cls");
    		jiemian();	
 			break;
         }
 case 3: {input3(n) ;
			 system("pause") ;
			system("cls");
			jiemian();	
			  break;
          }
 case 4: {input4(n) ;
			 system("pause") ;
			system("cls");
			jiemian();	
			 break;
			 
         }
 case 5: {input5(n) ;
			system("pause") ;
			system("cls");
			jiemian();	
			break;
			}
 case 6: {input6(n) ;
			system("pause") ;
			system("cls");
			jiemian();	
			break;
			} 
 case 7: {input7(n) ;
			system("pause") ;
			system("cls");
			jiemian();	
			break;
			} 
 case 8: return 0;
}
}
}














