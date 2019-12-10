#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

enum MenuList
{
	WISP = 1, SWEET, DREAM, GOLDAPPLE, ROYALSTYLE, ROYALHAIR, ROYALFACE, EXIT
};

int getRandomNumber(int min, int max)
{
	random_device rn;
	mt19937_64 rnd(rn());
	uniform_int_distribution<int> range(min, max);

	return range(rnd);
}

void ShowMenu() {
	cout << "============== ������ Ȯ�� ���� ==============" << endl;
	cout << " 1. ������ ��������" << endl;
	cout << " 2. �糪ũ����Ż ����" << endl;
	cout << " 3. �糪ũ����Ż �帲" << endl;
	cout << " 4. ������" << endl;
	cout << " 5. �ξ⽺Ÿ��" << endl;
	cout << " 6. �ξ� ��� ����" << endl;
	cout << " 7. �ξ� ���� ����" << endl;
	cout << " 8. ����" << endl;
	cout << "===============================================" << endl;
	cout << ">> ";
}

void WispWonderBerry() {
	int random = 0, n = 0;
	string any;

	string name[10] = { "������ ���� ��Ű(10��)", "����� �����̾� ������ ��", "��Ű����", "�ڱ���̽�", "��Ƽ ����", "������ ����", "��ũ�� ����", "������", "������", "�ݱ���" };
	int probability[10] = { 1560, 3004, 4084, 5164, 6244, 7624, 9004, 9336, 9668, 10000 };
	vector<int> result(10, 0);

	cout << "������ Ƚ�� : ";
	cin >> n;

	REPLAY:

	for (int i = 0; i < n; i++) {
		random = getRandomNumber(1, 10000);

		for (int j = 0; j < result.size(); j++) {
			if (probability[j] >= random) {
				result[j]++;
				break;
			}
		}
	}

	cout << endl;

	for (int k = 0; k < result.size(); k++) {
		if (result[k] != 0) {
			cout << name[k] << " : " << result[k] << endl;
		}
	}

	cout << endl << "�ٽ� ����(1)/������(2) >> " << flush;
	cin >> any;

	if (atoi(any.c_str()) == 1) {
		result.clear();
		result.assign(10, 0);
		goto REPLAY;
	}
	else {
		system("cls");
	}
}

