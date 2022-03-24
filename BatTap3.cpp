 #include<bits/stdc++.h>
 using namespace std;
*///BaiC2
// char doixung(char s1[100])
// {
//     long long i;
//     for(i=0;i<strlen(s1)/2;i++)
//          if(s1[i] != s1[strlen(s1)-1-i])
//             return 0;
//     return 1;
// }
// int main(){
//     char s1[100];
//     cin>>s1;
//     if(doixung(s1)==0)
//         cout<<"No";
//     if(doixung(s1)==1)
//         cout<<"Yes";
//     return 0 ;
// }


*///BaiC4_Dò mìn
//int main()
// {
//     srand(time(0));
//     int m,n;
//     char a[100][100];
//     cin>>m>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]=='*') cout<<"*"<<' ';
//             else{
//                 cout<<rand() % 9<<' ';
//             }

//         } cout<<endl;
//     }
// }


*///BaiC5_Bảng xoắn ốc
// int main() {
// 	int m, n;
// 	cin >> m >> n;
// 	int a[m][n];
// 	int dong = m, cot = n, k = 1, p = 0, i, j;
// 	while(k <= m*n){
// 		for(i = p; i < cot; i++) /*Loop to access the first row of the array*/
// 			a[p][i] = k++;
// 		for(i = p+1; i < dong; i++) /*Loop tp access the last column of the array*/
// 			a[i][cot-1] = k++;
// 		if ( p != dong-1){
// 			for(i = cot-2; i >=p; i--) /*Loop to access the last row of the array*/
// 				a[dong-1][i] = k++;
// 		}
// 		if(p!=cot-1){
// 			for(i = dong-2; i > p; i--) /*Loop to access the first column of the array*/
// 				a[i][p] = k++;
// 		}
// 		p++;dong --; cot --;
// 	}
// 	for(i = 0; i < m; i++){
// 		for(j = 0; j < n; j++)
// 			cout << a[i][j] << " ";
// 		cout << endl;
// 	}
// }

