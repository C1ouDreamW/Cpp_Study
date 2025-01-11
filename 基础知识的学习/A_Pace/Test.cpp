#include<bits/stdc++.h>
using namespace std;
ifstream fin;  //读取流
ofstream fout; //写入流




struct QA {
	string question;
	string option1;
	string option2;
	string option3;
	string option4;
	char answer;
};

int score = 0;
int cnt_wrong = 0;

void false_Test(vector<QA> false_list) {
	vector<QA> again_false_list;  //重新做错的题目列表
	std::cout << "-----------错误题目测试-----------" << endl;
	std::cout << "有" << false_list.size() << "道错误题目" << endl;
	std::cout << "是否进入错误题目测试？(Y/N)" << endl;
	char choice;
	cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		for (int i = 0; i < (int)false_list.size(); i++) {
			std::cout << "第" << i + 1 << "题：" << endl << false_list[i].question << endl;
			std::cout << "A. " << false_list[i].option1 << endl;
			std::cout << "B. " << false_list[i].option2 << endl;
			std::cout << "C. " << false_list[i].option3 << endl;
			std::cout << "D. " << false_list[i].option4 << endl;
			char ans;
			cin >> ans;
			if (ans == false_list[i].answer) {
				std::cout << "回答正确！" << endl;
			}
			else if (ans == 'Q' || ans == 'q') {
				std::cout << "测试结束！" << endl;
				return;
			}
			else {
				again_false_list.push_back(false_list[i]);
				std::cout << "回答错误！正确答案是" << false_list[i].answer << endl;
			}
		}
	}
	else {
		std::cout << "已退出错误题目测试！" << endl;
		return;
	}
	if (again_false_list.size() > 0) {
		false_Test(again_false_list);  //递归测试错误题目
	}
}

void random_Test(vector<QA>& qa_list) {
	//随机将qa_list中的题目打乱
	srand(time(0));
	for (int i = 0; i < (int)qa_list.size(); i++) {
		int j = rand() % (int)qa_list.size();
		swap(qa_list[i], qa_list[j]);
	}
	return;
}


