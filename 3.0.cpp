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
    cout<<"��Ȩ��Ϣ"<<endl;
	cout<<"�����ˣ������       ��ѧ�        ������"<<endl; 
    cout<<"ѧ�ţ� 20201002985   20201002997   20201003238"<<endl; 
    cout<<"�ֹ�����������1��2�����  ��ѧ�6��7��8  ������3��4��5"<<endl; 
    cout<<"**********************************************"<<endl;
	cout<<"*       ��ӭʹ��ѧ���ɼ�����ϵͳ v3.0        *"<<endl;
	cout<<"*     1����ʾͬѧ�ĳɼ��б�                  *"<<endl;
    cout<<"*     2����ѯĳͬѧ�ķ���                    *"<<endl;
    cout<<"*     3����ѯĳ�γ̵ķ���                    *"<<endl;
    cout<<"*     4��ͳ�Ƹ��γ�ƽ���ɼ�                  *"<<endl;
    cout<<"*     5��ͳ�Ƹ�ͬѧƽ���ɼ�                  *"<<endl;
    cout<<"*     6�����Ҹ�����߷�                      *"<<endl;
    cout<<"*     7���������ƽ����                      *"<<endl;
    cout<<"*     8���˳�                                *"<<endl;
    cout<<"*     ������(1-8)ѡ��                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*  ע��������Զ������������cj11-out.txt��  *"<<endl;
    cout<<"*                                            *"<<endl;	    
    cout<<"**********************************************"<<endl;
    cout<<"������Ҫִ�еĲ������:";
}

void input1(int n)
{ for(int i=0; i<=n; i++)      
    { if(i==0)          
	 {  cout<<"             ����     ��ѧ     Ӣ��     ����";
         	cout<<endl;    }
  	  else 
		{cout<<setw(9)<<student[i-1].name;
		cout<<setw(7)<<student[i-1].yuwen<<setw(8)<<student[i-1].shuxue<<setw(10)<<student[i-1].yingyu<<setw(10)<<student[i-1].chengxu<<endl;
	    }	
	
	 }

}

void input2()
{cout<<"������ͬѧ������"<<endl; 
cin>>mingzi;
if(mingzi[0]=='W'&&mingzi[1]=='a') 
	{cout<<"             ����     ��ѧ     Ӣ��     ����"<<endl;
	 cout<<setw(9)<<student[0].name<<setw(7)<<student[0].yuwen<<setw(8)<<student[0].shuxue<<setw(10)<<student[0].yingyu<<setw(10)<<student[0].chengxu<<endl;
	}
if(mingzi[0]=='L'&&mingzi[1]=='i') 
	{cout<<"             ����     ��ѧ     Ӣ��     ����"<<endl;
	 cout<<setw(9)<<student[1].name<<setw(7)<<student[1].yuwen<<setw(8)<<student[1].shuxue<<setw(10)<<student[1].yingyu<<setw(10)<<student[1].chengxu<<endl;
	}
if(mingzi[0]=='H'&&mingzi[1]=='e') 
	{cout<<"             ����     ��ѧ     Ӣ��     ����"<<endl;
	 cout<<setw(9)<<student[2].name<<setw(7)<<student[2].yuwen<<setw(8)<<student[2].shuxue<<setw(10)<<student[2].yingyu<<setw(10)<<student[2].chengxu<<endl;
	}
if(mingzi[0]=='Z'&&mingzi[1]=='h') 
	{cout<<"             ����     ��ѧ     Ӣ��     ����"<<endl;
	 cout<<setw(9)<<student[3].name<<setw(7)<<student[3].yuwen<<setw(8)<<student[3].shuxue<<setw(10)<<student[3].yingyu<<setw(10)<<student[3].chengxu<<endl;
	}
if(mingzi[0]=='C'&&mingzi[1]=='h') 
	{cout<<"             ����     ��ѧ     Ӣ��     ����"<<endl;
	 cout<<setw(9)<<student[4].name<<setw(7)<<student[4].yuwen<<setw(8)<<student[4].shuxue<<setw(10)<<student[4].yingyu<<setw(10)<<student[4].chengxu<<endl;
	}
if(mingzi[0]=='W'&&mingzi[1]=='u') 
	{cout<<"             ����     ��ѧ     Ӣ��     ����"<<endl;
	 cout<<setw(9)<<student[5].name<<setw(7)<<student[5].yuwen<<setw(8)<<student[5].shuxue<<setw(10)<<student[5].yingyu<<setw(10)<<student[5].chengxu<<endl;
	}
} 

void input3(int n)
{cout<<"������γ�����"<<endl; 
cin>>kecheng;
if(kecheng[0]=='y'&&kecheng[1]=='u')//yuwen
	{cout<<setw(8)<<"����";
	for(int i=0;i<n;i++)
		{cout<<setw(8)<<student[i].yuwen;
		}
	}

if(kecheng[0]=='s')//shuxue
	{cout<<setw(8)<<"��ѧ";
	for(int i=0;i<n;i++)
		{cout<<setw(8)<<student[i].shuxue;
		}
	}

if(kecheng[0]=='y'&&kecheng[1]=='i')//yingyu
	{cout<<setw(8)<<"Ӣ��";
	for(int i=0;i<n;i++)
		{cout<<setw(8)<<student[i].yingyu;
		}
	}

if(kecheng[0]=='c')//chengxu
	{cout<<setw(8)<<"����";
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
cout<<setw(8)<<"����"<<setw(8)<<sum/n;
sum=0;

for(int i=0;i<n;i++)
	{sum+=student[i].shuxue;
	}
cout<<setw(8)<<"��ѧ"<<setw(8)<<sum/n;
sum=0;

for(int i=0;i<n;i++)
	{sum+=student[i].yingyu;
	}
cout<<setw(8)<<"Ӣ��"<<setw(8)<<sum/n;
sum=0;

for(int i=0;i<n;i++)
	{sum+=student[i].chengxu;
	}
cout<<setw(8)<<"����"<<setw(8)<<sum/n;
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
    cout<<student[k1].name<<"����������߷֣�"<<maxen1<<endl;
	cout<<student[k2].name<<"����ѧ����߷֣�"<<maxen2<<endl;
	cout<<student[k3].name<<"��Ӣ������߷֣�"<<maxen3<<endl;
	cout<<student[k4].name<<"�ĳ�������߷֣�"<<maxen4<<endl;
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
    cout<<student[k4].name<<"��ƽ���������ƽ���֣�"<<maxen4<<endl;
}

int main()
{ 

ifstream  infile; 
 ofstream  outfile;
 
infile.open("cj11.txt"); 
	infile>>n;
	for(int i=0; i<n; i++)      //  �ļ����ݶ��뵽�ṹ������ 
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
    outfile<< setw(12) << "ѧ��" << setw(20) << "����" ;
outfile << setw(10) << "����"<<setw(10)<<"��ѧ" ;
outfile << setw(13)<< "Ӣ��"<<setw(10)<<"����"<<setw(10)<<"ƽ���ɼ�"<<endl;
	for(int i=0; i<n; i++)      //  �ļ����ݶ��뵽�ṹ������ 
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














