//#include<iostream>
//using namespace std;
//
//int main(){
//	char weather[3][30];
//	int juneR = 0, juneC = 0, juneS = 0, julyR = 0, julyC = 0, julyS = 0, augustR = 0, augustC = 0, augustS = 0;
//	for (int i = 0; i < 3; i++){
//		if (i == 0){
//			cout << "Enter the data for June: ";
//		}
//		else if (i == 1){
//			cout << "Enter the data for July: ";
//		}
//		else{
//			cout << "Enter the data for August: ";
//		}
//		cout << endl;
//		for (int j = 0; j < 30; j++){
//			cout << "For " << j + 1 << " =";
//			cin >> weather[i][j];
//			if (i == 0){
//				if (weather[i][j] == 'R'){
//					juneR++;
//				}
//				else if (weather[i][j] == 'C'){
//					juneC++;
//				}
//				else{
//					juneS++;
//				}
//	
//			}
//			else if (i == 1){
//				if (weather[i][j] == 'R'){
//					julyR++;
//				}
//				else if (weather[i][j] == 'C'){
//					julyC++;
//				}
//				else{
//					julyS++;
//				}
//
//			}
//			else{
//				if (weather[i][j] == 'R'){
//					augustR++;
//				}
//				else if (weather[i][j] == 'C'){
//					augustC++;
//				}
//				else{
//					augustS++;
//				}
//
//			}
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++){
//
//		for (int j = 0; j < 3; j++){
//			cout << weather[i][j];
//			
//		}
//		cout << endl;
//	}
//	cout << "For June: " << endl << "Rainy days: " << juneR << endl << "Cloudy days: " << juneC << endl << "Sunny days: " << juneS << endl;
//	cout << "For July: " << endl << "Rainy days: " << julyR << endl << "Cloudy days: " << julyC << endl << "Sunny days: " << julyS << endl;
//	cout << "For August: " << endl << "Rainy days: " << augustR << endl << "Cloudy days: " << augustC << endl << "Sunny days: " << augustS << endl;
//	int totalR = juneR + julyR + augustR, totalC = juneC + julyC + augustC, totalS = juneS + julyS + augustS;
//	cout << "For the whole three month period: " << endl << "Rainy days: " << totalR << endl << "Cloudy days: " <<totalC << endl << "Sunny days: " << totalS << endl;
//	
//	if (juneR > julyR && juneR > augustR){
//		cout << "June";
//	}
//	else if (julyR > juneR && julyR > augustR){
//		cout << "July";
//	}
//	else{
//		cout << "August";
//	}
//	cout << " had the largest number of rainy days" << endl;
//	system("pause");
//	return 0;
//}