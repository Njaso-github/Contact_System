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
			cout << "-------------------- ͨѶ¼ --------------------" << endl;
			cout << "1. �����ϵ��" << endl;
			cout << "2. ������ϵ��" << endl;
			cout << "3. ɾ����ϵ��" << endl;
			cout << "4. �˳�" << endl;
			int n;
			cin >> n;
			
			if (n == 1){
				flag:
				system("cls");
				cout << "������ϵ������" << endl;
				cin >> members[index].name;
				for(int x = 0 ; x != index && x < 10000 ; x++){
					if(members[index].name == members[x].name){
						cout << "��ϵ�������ظ�, ��������һ����" << endl;
						system("pause");
						goto flag;
					}
				}
				cout << "������ϵ�˵绰����" << endl; 
				cin >> members[index].number;
				members[index];
				index++;
			}else if(n == 2){
				system("cls");
				cout << "����Ҫ���ҵ���ϵ������" << endl;
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
						cout << "��ϵ�˲�����" << endl;
						system("pause"); 
					}
			}else if(n == 3){
				system("cls");
				cout << "����Ҫɾ������ϵ������" << endl; 
				string n_delete;
				cin >> n_delete;
				for (int x = 0 ; x < 10000 ; x++){
					if (n_delete == members[x].name){
						cout << "��ȷ��ɾ������ϵ����?" << endl;
						cout << "1:ȷ�� 0:��" << endl;
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