void LunaCrystalSweet() {
	int random = 0, n = 0;
	string any;

	string name[13] = { "������", "������", "������", "������", "�ڽ����", "�Ƹ޽ý�Ʈ", "����", "�Ͻ�", "�н�", "���丮", "�۷θ�", "�ڶ� ����", "�糪 ũ����Ż Ű" };
	int probability[13] = { 960, 1920, 2880, 3840, 4800, 5760, 6720, 7680, 8640, 9028, 9416, 9804, 10000 };
	vector<int> result(13, 0);

	cout << "������ Ƚ�� : ";
	cin >> n;

	REPLAY:

	for (int i = 0; i < n; i++) {
		random = getRandomNumber(1, 10000);

		for (int i = 0; i < result.size(); i++) {
			if (probability[i] >= random) {
				result[i]++;
				break;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < result.size(); i++) {
		if (result[i] != 0) {
			cout << name[i] << " : " << result[i] << endl;
		}
	}

	cout << endl << "�ٽ� ����(1)/������(2) >> " << flush;
	cin >> any;

	if (atoi(any.c_str()) == 1) {
		result.clear();
		result.assign(13, 0);
		goto REPLAY;
	}
	else {
		system("cls");
	}
}

void LunaCrystalDream() {
	int random = 0, n = 0;
	string any;

	string name[13] = { "������", "������", "������", "������", "�ڽ����", "�Ƹ޽ý�Ʈ", "����", "�Ͻ�", "�н�", "���丮", "�۷θ�", "�ڶ� ����", "�糪 ũ����Ż Ű" };
	int probability[13] = { 840, 1680, 2520, 3360, 4200, 5040, 5880, 6720, 7560, 8240, 8920, 9600, 10000 };
	vector<int> result(13, 0);

	cout << "������ Ƚ�� : ";
	cin >> n;

	REPLAY:

	for (int i = 0; i < n; i++) {
		random = getRandomNumber(1, 10000);

		for (int i = 0; i < result.size(); i++) {
			if (probability[i] >= random) {
				result[i]++;
				break;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < result.size(); i++) {
		if (result[i] != 0) {
			cout << name[i] << " : " << result[i] << endl;
		}
	}

	cout << endl << "�ٽ� ����(1)/������(2) >> " << flush;
	cin >> any;

	if (atoi(any.c_str()) == 1) {
		result.clear();
		result.assign(13, 0);
		goto REPLAY;
	}
	else {
		system("cls");
	}
}

void GoldApple() {
	int random = 0, n = 0, res = 0;
	string any;

	string name[131] = { "������ �ñ׳ʽ��� �ҿ�", "������ ��ũ���� �ҿ�", "������ ��ī���� �ҿ�", "������ ��ī�̷��� �ҿ�", "�� ��Ʈ", "ī���� ��ũ�� ��ũ", "���̳����� ���Ʈ", "�ҷ�Ĺ���̵� ��ȯ��", "�ھ� ������ 10�� ��ȯ��", "������ ��Ų ���� ���� 1ĭ Ȯ���", "���� ������ ��Ų", "������ ������ ������ ��Ų", "��ī���̴�!", "�޷��� ���� ���̵�(����) ��ȯ��", "�޷��� ���� ���̵�(90��) ��ȯ��", "�����̾� �Ǽ����� ���ݷ� ��ũ�� 100 %", "�����̾� ����� ���ݷ� ��ũ�� 100 %", "�����̾� ����� ���� ��ũ�� 100 %", "�����̾� �Ǽ����� ���� ��ũ�� 100 %", "������ ȯ���� �Ҳ�", "ƼŸ�� ��Ʈ", "��Ƭ ��Ʈ", "ũ����Ż ��Ʈ", "��� ��Ʈ", "����� �ñ׳ʽ��� �ҿ�", "������ �ñ׳ʽ��� �ҿ�", "�Ѹ��� �ñ׳ʽ��� �ҿ�", "���� �ñ׳ʽ��� �ҿ�", "ȭ���� �ñ׳ʽ��� �ҿ�", "������ �ñ׳ʽ��� �ҿ�", "������ �ñ׳ʽ��� �ҿ�", "������ �ñ׳ʽ��� �ҿ�", "������ ������ �ʴ� �Ҳ� ����", "����� �ҿ� ��æ��", "������ �Ͽ�� �̾", "���̴� ���� ������ ���̽��� �ɺ�", "���̴� ���� ���� ���̽��� �ɺ�", "���̴� ���� ������ ���̽��� �ɺ�", "��� ���� ���Ʈ", "���� ������ ���̽��� �ɺ�", "���� ���̷� ���̽��� �ɺ�", "���� �̾", "���� ���� ���̽��� �ɺ�", "���� ������ ���̽��� �ɺ�", "���� ��ó ���̽��� �ɺ�", "���۽� ���� ���Ʈ", "�ƿｺ ���� ���Ʈ", "������ ���� ���Ʈ", "���̴� ���� ��ó ���̽��� �ɺ�", "���̴� ���� ���̷� ���̽��� �ɺ�", "�������� �ͽ�Ʈ�� ��Ʈ", "������ �ͽ�Ʈ�� ��Ʈ", "����� �ͽ�Ʈ�� ��Ʈ", "�Ժ� �Ͽ�� �̾", "��ī�ο� �ͽ�Ʈ�� ��Ʈ", "ü���� �Ͽ�� �̾", "������ �Ͽ�� �̾", "����� ���ݷ� ��ũ�� 100 %", "����� ���� ��ũ�� 100 %", "�Ǽ����� ���ݷ� ��ũ�� 100 %", "�Ǽ����� ���� ��ũ�� 100 %", "���� ����ɷ� �ο� �ֹ��� 50 %", "����ų� ����ɷ� �ο� �ֹ��� 70 %", "Ȳ�� ��ġ 100 %", "����� ��ũ���� �ҿ�", "������ ��ũ���� �ҿ�", "�Ѹ��� ��ũ���� �ҿ�", "���� ��ũ���� �ҿ�", "ȭ���� ��ũ���� �ҿ�", "������ ��ũ���� �ҿ�", "������ ��ũ���� �ҿ�", "������ ��ũ���� �ҿ�", "����� ��ī���� �ҿ�", "������ ��ī���� �ҿ�", "�Ѹ��� ��ī���� �ҿ�", "���� ��ī���� �ҿ�", "ȭ���� ��ī���� �ҿ�", "������ ��ī���� �ҿ�", "������ ��ī���� �ҿ�", "������ ��ī���� �ҿ�", "����� ��ī�̷��� �ҿ�", "������ ��ī�̷��� �ҿ�", "�Ѹ��� ��ī�̷��� �ҿ�", "���� ��ī�̷��� �ҿ�", "ȭ���� ��ī�̷��� �ҿ�", "������ ��ī�̷��� �ҿ�", "������ ��ī�̷��� �ҿ�", "������ ��ī�̷��� �ҿ�", "�ҿ� ���ر�", "�ҿ� 20ĭ ����", "�Ĺ��� 20ĭ ����", "������ 20ĭ ����", "���۹�ǰ 20ĭ ����", "������ 20ĭ ����", "���� 20ĭ ����", "Īȣ 20ĭ ���� ����", "�ֹ��� 20ĭ ����", "������ ������ ����", "������ �ǳ�Ű�� ��", "�������� ���̽�������", "����� �ǳ�Ű�� ��", "��ø�� �ǳ�Ű�� ��", "���� ����ũ", "���� �ǳ�Ű�� ��", "�ݺ� ������ ����", "������ ȥ�� �ֹ��� 30 %", "������ ȥ�� �ֹ��� 50 %", "���� ȥ���� �ֹ��� 30 %", "���� ȥ���� �ֹ��� 40 %", "���� ȥ���� �ֹ��� 50 %", "���� ȥ���� �ֹ��� 60 %", "���� ȥ���� �ֹ��� 70 %", "������ �ֹ��� 10 %", "������ �ֹ��� 5 %", "���� ������ ����", "���� ����ų� ������ ����", "ȥ���� �ֹ��� 70 %", "Ȳ�� ��ġ 50 %", "�̶�Ŭ �尩 ���ݷ� �ֹ��� 50 %", "�̶�Ŭ ����� ���ݷ� �ֹ��� 50 %", "�̶�Ŭ �Ǽ����� ���ݷ� �ֹ��� 50 %", "�̶�Ŭ �Ǽ����� ���� �ֹ��� 50 %", "�̶�Ŭ �� ���ݷ� �ֹ��� 50 %", "�̶�Ŭ ����� ���� �ֹ��� 50 %", "�̶�Ŭ �� ���� �ֹ��� 50 %", "�Ǽ����� ���ݷ� �ֹ��� 70 %", "�� ���ݷ� �ֹ��� 70 %", "����� ���ݷ� �ֹ��� 70 %", "�� ���� �ֹ��� 70 %", "����� ���� �ֹ��� 70 %", "�Ǽ����� ���� �ֹ��� 70 %" };
	double sosu[131] = { 0.04817, 0.38533, 0.19266, 0.77065, 0.00385, 0.00385, 0.00963, 0.0578, 0.19266, 0.04817, 0.06743, 0.03853, 0.96332, 0.09633, 0.48166, 0.01927, 0.01927, 0.01927, 0.01927, 0.09633, 0.01927, 0.289, 0.38533, 0.57799,  0.00963, 0.00963, 0.00963, 0.00963, 0.00963, 0.00963, 0.00963,0.00963, 0.48166, 0.48166, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.38533, 0.38533, 0.38533, 0.38533, 0.38533, 0.289, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 3.85327, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.92663, 1.92663, 1.92663, 1.44498, 0.96332, 0.96332, 0.96332, 0.96332, 0.96332, 1.44498, 1.92663, 1.92663, 1.92663, 0.96332, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663 };
	int probability[131];

	for (int i = 0; i < 131; i++) {
		res += (sosu[i] * 100000);
		probability[i] = res;
	}

	vector<int> result(131, 0);

	cout << "������ Ƚ�� : ";
	cin >> n;

	REPLAY:

	for (int i = 0; i < n; i++) {
		random = getRandomNumber(1, 10000006);

		for (int i = 0; i < result.size(); i++) {
			if (probability[i] >= random) {
				result[i]++;
				break;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < result.size(); i++) {
		if (result[i] != 0) {
			cout << name[i] << " : " << result[i] << endl;
		}
	}

	cout << endl << "�ٽ� ����(1)/������(2) >> " << flush;
	cin >> any;

	if (atoi(any.c_str()) == 1) {
		result.clear();
		result.assign(131, 0);
		goto REPLAY;
	}
	else {
		system("cls");
	}
}

void RoyalStyle() {
	int random = 0, n = 0;
	string any;

	string name[25] = { "[����� ��] �÷��� ũ���", "[����� ��] �̱״Ͻ�", "[����� ��] �÷��� ��Ŭ", "[����� ��] �̱׳���Ʈ", "[����� ��] �÷��� ��ũ", "���� ����", "���� �󺥴�", "�ε� �󺥴� �ĵ�(��) / �ε� ��ũ �ĵ�(��)", "��ũ�� ��� ���", "�󺥴� ����Ŀ��", "��ȣ�� ö�� ĸ", "��ȣ�� ö�� ����(��) / ��ȣ�� ö�� ����(��)", "��ȣ�� ö��", "��ȣ�� ö�� ����(��) / ��ȣ�� ö�� ����(��)", "���� ����", "����ũ �ủ����", "��Ű ���κ���", "��ũ ���� ����", "���� �¿�����", "������ ȫ��", "�в� ������", "[30��]�в� ���� ��ǳ������ ��ȯ��", "[30��]�в� ���� �������� ��ȯ��", "�̺ҹ��� ������!", "��ī����" };
	int probability[25] = { 310, 640, 930, 1180, 1500, 1650, 2050, 2450, 2800, 3300, 3800, 4200, 4400, 4900, 5150, 5650, 6150, 6650, 7150, 7600, 8000, 8500, 9000, 9500, 10000 };
	vector<int> result(25, 0);

	cout << "������ Ƚ�� : ";
	cin >> n;

	REPLAY:

	for (int i = 0; i < n; i++) {
		random = getRandomNumber(1, 10000);

		for (int i = 0; i < result.size(); i++) {
			if (probability[i] >= random) {
				result[i]++;
				break;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < result.size(); i++) {
		if (result[i] != 0) {
			cout << name[i] << " : " << result[i] << endl;
		}
	}

	cout << endl << "�ٽ� ����(1)/������(2) >> " << flush;
	cin >> any;

	if (atoi(any.c_str()) == 1) {
		result.clear();
		result.assign(25, 0);
		goto REPLAY;
	}
	else {
		system("cls");
	}
}

void RoyalHairCoupon() {
	int random = 0, n = 0, m = 0;
	string any;

	string man_name[6] = { "�׻� ���", "��� ���", "���ϵ� ���� ���", "����Ʈ ���", "�㸮���� ���", "�Ⱥ����� ���" };
	int man_probability[6] = { 1000, 2500, 4000, 6000, 8000, 10000 };

	string woman_name[6] = { "���� ���", "���ٴ� ���", "�ҽ� ���", "�ν� ���", "�������� ���", "��Ǯ�� �� ���" };
	int woman_probability[6] = { 1000, 2500, 4000, 6000, 8000, 10000 };

	vector<int> result(6, 0);

	cout << "������ Ƚ�� : ";
	cin >> n;
	cout << "����(1)/����(2)";
	cin >> m;

	REPLAY:

	if (m == 1) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10000);
	
			for (int i = 0; i < result.size(); i++) {
				if (man_probability[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << man_name[i] << " : " << result[i] << endl;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10000);

			for (int i = 0; i < result.size(); i++) {
				if (woman_probability[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << woman_name[i] << " : " << result[i] << endl;
			}
		}
	}

	cout << endl << "�ٽ� ����(1)/������(2) >> " << flush;
	cin >> any;

	if (atoi(any.c_str()) == 1) {
		result.clear();
		result.assign(6, 0);
		goto REPLAY;
	}
	else {
		system("cls");
	}
}

void RoyalFaceCoupon() {
	int random = 0, n = 0, m = 0;
	string any;

	string man_name[6] = { "���θ� ��", "���� ��", "���Ѻ��� ��", "�Ϸ��� ��", "������ ��", "�ں�ȫ ��" };
	int man_probability[6] = { 1666, 3333, 4999, 6666, 8337, 10000 };

	string woman_name[6] = { "���θ� ��", "���� ��", "���� ��", "����� ��", "������ ��", "�ں�ȫ ��" };
	int woman_probability[6] = { 1666, 3333, 4999, 6666, 8337, 10000 };

	vector<int> result(6, 0);

	cout << "������ Ƚ�� : ";
	cin >> n;
	cout << "����(1)/����(2)";
	cin >> m;

	REPLAY:

	if (m == 1) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10000);

			for (int i = 0; i < result.size(); i++) {
				if (man_probability[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << man_name[i] << " : " << result[i] << endl;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10000);

			for (int i = 0; i < result.size(); i++) {
				if (woman_probability[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << woman_name[i] << " : " << result[i] << endl;
			}
		}
	}

	cout << endl << "�ٽ� ����(1)/������(2) >> " << flush;
	cin >> any;

	if (atoi(any.c_str()) == 1) {
		result.clear();
		result.assign(6, 0);
		goto REPLAY;
	}
	else {
		system("cls");
	}
}

int main() {
	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	int choice = 0;

	while (true) {
		ShowMenu();
		cin >> choice;

		switch (choice)
		{
			
			case(MenuList::WISP): WispWonderBerry();
				break;

			case(MenuList::SWEET): LunaCrystalSweet();
				break;

			case(MenuList::DREAM): LunaCrystalDream();
				break;

			case(MenuList::GOLDAPPLE): GoldApple();
				break;

			case(MenuList::ROYALSTYLE): RoyalStyle();
				break;

			case(MenuList::ROYALHAIR): RoyalHairCoupon();
				break;

			case(MenuList::ROYALFACE): RoyalFaceCoupon();
				break;

			default: cout << "�˸��� ���� �Է�" << endl;
				break;
		}

		if (choice == EXIT) {
			break;
		}
	}

	return 0;
}