# include <iostream>
# include <unistd.h>
#include <unistd.h>

using namespace std ;
unsigned int microseconds;

int cake ();
int tea ();
int cafee ();
int bazi1 ();
int funshow();
int car ();
int main () 
{
	string s1 [4] = {"mohammad","qorbani","","how can you go the right way with a heart that is on the left side "};
	string s2 [4] = {"mohammad","almasi","","bio arabi ro fingilish nemishe type kar-_-"};
	string s3 [4] = {"amir mohammad","yazdan panah","","hehe..."};
	string s4 [4] = {"mohammad","nabati","",""};
	string s5 [4] = {"morteza","rasooli","","ham sen khodeti ia to ham zod bozorg shodi ?"};
	string s6 [4] = {"danial","khalaji","",""};
	string s7 [4] = {"javad","moradi","","zard telegram , telegram por sorat"};
	string s8 [4] = {"saleh","balabandi","",""};
	string s9 [4] = {"alireza","shabani","","az bas farar kardam az khishe khish tan / gahi delam baraie khodam tang mishavad"};
	string s10 [4] = {"sam","rezazadeh","","jaee zendani shodim ke shoaresh azadi"};
	string s11 [4] = {"soroosh","sadeqi","","man alan bio Emoji ro chikar konam -_-"};
	string d1 [4] = {"parmida","imani","",""};
	string d2 [4] = {"atena","asle qalichebaf","","what time to be alive"};
	string d3 [4] = {"hanane","abasi","","break some rules and enjoy your life-"};
	string d4 [4] = {"reihane","mohebi","","is this really i'm born to be ? i'm not sure ..."};
	string d5 [4] = {"negar","zolfaqri","",""};
	string d6 [4] = {"fateme","shahsavari","","to ham ba man nabodi ... mesl man ba man ... hata mesl tan ba man ... "};
	string d7 [4] = {"fateme","ramezanpoor","","ich habe ein gott , ist grober als schwerin (man khodaee daram ke bozorgtar az sangine :))"};
	string d8 [4] = {"fateme","arbabpor ","","destiny is everything "};
	string d9 [4] = {"narges","","","ta vaqti harf hast atash feshan ro nemishe ba barf bast (yas)"};
	string d10 [4] = {"masome","afsar","","XD (A    ?)"};
	string d11 [4] = {"asal","","",""};
	string d12 [4] = {"mohadese","nodeh","","..."};
	string d13 [4] = {"fateme","eftekhari","","dariaro mahiha forokhtan (sorena)"};
	string d14 [4] = {"maede","sharifi","",""};

	
	char b [10] ;
	char x ;
	long int premium ;
	
	funshow(); 
	
	cout<< "version 0.3"<< endl ;
	cout << "salam "<< endl ;
	sleep(2);
	cout << endl << " in barname bache iabe !!! \nba chand ta soal sade bache haie kelas ro peida mikone\nbebinam chand ta az eastrag haie barname ro peida mikoni XD \n khob berim soraqe barname "<< endl ;
	sleep(7);
	
	cout << "premium cod ? ";
	cin >> premium ;
	sleep (2) ;
	
	cout << "khob soal aval : " << endl << "pesare ? (y/n)" ;
	cin >> x ;
	sleep (3);
	
	switch (x) 
	{
		case 'y' :
			{
				cout << "chaee mikhori dige"<< endl;
				tea ();
				cout << "baraie kodom shahre ? (tehran / karaj / qazvin )" << endl ;
				cin >> b;
				cout << "bezar fekr konam ..." << endl;
				sleep(3);	
				
				switch (b[0])
				{
					case 't' :
					{
						cout << "einak mizane ? (y/n) " << endl ;
						cin >> x ;
						cout << "khob kheili nazdik shodam ..."<< endl ;
						sleep (2);
						
						switch (x)
						{
							case 'y':
							{
								cout << "moohash ro mibande ? (y/n) "<< endl ;
								cin >> x ;
								sleep (2);
								
								switch (x)
								{
									case 'y':
									{
										cout << "peida kardam ??\nesm : "<< s4 [0]<< endl << "famili : "<< s4 [1]<< endl << "bio : "<< s4 [3]<< endl ; 
										if (premium ==  9719 || premium == 11821182 )
										{
											cout << "laqhab : koon bolandkon "<< s4 [2]<< endl ;
										}
										cin >> x ;
										return 0 ;
									}
									case 'n':
									{
										cout << "inja baraie khodame boro biron "<< endl ;
										sleep (5);
										cout<< "bebin 5 sanie mondi iani ie kari inja dari \nmiai ie bazi konim ? (y/n)"<<endl ;
										cin >> x ;
										switch (x)
										{
											case 'y':
											{
												bazi1();
											}
											case 'n':
											{
												return 0 ;
											}
										}
										return 0 ;
									}
								}
							}
							case 'n' :
							{
								cout << "peida kardam ??\nesm : "<< s7 [0]<< endl << "famili : "<< s7 [1]<< endl << "bio : "<< s7 [3]<< endl ; 
								if ( premium ==  11821182  )
								{
									cout << "laqhab : metafizik"<< s7 [2]<< endl ;
								}
								cin >> x ;
								return 0 ;
							}
						}
					}
					case 'k' :
					{
						cout << "pas karaj zendegi mikone"<< endl ;
						sleep (2);
						cout << "az computer kheili mifahme ? (y/n) "<< endl ;
						cin >> x;
							
						switch (x)
						{
							case 'y':
							{
								cout << "qadesh kotahe ? (y/n) "<< endl ;
								cin >> x ;
								switch (x)
								{
									case 'y':
									{
										cout << "peida kardam ??\nesm : "<< s3 [0]<< endl << "famili : "<< s3 [1]<< endl << "bio : "<< s3 [3]<< endl ; 
										if (premium ==  6838 || premium == 11821182 )
										{
											cout << "laqhab : motasefane owner gorohe laqhab nemishe dashte bashe"<< s3 [2]<< endl ;
										}
										cin >> x ;
										return 0 ;
													
									}
									case 'n':
									{
										cout << "peida kardam ??\nesm : "<< s8 [0]<< endl << "famili : "<< s8 [1]<< endl << "bio : "<< s8 [3]<< endl ; 
										if (premium ==  1087 || premium ==11821182)
										{
											cout << "laqhab : saleh dohezari"<< s8 [2]<< endl ;
										}
										cin >> x ;
										return 0 ;
									}
								}
								
							}
							case 'n' :
							{
								cout << "khob man 3 nafar ro ba in moshakhasat mishnasam "<< endl ;
								sleep (3);
								cout << "basketbal / naqashi / einaki ? "<< endl ;
								cin >> b [1];
								
								switch (b[1])
								{
									case 'b':
									{
										cout << "az aval migofti ba daa kar dari ! "<< endl ;
										cout << "esm : "<< s1 [0]<< endl << "famili : "<< s1 [1]<< endl << "bio : "<< s1 [3]<< endl ; 
										if (premium ==  3531 || premium == 11821182)
										{
											cout << "laqhab :sonbol sagpaz "<< s1 [2]<< endl ;
										}
										cin >> x ;
										return 0 ;
									}
									case 'n':
									{
										cout << "peida kardam ??\nesm : "<< s2 [0]<< endl << "famili : "<< s2 [1]<< endl << "bio : "<< s2 [3]<< endl ; 
										if ( premium == 11821182 )
										{
											cout << "laqhab : -_- "<< s2 [2]<< endl ;
										}
										cin >> x ;
										return 0 ;
									}
									case 'e' :
									{
										cout << "peida kardam ??\nesm : "<< s6 [0]<< endl << "famili : "<< s6 [1]<< endl << "bio : "<< s6 [3]<< endl ; 
										if (premium ==  4039 || premium == 11821182 )
										{
											cout << "laqhab : koon felestini"<< s6 [2]<< endl ;
										}
										cin >> x ;
										return 0 ;
									}
								}	
							}
						}
					}
					case 'q' :
					{
						cout << "ba bache haie qhazvin kar dari pas "<< endl << "az bein in seta ieki ro entekhab kon " << endl ;
						cout << "mashin baz / computer / gitar "<< endl ;
						cin >> b [1] ;
						
						
						switch (b[1])
						{
							case 'm':
							{
								cout << "peida kardam ??\nesm : "<< s10 [0]<< endl << "famili : "<< s10 [1]<< endl  << "bio : "<< s10 [3]<< endl ; 
								if (premium ==  8750 || premium == 11821182 )
								{
									cout << "laqhab : koon lokht ghazvini"<< s10 [2]<< endl ;
								}
								sleep (15) ;
								car ();
								cin >> x ;
								return 0 ;
							}
							case 'c':
							{
								cout << "peida kardam ??\nesm : "<< s9 [0]<< endl << "famili : "<< s9 [1]<< endl << "bio : "<< s9 [3]<< endl ; 
								if (premium ==  10199 || premium == 11821182 )
								{
									cout << "laqhab : sardar"<< s9 [2]<< endl ;
								}
								cin >> x ;
								return 0 ;
							}
							case 'g':
							{
								cout << "peida kardam ??\nesm : "<< s11 [0]<< endl << "famili : "<< s11 [1]<< endl << "bio : "<< s11 [3]<< endl ; 
								if ( premium == 11821182   )
								{
									cout << "laqhab : esmaeel 10 tomani"<< s11 [2]<< endl ;
								}
								cin >> x ;
								return 0 ;
							}
						}
					}	
				}
			}
		case 'n' :
		{
			cout << "pas gozine sakht ro entekhab kardi \n" ;
			sleep (2);
			cout << "bezar aval baraton ie mocha biarm ta man amade misham"<< endl ;
			sleep (2);
			cafee ();
			cout << "baraye kodom shahre ? (tehran / karaj / qhazvin ) \n";
			cin >> b[1] ;
			switch (b[1])
			{
				case 't':
				{
					sleep (2);
					cout << "dari hei sakhtar mikoni \nkhob man alan harchi begam be ieki bar mikhore XD\nbezar fekr konam ie soal khob peida konam ";
					sleep (8);
					cout << "peida kardam : tehran savar kodom mishe ? (taxi / brt / metro ) \n";
					cin >> b[1] ;
					
					switch (b[1])
					{
						case 't':
						{
							cout << "peida kardam ??\nesm : "<< d8 [0]<< endl << "famili : "<< d8 [1]<< endl << "laqhab : "<< d8[2]<< endl << "bio : "<< d8 [3]<< endl ; 
							cin >> x ;
							return 0 ;
						}
						case 'b':
						{
							cout << "peida kardam ??\nesm : "<< d10 [0]<< endl << "famili : "<< d10 [1]<< endl << "laqhab : "<< d10[2]<< endl << "bio : "<< d10 [3]<< endl ;  
							cin >> x ;
							return 0 ;
						}
						case 'm':
						{
							sleep (1);
							cout<< "eibaba baz ham ke badtarin gozine ro entekhab kardi \n ";
							sleep (2);
							cout<< "mishe aval esmesh ro begi kheili sakht shod ? (n / a / m ) "<< endl ;
							cin >> b ;
							
							switch (b[1])
							{
								case 'n':
								{
									cout << "peida kardam ??\nesm : "<< d9 [0]<< endl << "famili : "<< d9 [1]<< endl << "laqhab : "<< d9[2]<< endl << "bio : "<< d9 [3]<< endl ; 
									cin >> x ;
									return 0 ;
								}
								case 'a':
								{
									cout << "peida kardam ??\nesm : "<< d11 [0]<< endl << "famili : "<< d11 [1]<< endl << "laqhab : "<< d11[2]<< endl << "bio : "<< d11 [3]<< endl ; 
									cin >> x ;
									return 0 ;
								}
								case 'm':
								{
									cout << "peida kardam ??\nesm : "<< d12 [0]<< endl << "famili : "<< d12 [1]<< endl << "laqhab : "<< d12[2]<< endl << "bio : "<< d12 [3]<< endl ; 
									cin >> x ;
									return 0 ;
								}
							}
						}
					}			
				}
				case 'k':
				{
					cout << "baba chera hei dari sakht tarin gozine ro entekhab mikoni \n";
					sleep (2);
					cout << endl << "khob hala bego koja piade mishe ? (fardis / golshahr) \n";
					cin >> b[1];	
					switch (b[1])
					{
						case 'f':
						{
							sleep (2);
							cout << "khaste shodam aval esmesh ro bego ? (p / n / f) \n";
							cin >> b[1];
							switch (b[1])
							{
								case 'p':
								{
									cout << "peida kardam ??\nesm : "<< d1 [0]<< endl << "famili : "<< d1 [1]<< endl << "laqhab : "<< d1[2]<< endl << "bio : "<< d1 [3]<< endl ; 
									cin >> x ;
									return 0 ;
								}
								case 'b':
								{
									cout << "peida kardam ??\nesm : "<< d5 [0]<< endl << "famili : "<< d5 [1]<< endl << "laqhab : "<< d5[2]<< endl << "bio : "<< d5 [3]<< endl ; 
									cin >> x ;
									return 0 ;
								}
								case 'f':
								{
									cout << "peida kardam ??\nesm : "<< d7 [0]<< endl << "famili : "<< d7 [1]<< endl << "laqhab : "<< d7[2]<< endl << "bio : "<< d7 [3]<< endl ; 
									cin >> x ;	
									return 0 ;
								}
							}
						}
						case 'g':
						{
							cout << "bebin man alan har soali dar mored zaher beporsam ieki narahat mishe pas bia aval esmesh ro bego ? (a / h / r / f) \n";
							cin >>b[1] ;
							
							switch (b[1])
							{
								case 'a':
								{
									cout << "peida kardam ??\nesm : "<< d2 [0]<< endl << "famili : "<< d2 [1]<< endl << "laqhab : "<< d2[2]<< endl << "bio : "<< d2 [3]<< endl ;
									cin >> x ;
									return 0 ;
								}
								case 'h':
								{
									cout << "peida kardam ??\nesm : "<< d3 [0]<< endl << "famili : "<< d3 [1]<< endl << "laqhab : "<< d3[2]<< endl << "bio : "<< d3 [3]<< endl ;
									cin >> x ;
									return 0 ;
								}
								case 'r':
								{
									cout << "peida kardam ??\nesm : "<< d4 [0]<< endl << "famili : "<< d4 [1]<< endl << "laqhab : "<< d4[2]<< endl << "bio : "<< d4 [3]<< endl ;
									cin >> x ;
									return 0 ;
								}
								case 'f':
								{
									cout << "peida kardam ??\nesm : "<< d6 [0]<< endl << "famili : "<< d6 [1]<< endl << "laqhab : "<< d6[2]<< endl << "bio : "<< d6 [3]<< endl ;
									cin >> x ;
									return 0 ;
								}
							}
						}
					}
				}
				case 'q':
				{
					cout << "khobe dokhtar qhzvini kaman \n" ;
					sleep (2);
					cout<< "chadorie ? (y/n) "<< endl ;
					cin >> x ;
					switch (x)
					{
						case 'y':
						{
							cout << "peida kardam ??\nesm : "<< d14 [0]<< endl << "famili : "<< d14 [1]<< endl << "laqhab : "<< d14[2]<< endl << "bio : "<< d14 [3]<< endl ; 
							cin >> x ;
							return 0 ;
						}
						case 'n':
						{
							cout << "peida kardam ??\nesm : "<< d13 [0]<< endl << "famili : "<< d13 [1]<< endl << "laqhab : "<< d13[2]<< endl << "bio : "<< d13 [3]<< endl ; 
							cin >> x ;
							return 0 ;
						}
					}
				}
			}
		}	
	}
	return 0 ;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


funshow (){
	cout << "LODING : ";
	sleep (2);
	for (int i = 0 ; i < 9 ; i ++)
	{
		cout<< ".";
		usleep(50000);
	}
	sleep (2);
	for (int i =1 ; i <11 ; i++)
	{
		cout << ".";
		usleep (50000);
	}
	cout << endl ;
	sleep(1);
	cout << "100% \npackages loaded ...";
	sleep (1);
	cout << "\n PROGRAM IS READY";
	sleep (2);
	cout << endl ;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


bazi1(){
	funshow ();
	
 	int dovom=0,aval=1,n,sum =0 , to , shomaresh ;
	int man [6] = {1 ,3 , 8 ,21 ,55 ,144} ;
	
	sleep (2);
	cout<< "khob bazi intorie ke baiad donbale fibonachi ro begi . aval man migam "<< endl ;
	

    for(int i=0 ; i <6 ; i ++)
    {
    	cout<< man [i] << endl ;
    	cin >> to ;
        sum=dovom+aval;
        dovom=aval;
        aval=sum;
        
        sum = dovom + aval ;
        dovom = aval ;
		aval = sum ;
		shomaresh ++ ;
		
		if (to != sum )
		{
			break ;
		}
		sleep (1);
		if (shomaresh == 4)
		{
			sleep (2);
		}
		if (shomaresh == 5)
		{
			sleep (4);
			for ( int m =1 ; m < 100 ; m++)
			{
				usleep(30000);
				cout << "010011";
			}
			cout << endl << "bebakhshid mohasebatesh ziad bod " << endl ;
		}
    }
    if (shomaresh <= 2)
    {
    	cout<< "engar bazi ro balad nisti feshar bokhor XD XD XD XD "<< endl ;
	}
	if (shomaresh >2 && shomaresh < 6 )
	{
		cout<< "khob bod vali be paie man nemiresi boro iebar dige bia XD XD \n" ;
	}
	if (shomaresh == 6)
	{
		sleep (4);
		cout << "to taghalob kardi chiter kheir nadide -_-" << endl ;
	}
	
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////


cafee(){
	cout << "\n \n \n \n \n \n \n \n \n \n \n";
	cout << "          ------ \n";
	cout << "           |  |  \n";
	cout << "-----------------\n";
	cout << "                |\n";
	cout << "-----------     |\n";
	cout << "           |    |\n";
	cout << "           |____|\n";
	sleep(1);
	for(int i=0;i<8;i++){
	cout << "             ||  \n";
		usleep(500000);
	}
	cout << "\n";
	cout << "         | | | | |    \n";
	cout << "         __________   \n";
	cout << "         |        |--|\n";
	cout << "         |  mocha |  |\n";
	cout << "         |  cafee |--|\n";
	cout << "         |________|   \n";
	cout << "        ------------  \n";
	cout << "        |__________|  \n";
	sleep(2);
	cout << "\n\nBefarma mocha cafee ... Cake Ham meildarin (y/n) ?\n";
	string ask;
	cin >> ask;
	if(ask == "y"){
		cout << "befarma Inam Cake ...\n";
		cake();
		
	}else{
		cout << "eibaba chera !!!\n";
	}
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



cake(){
	sleep(2);
	cout << "         ()      \n";
	cout << "         ||      \n";
	cout << "    -----------\n";
	cout << "   |           |\n";
	cout << "  |             |\n";
	cout << " |_______________|\n";
	cout << "  |_____________|\n";
	cout << "   -------------\n" ;
	sleep (4);
	cout<< " \n \n \n \n \n \n \n \n \n \n \n \n ";
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


tea(){
	cout<< " \n \n \n \n \n \n \n \n \n \n \n ";
	cout << "          ------ \n";
	cout << "           |  |  \n";
	cout << "-----------------\n";
	cout << "                |\n";
	cout << "-----------     |\n";
	cout << "           |    |\n";
	cout << "           |____|\n";
	sleep(1);
	for(int i=0;i<8;i++){
	cout << "             ||  \n";
		usleep(500000);
	}
	cout << "\n";
	cout << "         | | | | |    \n";
	cout << "         __________   \n";
	cout << "         |        |--|\n";
	cout << "         |  chaee |  |\n";
	cout << "         |        |--|\n";
	cout << "         |________|   \n";
	cout << "        ------------  \n";
	cout << "        |__________|  \n";
	sleep(2);
	cout << "inam ie chaee maram marefati"<< endl ;
}




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


car(){
	int n = 0;
	cout << " in ham ie mashin baraie mashin baz kelas " << endl ;
			
		for(int i = 0 ; i < 102 ; i++){
			n ++ ;
			
			for(int j = 0 ; j<n ; j++){
				cout << " ";
			}
			if(n%3==0){
				if(n==102){
					cout << "     ______   " << endl;
				}else{
					cout << "|    ______   " << endl; 
				}
			}else{
				cout << "     ______   " << endl; 
			}
			
			for(int j = 0 ; j<n ; j++){
				cout << " ";
			}
			if(n%3==2){
				cout << "|  _/______\\____" << endl;
			}else{
				cout << "   _/______\\____" << endl;
			}
			
			for(int j = 0 ; j<n ; j++){
				cout << " ";
			}
			if(n%3==1){
				cout << "|=|__(o)_(o)____|" << endl;
			}else{
				cout << " =|__(o)_(o)____|" << endl;
			}
			cout << "-----------------------------------------------------------------------------------------------------------------------";
			
			usleep(10000);
			
			system("CLS");
		}
}