void start_Test(string filename) { //读取文件并开始做题
	vector<QA> false_list;  //错误题目列表
	vector<QA> qa_list;  //题目列表
	fin.open(filename);
	if (!fin) {
		std::cout << "文件打开失败！" << endl;
		return ;
	}
	string line;
	bool ans_flag = false;//是否读取到答案
	int cnt = 1;
	QA qa;
	while (getline(fin, line)) {
		if (ans_flag) {
			int idx = 0;
			for (int i = 0; i < (int)line.size(); i++) {
				if (line[i] == 'A' || line[i] == 'B' || line[i] == 'C' || line[i] == 'D') {
					qa_list[idx++].answer = line[i];
				}
			}
			break;
		}
		if (!line.empty()) {
			if (line == "答案：") {
				ans_flag = true;
				continue;
			}
		}
		if (line.empty()) {
			continue;
		}
		if (cnt == 1) {
			qa.question = line;
			cnt++;
			continue;
		}
		else if (cnt == 2) {
			qa.option1 = line;
			cnt++;
			continue;
		}
		else if (cnt == 3) {
			qa.option2 = line;
			cnt++;
			continue;
		}
		else if (cnt == 4) {
			qa.option3 = line;
			cnt++;
			continue;
		}
		else if (cnt == 5) {
			qa.option4 = line;
			cnt = 1;
			qa_list.push_back(qa);
			continue;
		}
	}

	//对每题的选项随机排列
	for (int i = 0; i < (int)qa_list.size(); i++) {
		srand(time(0));
		string ans;
		if (qa_list[i].answer == 'A') {
			ans = qa_list[i].option1;
		}
		else if (qa_list[i].answer == 'B') {
			ans = qa_list[i].option2;
		}
		else if (qa_list[i].answer == 'C') {
			ans = qa_list[i].option3;
		}
		else if (qa_list[i].answer == 'D') {
			ans = qa_list[i].option4;
		}
		//随机排列
		int j = rand() % 5;
		if (j == 0) {
			swap(qa_list[i].option1, qa_list[i].option2);
		}
		else if (j == 1) {
			swap(qa_list[i].option1, qa_list[i].option3);
		}
		else if (j == 2) {
			swap(qa_list[i].option1, qa_list[i].option4);
		}
		else if (j == 3) {
			swap(qa_list[i].option2, qa_list[i].option3);
		}
		else if (j == 4) {
			swap(qa_list[i].option2, qa_list[i].option4);
		}
		else if (j == 5) {
			swap(qa_list[i].option3, qa_list[i].option4);
		}
		//更新正确答案
		for (int j = 0; j < 4; j++) {
			if (qa_list[i].option1 == ans) {
				qa_list[i].answer = 'A';
				break;
			}
			else if (qa_list[i].option2 == ans) {
				qa_list[i].answer = 'B';
				break;
			}
			else if (qa_list[i].option3 == ans) {
				qa_list[i].answer = 'C';
				break;
			}
			else if (qa_list[i].option4 == ans) {
				qa_list[i].answer = 'D';
				break;
			}
		}
	}
	std::cout << "-----------题库读取成功-----------" << endl;
	//操作说明
	std::cout << "╔═══════════════════════════操作说明═══════════════════════════════════════╗" << endl;
	std::cout << "║  1.输入答案时，请仅使用一个大写字母输入，回车确认                        ║ " << endl;
	std::cout << "║  2.若回答错误，则系统将自动判定为错误题目，并将该题目加入错误题目列表。  ║ " << endl;
	std::cout << "║  3.若错误题目列表中有题目，则在结束时可以选择进入错误题目测试。          ║ " << endl;
	std::cout << "║  4.若要提前结束测试，请输入Q或q。                                        ║" << endl;
	std::cout << "║  5.输入tp+题号跳转至指定题目（顺序模式下有效），例如tp1。                ║" << endl;
	std::cout << "║  6.部分题目只有三个选项，自动添加选项0占位，忽略即可                     ║" << endl;
	std::cout << "╚══════════════════════════════════════════════════════════════════════════╝" << endl;
	std::cout << "按任意键开始答题！" << endl;
	system("pause");


	std::cout << "要启用随机题目顺序模式吗？(Y/N)" << endl;
	bool isContinue = true;
	while (isContinue) {
		char choice;
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			random_Test(qa_list);  //随机题目顺序
			isContinue = false;
			std::cout << "-已启用随机题目顺序模式！(跳转功能关闭)" << endl;
		}
		else if (choice == 'N' || choice == 'n') {
			isContinue = false;
			std::cout << "-已关闭随机题目顺序模式！" << endl;
		}
		else {
			std::cout << "输入有误！请重新输入！" << endl;
		}
	}


	//开始做题

	std::cout << "-----------开 始 做 题-----------" << endl;
	std::cout << "共" << (int)qa_list.size() << "道题" << endl;
	for (int i = 0; i < (int)qa_list.size(); i++) {
		std::cout << "  第" << i + 1 << "题：" << endl << qa_list[i].question << endl;
		std::cout << "A. " << qa_list[i].option1 << endl;
		std::cout << "B. " << qa_list[i].option2 << endl;
		std::cout << "C. " << qa_list[i].option3 << endl;
		std::cout << "D. " << qa_list[i].option4 << endl;
		string ans;
		cin >> ans;
		if (ans[0] == qa_list[i].answer) {
			score++;
			std::cout << "回答正确！得1分！" << endl;
		}
		else if (ans[0] == 'Q' || ans[0] == 'q') {
			std::cout << "测试结束！" << endl;
			break;
		}
		else if (ans[0] == 'T' || ans[0] == 't') {
			int tp = 0;
			for (int j = 2; j < (int)ans.size(); j++) {
				tp = tp * 10 + ans[j] - '0';
			}
			if (tp > 0 && tp <= (int)qa_list.size()) {
				i = tp - 2;
				std::cout << "跳转至题目" << tp << "！" << endl;
			}
			else {
				std::cout << "输入的题号有误！" << endl;
				i--;
			}
		}
		else if (ans[0] != 'A' && ans[0] != 'B' && ans[0] != 'C' && ans[0] != 'D' && ans[0] != 'T' && ans[0] != 't' && ans[0] != 'Q' && ans[0] != 'q') {
			std::cout << "输入有误！请重新输入！" << endl;
			i--;
		}
		else {
			false_list.push_back(qa_list[i]);
			cnt_wrong++;
			std::cout << "回答错误！正确答案是" << qa_list[i].answer << endl;
		}
		std::cout << "-" << endl;
	}
	fin.close();
	std::cout << "测试结束，得分：" << score << "分，错题数：" << cnt_wrong << "道" << endl;
	std::cout << "----------------------------------" << endl;
	false_Test(false_list);  //错误题目测试
	return;
}

int main() {
	string filename = "C:\\Users\\C1\\Desktop\\期末\\军事理论\\单选题 - GBK.txt";
	start_Test(filename);
	std::cout << "答题结束，按任意键退出！" << endl;
	system("pause");
	return 0;

}