#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string a[10][10] = { {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"}, {"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"},{"A","B","C","D","E","F","G","H","I","J"}};
	float kma[10][10] ={ {0,1.2,2.5,1.3,2.3,2.9,2.8,3.4,4.9,5.3},{1.2,0,2.6,2.5,1.1,4.1,2.1,2.7,6.8,5.1},{1.4,2.6,0,1.2,3.3,1.5,2.6,5.3,3.5,5.2},{1.3,2.5,1.2,0,1.1,2.7,1.5,2.2,4.6,4},{2.3,1.1,2.3,1.1,0,2.1,1,1.1,4.1,3.5},{2.9,4.1,1.5,2.6,2.1,0,1.1,3.2,2,3.7},{2.8,2.1,2.7,1.5,1,1.1,0,2.1,3.1,2.5},{3.9,2.7,5.3,2.2,1.1,3.2,2.1,0,4.1,2.4},{4.9,6.8,3.5,4.6,5.2,2,3.1,4.1,0,1.7},{5.3,5.1,5.2,4,3.5,3.7,2.5,2.4,1.7,0}};
	float kmb[10][10] ={ {0,0,1.4,2.6,2.4,3.9,3.3,3.4,5.9,6.3},{0,0,3.4,2.2,0,3.2,4,2.2,5.2,4.6},{2.5,3.7,0,2.7,3.7,0,2.7,3.4,0,5.1},{2.6,2.2,2.7,0,2.5,2.6,2.1,5.2,5.7,4.6},{2.4,3.6,0,2.5,0,3.7,2.6,3.8,5.2,3.5},{3.9,0,3.8,2.7,3.7,0,4.2,6.1,5.3,3.6},{3.4,0,2.6,2.1,2.6,4.2,0,4.9,4.2,4.8},{3.5,2.2,3.4,3.6,0,6.1,4.9,0,5.2,4.6},{5.9,5.2,0,4.7,4.1,5.3,4.2,5.2,0,5.6},{6.3,4.6,5.1,4.6,3.5,3.6,4.8,0,5.6,0}};
	string vehicle1[10][10] ={{"No Vehicle","B1","B2","M1","M2","T1","T2","S1","S2","B3"}, {"B7","No Vehicle","B8","M5","M6","T5","T6","S5","S6","B9"}, {"B13","B14","No Vehicle","M9","M10","T9","T10","S9","S10","B15"}, {"B19","B20","M13","No Vehicle","M14","T13","T14","S13","S14","B21"},{"B25","B26","M17","M18","No Vehicle","T17","T18","S17","S18","B27"},{"B31","B32","M21","M22","T21","No Vehicle","T22","S21","S22","B33"},{"B37","B38","M25","M26","T25","T26","No Vehicle","S25","S26","B39"},{"B43","B44","M29","M30","T29","T30","S29","No Vehicle","S30","B45"},{"B49","B50","M33","M34","T33","T34","S33","S34","No vehicle","B51"},{"B55","B56","M37","M38","T37","T38","S37","S38","B57","No Vehicle"}};
	string vehicle2[10][10] ={{"No Vehicle","B4","B5","M3","M4","T3","T4","S3","S4","B6"}, {"B10","No Vehicle","B11","M7","M8","T7","T8","S7","S8","B12"}, {"B16","B17","No Vehicle","M11","M12","T11","T12","S11","S12","B18"}, {"B22","B23","M15","No Vehicle","M16","T15","T16","S15","S16","B24"},{"B28","B29","M19","M20","No Vehicle","T19","T20","S19","S20","B30"},{"B34","B35","M23","M24","T23","No Vehicle","T24","S23","S24","B36"},{"B40","B41","M27","M28","T27","T28","No Vehicle","S27","S28","B42"},{"B46","B47","M31","M32","T31","T32","S31","No Vehicle","S32","B48"},{"B52","B53","M35","M36","T35","T36","S35","S36","No Vehicle","B54"},{"B58","B59","M39","M40","T39","T40","S39","S40","B60","No Vehicle"}};
	
	string initial;
	int q=0;
	cout<<"Enter initial place: ";
	cin>>initial;
	
	
	if(initial=="A"){
		for ( int i = 0; i < 1; i++ )
	{
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "A" << "][" << j << "]: ";
        cout << a[i][j]<<" = "<<kma[0][j]<<" km"<<"\t"<<a[i][j]<<" = "<<kmb[0][j]<<" km"<<endl;
		}
	}
	}
	
	cout<<"\n";
	
	if(initial=="B"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "B" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[1][j]<<" km"<<"\t"<<a[1][j]<<" = "<<kmb[1][j]<<" km"<<endl;
        }
		q=q+1;
	}
	cout<<"\n";
	
	if(initial=="C"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "C" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[2][j]<<" km"<<"\t"<<a[2][j]<<" = "<<kmb[2][j]<<" km"<<endl;
		}
		q=q+2;
	}
		cout<<"\n";
		
	if(initial=="D"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "D" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[3][j]<<" km"<<"\t"<<a[3][j]<<" = "<<kmb[3][j]<<" km"<<endl;
		}
		q=q+3;
	}
		cout<<"\n";
		
	if(initial=="E"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "E" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[4][j]<<" km"<<"\t"<<a[4][j]<<" = "<<kmb[4][j]<<" km"<<endl;
		}
		q=q+4;
	}
		cout<<"\n";
		
	if(initial=="F"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "F" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[5][j]<<" km"<<"\t"<<a[5][j]<<" = "<<kmb[5][j]<<" km"<<endl;
		}
		q=q+5;
	}
		cout<<"\n";
		
	if(initial=="G"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "G" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[6][j]<<" km"<<"\t"<<a[6][j]<<" = "<<kmb[6][j]<<" km"<<endl;
		}
		q=q+6;
	}
		cout<<"\n";
		
	if(initial=="H"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "H" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[7][j]<<" km"<<"\t"<<a[7][j]<<" = "<<kmb[7][j]<<" km"<<endl;
		}
		q=q+7;
	}
		cout<<"\n";
		
	if(initial=="I"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "I" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[8][j]<<" km"<<"\t"<<a[8][j]<<" = "<<kmb[8][j]<<" km"<<endl;
		}
		q=q+8;
	}
		cout<<"\n";
		
	if(initial=="J"){
		for ( int j = 0; j < 10; j++ ) 
		{
      	cout << "[" << "J" << "][" << j << "]: ";
        cout << a[1][j]<<" = "<<kma[9][j]<<" km"<<"\t"<<a[9][j]<<" = "<<kmb[9][j]<<" km"<<endl;
		}
		q=q+9;
	}

	
	string final;
	cout<<"Enter final place: ";
	cin>>final;
	
	
	if(final=="A")
	{
		for ( int j = 0; j < 1; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;	
		}
	}
	
	if(final=="B")
	{
		for ( int j = 1; j < 2; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="C")
	{
		for ( int j = 2; j < 3; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="D")
	{
		for ( int j = 3; j < 4; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="E")
	{
		for ( int j = 4; j < 5; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="F")
	{
		for ( int j = 5; j < 6; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="G")
	{
		for ( int j = 6; j < 7; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="H")
	{
		for ( int j = 7; j < 8; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="I")
	{
		for ( int j = 8; j < 9; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}
	
	if(final=="J")
	{
		for ( int j = 9; j < 10; j++ )
		{
			cout<<kma[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle1[q][j]<<"\tOR\t"<<kmb[q][j]<<" "<<"km"<<"\t"<<"Vehicle:"<<vehicle2[q][j]<<endl; 
			cout<<endl<<kma[q][j]*2<<" "<<"TL"<<" "<<vehicle1[q][j]<<"\t"<<kmb[q][j]*2<<" "<<"TL"<<" "<<vehicle2[q][j]<<endl;
		}
	}


	return 0;
}
