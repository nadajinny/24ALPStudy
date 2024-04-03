#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;     
	int N;            
	string command;    
	int num;           
	int result = 0;    

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;

		
		if (command == "push") {
			cin >> num;
			s.push(num);
		}

		// 2. pop
		
		else if (command == "pop") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
				s.pop();
			}
		}

		// 3. size
		else if (command == "size") {
			cout << s.size() << endl;
		}

		// 4. empty
		//    size함수를 통해, size가 0이면 스택이 빈 것이므로 1, 아니면 0 출력     
		else if (command == "empty") {
			if (s.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}

		// 5. top
		//    스택이 비어있으면 -1을 출력, 그 외에는 top 값을 출력
		else if (command == "top") {
			if (s.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = s.top();
				cout << result << endl;
			}
		}
	}

	return 0;
}
