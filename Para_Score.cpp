#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a = 1200;
	int gender1 = 0;
	string gender;
	cout << "------ Choose Gender ------" << endl;
	cout << "1: Male" << endl;
	cout << "2: Female" << endl;
	cout << endl;
	cin >> gender1;
	switch (gender1) {
		case 1:
			gender = "Male";
			cout << "You Chose " << gender << endl;
			break;
		case 2:
			gender = "Female";
			cout << "You Chose " << gender << endl;
			break;
		default:
			cout << "Invalid, Choose Again" << endl;
			break;
	}
	cout << endl;

	int class_num = 0;
	string class_name;

	cout << "------ Enter Classification ------" << endl;
	cout << "1: S1" << endl;
	cout << "2: S2" << endl;
	cout << "3: S3" << endl;
	cout << "4: S4" << endl;
	cout << "5: S5" << endl;
	cout << "6: S6" << endl;
	cout << "7: S7" << endl;
	cout << "8: S8" << endl;
	cout << "9: S9" << endl;
	cout << "10: S10" << endl;
	cout << "11: S11" << endl;
	cout << "12: S12" << endl;
	cout << "13: S13" << endl;
	cout << "14: S14" << endl;
	cout << "15: SB1" << endl;
	cout << "16: SB2" << endl;
	cout << "17: SB3" << endl;
	cout << "19: SB4" << endl;
	cout << "20: SB5" << endl;
	cout << "21: SB6" << endl;
	cout << "22: SB7" << endl;
	cout << "23: SB8" << endl;
	cout << "24: SB9" << endl;
	cout << "25: SB11" << endl;
	cout << "26: SB12" << endl;
	cout << "27: SB13" << endl;
	cout << "28: SB14" << endl;
	cout << "29: SM1" << endl;
	cout << "30: SM2" << endl;
	cout << "31: SM3" << endl;
	cout << "32: SM4" << endl;
	cout << "33: SM5" << endl;
	cout << "34: SM6" << endl;
	cout << "35: SM7" << endl;
	cout << "36: SM8" << endl;
	cout << "37: SM9" << endl;
	cout << "38: SM10" << endl;
	cout << "39: SM11" << endl;
	cout << "40: SM12" << endl;
	cout << "41: SM13" << endl;
	cout << "42: SM14" << endl;


	cout << endl;

	cin >> class_num;
	switch (class_num) {
		case 1:
			class_name = "S1";
			cout << "You Chose " << class_name << endl;
			break;
		case 2:
			class_name = "S2";
			cout << "You Chose " << class_name << endl;
			break;
		case 3:
			class_name = "S3";
			cout << "You Chose " << class_name << endl;
			break;
		case 4:
			class_name = "S4";
			cout << "You Chose " << class_name << endl;
			break;
		case 5:
			class_name = "S5";
			cout << "You Chose " << class_name << endl;
			break;
		case 6:
			class_name = "S6";
			cout << "You Chose " << class_name << endl;
			break;
		case 7:
			class_name = "S7";
			cout << "You Chose " << class_name << endl;
			break;
		case 8:
			class_name = "S8";
			cout << "You Chose " << class_name << endl;
			break;
		case 9:
			class_name = "S9";
			cout << "You Chose " << class_name << endl;
			break;
		case 10:
			class_name = "S10";
			cout << "You Chose " << class_name << endl;
			break;
		case 11:
			class_name = "S11";
			cout << "You Chose " << class_name << endl;
			break;
		case 12:
			class_name = "S12";
			cout << "You Chose " << class_name << endl;
			break;
		case 13:
			class_name = "S13";
			cout << "You Chose " << class_name << endl;
			break;
		case 14:
			class_name = "S14";
			cout << "You Chose " << class_name << endl;
			break;

	}
	cout << endl;
	
	string event;
	int event1 = 0;
	
	cout << "------ Choose Event ------" << endl;
	cout << "1: 50 M Freestyle" << endl;
	cout << "2: 100 M Freestyle" << endl;
	cout << "3: 200 M Freestyle" << endl;
	cout << "4: 400 M Freestyle" << endl;
	cout << "5: 800 M Freestyle" << endl;
	cout << "6: 1500 M Freestyle" << endl;
	cout << "7: 50 M Backstroke" << endl;
	cout << "8: 100 M Backstroke" << endl;
	cout << "9: 200 M Backstroke" << endl;
	cout << "10: 50 M Breaststroke" << endl;
	cout << "11: 100 M Breaststroke" << endl;
	cout << "12: 200 M Breaststroke" << endl;
	cout << "13: 50 M Butterfly" << endl;
	cout << "14: 100 M Butterfly" << endl;
	cout << "15: 200 M Butterfly" << endl;
	cout << "16: 150 M I.M." << endl;
	cout << "17: 200 M I.M." << endl;
	cout << "18: 400 M I.M." << endl;
	cout << endl;

	bool validInput = false;
	float b = 0.0f;
	
	float c = 0.0f;

	while (!validInput) {
	
		cin >> event1;	
	
		switch (event1) {
			case 1:
				if (gender == "Male") {
					b = 6.190278;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 5.542675;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;

			case 2:
				if (gender == "Male") {
					b = 6.234464;
					validInput = true;
					if (class_name == "S1") {
						c = 1092.007;
					}
					else if (class_name == "S2") {
						c = 951.321;
					}
					else if (class_name == "S3") {
						c = 743.315;
					}
					else if (class_name == "S4") {
						c = 629.473;
					}
					else if (class_name == "S5") {
						c = 540.915;
					}
					else if (class_name == "S6") {
						c = 507.07;
					}
					else if (class_name == "S7") {
						c = 480.627;
					}
					else if (class_name == "S8") {
						c = 450.768;
					}
					else if (class_name == "S9") {
						c = 433.183;
					}
					else if (class_name == "S10") {
						c = 411.948;
					}
					else if (class_name == "S11") {
						c = 445.317;
					}
					else if (class_name == "S12") {
						c = 403.699;
					}
					else if (class_name == "S13") {
						c = 401.287;
					}
					else if (class_name == "S14") {
						c = 414.275;
					}

				}

				if (gender == "Female") {
					b = 5.631887;
					validInput = true;
					if (class_name == "S1") {
						c = 1078.991;
					}
					else if (class_name == "S2") {
						c = 907.483;
					}
					else if (class_name == "S3") {
						c = 659.277;
					}
					else if (class_name == "S4") {
						c = 588.663;
					}
					else if (class_name == "S5") {
						c = 561.858;
					}
					else if (class_name == "S6") {
						c = 524.537;
					}
					else if (class_name == "S7") {
						c = 503.545;
					}
					else if (class_name == "S8") {
						c = 479.97;
					}
					else if (class_name == "S9") {
						c = 454.068;
					}
					else if (class_name == "S10") {
						c = 432.476;
					}
					else if (class_name == "S11") {
						c = 462.868;
					}
					else if (class_name == "S12") {
						c = 413.816;
					}
					else if (class_name == "S13") {
						c = 421.74;
					}
					else if (class_name == "S14") {
						c = 428.045;			
					}
				}
				break;
			case 3:
				if (gender == "Male") {
					b = 5.85741;
					validInput = true;
					if (class_name == "S1") {
						c = 2069.044 ;
					}
					else if (class_name == "S2") {
						c = 1792.375;
					}
					else if (class_name == "S3") {
						c = 1442.311;
					}
					else if (class_name == "S4") {
						c = 1202.718;
					}
					else if (class_name == "S5") {
						c = 1121.535 ;
					}
					else if (class_name == "S6") {
						c = 1090.875;
					}
					else if (class_name == "S7") {
						c = 1009.476;
					}
					else if (class_name == "S8") {
						c = 949.555;
					}
					else if (class_name == "S9") {
						c = 904.288;
					}
					else if (class_name == "S10") {
						c = 858.446;
					}
					else if (class_name == "S11") {
						c = 958.315;
					}
					else if (class_name == "S12") {
						c = 887.098;
					}
					else if (class_name == "S13") {
						c = 848.808 ;
					}
					else if (class_name == "S14") {
						c = 861.353;
					}

				}

				if (gender == "Female") {
					b = 5.542626;
					validInput = true;
					if (class_name == "S1") {
						c = 2171.051;
					}
					else if (class_name == "S2") {
						c = 1927.468;
					}
					else if (class_name == "S3") {
						c = 1499.114;
					}
					else if (class_name == "S4") {
						c = 1240.899;
					}
					else if (class_name == "S5") {
						c = 1193.062;
					}
					else if (class_name == "S6") {
						c = 1092.894;
					}
					else if (class_name == "S7") {
						c = 1087.574;
					}
					else if (class_name == "S8") {
						c = 1011.224;
					}
					else if (class_name == "S9") {
						c = 986.083;
					}
					else if (class_name == "S10") {
						c = 920.564;
					}
					else if (class_name == "S11") {
						c = 1002.823;
					}
					else if (class_name == "S12") {
						c = 896.543;
					}
					else if (class_name == "S13") {
						c = 924.019;
					}
					else if (class_name == "S14") {
						c = 916.839;				
					}
				}
				break;
			case 4:
				if (gender == "Male") {
					b = 7.031938;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 7.169493;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 5:
				if (gender == "Male") {
					b = 8.625102;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 9.665276 ;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 6:
				if (gender == "Male") {
					b = 8.333206;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
						b = 7.711087;
					}
					else if (class_name == "S12") {
						c = 183.932;
						b = 7.711087;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 8.865509;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
						b = 9.178323;
					}
					else if (class_name == "S12") {
						c = 189.189;
						b = 9.178323;

					}
					else if (class_name == "S13") {
						c = 191.273;
						b= 9.178323;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 7:
				if (gender == "Male") {
					b = 4.42461;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 4.463099;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 8:
				if (gender == "Male") {
					b = 6.150928;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 6.036088 ;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 9:
				if (gender == "Male") {
					b = 7.819807;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 7.752011;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 10:
				if (gender == "Male") {
					b = 4.932103;
					validInput = true;
					if (class_name == "SB1") {
						c = 515.385;
					}
					else if (class_name == "SB2") {
						c = 433.181;
					}
					else if (class_name == "SB3") {
						c = 333.674;
					}
					else if (class_name == "SB4") {
						c = 268.021;
					}
					else if (class_name == "SB5") {
						c = 244.5;
					}
					else if (class_name == "SB6") {
						c = 228.082;
					}
					else if (class_name == "SB7") {
						c = 217.608;
					}
					else if (class_name == "SB8") {
						c = 207.301;
					}
					else if (class_name == "SB9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "SB11") {
						c = 199.846;
					}
					else if (class_name == "SB12") {
						c = 183.932;
					}
					else if (class_name == "SB13") {
						c = 183.895;
					}
					else if (class_name == "SB14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 4.557367;
					validInput = true;
					if (class_name == "SB1") {
						c = 496.208;
					}
					else if (class_name == "SB2") {
						c = 422.286;
					}
					else if (class_name == "SB3") {
						c = 340.569;
					}
					else if (class_name == "SB4") {
						c = 263.585;
					}
					else if (class_name == "SB5") {
						c = 260.748;
					}
					else if (class_name == "SB6") {
						c = 236.95;
					}
					else if (class_name == "SB7") {
						c = 229.74;
					}
					else if (class_name == "SB8") {
						c = 218.616;
					}
					else if (class_name == "SB9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "SB11") {
						c = 207.528;
					}
					else if (class_name == "SB12") {
						c = 189.189;
					}
					else if (class_name == "SB13") {
						c = 191.273;
					}
					else if (class_name == "SB14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 11:
				if (gender == "Male") {
					b = 5.160068;
					validInput = true;
					if (class_name == "SB1") {
						c = 515.385;
					}
					else if (class_name == "SB2") {
						c = 433.181;
					}
					else if (class_name == "SB3") {
						c = 333.674;
					}
					else if (class_name == "SB4") {
						c = 268.021;
					}
					else if (class_name == "SB5") {
						c = 244.5;
					}
					else if (class_name == "SB6") {
						c = 228.082;
					}
					else if (class_name == "SB7") {
						c = 217.608;
					}
					else if (class_name == "SB8") {
						c = 207.301;
					}
					else if (class_name == "SB9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "SB11") {
						c = 199.846;
					}
					else if (class_name == "SB12") {
						c = 183.932;
					}
					else if (class_name == "SB13") {
						c = 183.895;
					}
					else if (class_name == "SB14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 5.069247 ;
					validInput = true;
					if (class_name == "SB1") {
						c = 496.208;
					}
					else if (class_name == "SB2") {
						c = 422.286;
					}
					else if (class_name == "SB3") {
						c = 340.569;
					}
					else if (class_name == "SB4") {
						c = 263.585;
					}
					else if (class_name == "SB5") {
						c = 260.748;
					}
					else if (class_name == "SB6") {
						c = 236.95;
					}
					else if (class_name == "SB7") {
						c = 229.74;
					}
					else if (class_name == "SB8") {
						c = 218.616;
					}
					else if (class_name == "SB9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "SB11") {
						c = 207.528;
					}
					else if (class_name == "SB12") {
						c = 189.189;
					}
					else if (class_name == "SB13") {
						c = 191.273;
					}
					else if (class_name == "SB14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 12:
				if (gender == "Male") {
					b = 8.141971;
					validInput = true;
					if (class_name == "SB1") {
						c = 515.385;
					}
					else if (class_name == "SB2") {
						c = 433.181;
					}
					else if (class_name == "SB3") {
						c = 333.674;
					}
					else if (class_name == "SB4") {
						c = 268.021;
					}
					else if (class_name == "SB5") {
						c = 244.5;
					}
					else if (class_name == "SB6") {
						c = 228.082;
					}
					else if (class_name == "SB7") {
						c = 217.608;
					}
					else if (class_name == "SB8") {
						c = 207.301;
					}
					else if (class_name == "SB9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "SB11") {
						c = 199.846;
					}
					else if (class_name == "SB12") {
						c = 183.932;
					}
					else if (class_name == "SB13") {
						c = 183.895;
					}
					else if (class_name == "SB14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 8.185088;
					validInput = true;
					if (class_name == "SB1") {
						c = 496.208;
					}
					else if (class_name == "SB2") {
						c = 422.286;
					}
					else if (class_name == "SB3") {
						c = 340.569;
					}
					else if (class_name == "SB4") {
						c = 263.585;
					}
					else if (class_name == "SB5") {
						c = 260.748;
					}
					else if (class_name == "SB6") {
						c = 236.95;
					}
					else if (class_name == "SB7") {
						c = 229.74;
					}
					else if (class_name == "SB8") {
						c = 218.616;
					}
					else if (class_name == "SB9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "SB11") {
						c = 207.528;
					}
					else if (class_name == "SB12") {
						c = 189.189;
					}
					else if (class_name == "SB13") {
						c = 191.273;
					}
					else if (class_name == "SB14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 13:
				if (gender == "Male") {
					b = 5.033853;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 4.487057;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 14:
				if (gender == "Male") {
					b = 7.040091;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 5.992308;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 15:
				if (gender == "Male") {
					b = 9.504863;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 10.211003;
					validInput = true;
					if (class_name == "S1") {
						c = 496.208;
					}
					else if (class_name == "S2") {
						c = 422.286;
					}
					else if (class_name == "S3") {
						c = 340.569;
					}
					else if (class_name == "S4") {
						c = 263.585;
					}
					else if (class_name == "S5") {
						c = 260.748;
					}
					else if (class_name == "S6") {
						c = 236.95;
					}
					else if (class_name == "S7") {
						c = 229.74;
					}
					else if (class_name == "S8") {
						c = 218.616;
					}
					else if (class_name == "S9") {
						c = 206.819;
					}
					else if (class_name == "S10") {
						c = 198.416;
					}
					else if (class_name == "S11") {
						c = 207.528;
					}
					else if (class_name == "S12") {
						c = 189.189;
					}
					else if (class_name == "S13") {
						c = 191.273;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 16:
				if (gender == "Male") {
					b = 4.953288;
					validInput = true;
					if (class_name == "S1") {
						c = 515.385;
					}
					else if (class_name == "S2") {
						c = 433.181;
					}
					else if (class_name == "S3") {
						c = 333.674;
					}
					else if (class_name == "S4") {
						c = 268.021;
					}
					else if (class_name == "S5") {
						c = 244.5;
					}
					else if (class_name == "S6") {
						c = 228.082;
					}
					else if (class_name == "S7") {
						c = 217.608;
					}
					else if (class_name == "S8") {
						c = 207.301;
					}
					else if (class_name == "S9") {
						c = 198.669;
					}
					else if (class_name == "S10") {
						c = 188.441;
					}
					else if (class_name == "S11") {
						c = 199.846;
					}
					else if (class_name == "S12") {
						c = 183.932;
					}
					else if (class_name == "S13") {
						c = 183.895;
					}
					else if (class_name == "S14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 3.983352  ;
					validInput = true;
					if (class_name == "SM1") {
						c = 496.208;
						b = 4.044227;
					}
					else if (class_name == "SM2") {
						c = 422.286;
					}
					else if (class_name == "SM3") {
						c = 340.569;
					}
					else if (class_name == "SM4") {
						c = 263.585;
					}
					else if (class_name == "SM5") {
						c = 260.748;
					}
					else if (class_name == "SM6") {
						c = 236.95;
					}
					else if (class_name == "SM7") {
						c = 229.74;
					}
					else if (class_name == "SM8") {
						c = 218.616;
					}
					else if (class_name == "SM9") {
						c = 206.819;
					}
					else if (class_name == "SM10") {
						c = 198.416;
					}
					else if (class_name == "SM11") {
						c = 207.528;
					}
					else if (class_name == "SM12") {
						c = 189.189;
					}
					else if (class_name == "SM13") {
						c = 191.273;
					}
					else if (class_name == "SM14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 17:
				if (gender == "Male") {
					b = 7.155608;
					validInput = true;
					if (class_name == "SM1") {
						c = 515.385;
					}
					else if (class_name == "SM2") {
						c = 433.181;
					}
					else if (class_name == "SM3") {
						c = 333.674;
					}
					else if (class_name == "SM4") {
						c = 268.021;
					}
					else if (class_name == "SM5") {
						c = 244.5;
					}
					else if (class_name == "SM6") {
						c = 228.082;
					}
					else if (class_name == "SM7") {
						c = 217.608;
					}
					else if (class_name == "SM8") {
						c = 207.301;
					}
					else if (class_name == "SM9") {
						c = 198.669;
					}
					else if (class_name == "SM10") {
						c = 188.441;
					}
					else if (class_name == "SM11") {
						c = 199.846;
					}
					else if (class_name == "SM12") {
						c = 183.932;
					}
					else if (class_name == "SM13") {
						c = 183.895;
					}
					else if (class_name == "SM14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 6.904309;
					validInput = true;
					if (class_name == "SM1") {
						c = 496.208;
					}
					else if (class_name == "SM2") {
						c = 422.286;
					}
					else if (class_name == "SM3") {
						c = 340.569;
						b = 6.917578;
					}
					else if (class_name == "SM4") {
						c = 263.585;
					}
					else if (class_name == "SM5") {
						c = 260.748;
					}
					else if (class_name == "SM6") {
						c = 236.95;
					}
					else if (class_name == "SM7") {
						c = 229.74;
					}
					else if (class_name == "SM8") {
						c = 218.616;
					}
					else if (class_name == "SM9") {
						c = 206.819;
					}
					else if (class_name == "SM10") {
						c = 198.416;
					}
					else if (class_name == "SM11") {
						c = 207.528;
					}
					else if (class_name == "SM12") {
						c = 189.189;
					}
					else if (class_name == "SM13") {
						c = 191.273;
					}
					else if (class_name == "SM14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;
			case 18:
				if (gender == "Male") {
					b = 9.693428;
					validInput = true;
					if (class_name == "SM1") {
						c = 515.385;
					}
					else if (class_name == "SM2") {
						c = 433.181;
					}
					else if (class_name == "SM3") {
						c = 333.674;
					}
					else if (class_name == "SM4") {
						c = 268.021;
					}
					else if (class_name == "SM5") {
						c = 244.5;
					}
					else if (class_name == "SM6") {
						c = 228.082;
					}
					else if (class_name == "SM7") {
						c = 217.608;
					}
					else if (class_name == "SM8") {
						c = 207.301;
					}
					else if (class_name == "SM9") {
						c = 198.669;
					}
					else if (class_name == "SM10") {
						c = 188.441;
					}
					else if (class_name == "SM11") {
						c = 199.846;
					}
					else if (class_name == "SM12") {
						c = 183.932;
					}
					else if (class_name == "SM13") {
						c = 183.895;
					}
					else if (class_name == "SM14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;
					}

				}

				if (gender == "Female") {
					b = 8.825412;
					validInput = true;
					if (class_name == "SM1") {
						c = 496.208;
					}
					else if (class_name == "SM2") {
						c = 422.286;
					}
					else if (class_name == "SM3") {
						c = 340.569;
					}
					else if (class_name == "SM4") {
						c = 263.585;
					}
					else if (class_name == "SM5") {
						c = 260.748;
					}
					else if (class_name == "SM6") {
						c = 236.95;
					}
					else if (class_name == "SM7") {
						c = 229.74;
					}
					else if (class_name == "SM8") {
						c = 218.616;
					}
					else if (class_name == "SM9") {
						c = 206.819;
					}
					else if (class_name == "SM10") {
						c = 198.416;
					}
					else if (class_name == "SM11") {
						c = 207.528;
					}
					else if (class_name == "SM12") {
						c = 189.189;
					}
					else if (class_name == "SM13") {
						c = 191.273;
					}
					else if (class_name == "SM14") {
						cout << "Not Availble for Your Class" << endl;
						validInput = false;				
					}
				}
				break;


			default:
            			cout << "Invalid event. Try again.\n" << endl;
            			validInput = false;
            			break;

		}
	}
	cout << endl;

	float p = 0.0f;
	cout << "------ Enter Time in Seconds ------" << endl;
	cin >> p;
	
	float exponent_layer2 = b - (c / p);
	float exponent_layer1 = -exp(exponent_layer2);
	float q = static_cast<float>(a) * exp(exponent_layer1);
 	cout << q << endl;
	return 0;
}
