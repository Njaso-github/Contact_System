#include <iostream>
#include <string>
using namespace std;

struct members{
	string name;
	int number;
};

int index = 0;
members members[10000];

int main(){

			while(true){
			system("cls");
			cout << "-------------------- 通讯录 --------------------" << endl;
			cout << "1. 添加联系人" << endl;
			cout << "2. 查找联系人" << endl;
			cout << "3. 删除联系人" << endl;
			cout << "4. 退出" << endl;
			int n;
			cin >> n;
			
			if (n == 1){
				flag:
				system("cls");
				cout << "输入联系人名称" << endl;
				cin >> members[index].name;
				for(int x = 0 ; x != index && x < 10000 ; x++){
					if(members[index].name == members[x].name){
						cout << "联系人名称重复, 请输入另一名称" << endl;
						system("pause");
						goto flag;
					}
				}
				cout << "输入联系人电话号码" << endl; 
				cin >> members[index].number;
				members[index];
				index++;
			}else if(n == 2){
				system("cls");
				cout << "输入要查找的联系人名称" << endl;
				string n_search;
				cin >> n_search;
				int temp = 0;
				for(int x = 0 ; x < 10000 ; x++){
					if (n_search == members[x].name){
						cout << members[x].number << endl;
						system("pause");
						temp++;
					}
				}
				if (temp == 0){
						cout << "联系人不存在" << endl;
						system("pause"); 
					}
			}else if(n == 3){
				system("cls");
				cout << "输入要删除的联系人名称" << endl; 
				string n_delete;
				cin >> n_delete;
				for (int x = 0 ; x < 10000 ; x++){
					if (n_delete == members[x].name){
						cout << "你确定删除该联系人吗?" << endl;
						cout << "1:确定 0:否" << endl;
						int check;
						cin >> check;
						if (check == 1){
							members[x] = {"", 0};
						}
					}
				}
			}else if(n == 4){
					break;
			}else{
				continue;
			}
		}
	}
