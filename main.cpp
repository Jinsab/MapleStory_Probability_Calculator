#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

enum MenuList
{
	WISP = 1, SWEET, DREAM, GOLDAPPLE, ROYALSTYLE, ROYALHAIR, ROYALFACE, MASTERPIECERED, MASTERPIECEBLACK, EXIT
};

int getRandomNumber(int min, int max)
{
	random_device rn;
	mt19937_64 rnd(rn());
	uniform_int_distribution<int> range(min, max);

	return range(rnd);
}

void ShowMenu() {
	cout << "============== 메이플 확률 계산기 ==============" << endl;
	cout << " 1. 위습의 원더베리" << endl;
	cout << " 2. 루나크리스탈 스윗" << endl;
	cout << " 3. 루나크리스탈 드림" << endl;
	cout << " 4. 골드애플" << endl;
	cout << " 5. 로얄스타일" << endl;
	cout << " 6. 로얄 헤어 쿠폰" << endl;
	cout << " 7. 로얄 성형 쿠폰" << endl;
	cout << " 8. 마스터피스 레드" << endl;
	cout << " 9. 마스터피스 블랙" << endl;
	cout << " 10. 종료" << endl;
	cout << "===============================================" << endl;
	cout << ">> ";
}

void WispWonderBerry() {
	int random = 0, n = 0;
	string any;

	string name[10] = { "오가닉 원더 쿠키(10개)", "고농축 프리미엄 생명의 물", "쿠키베어", "코기라이스", "예티 빠방", "슬라임 빠방", "핑크빈 빠방", "동동이", "은은이", "금금이" };
	int probability[10] = { 1560, 3004, 4084, 5164, 6244, 7624, 9004, 9336, 9668, 10000 };
	vector<int> result(10, 0);

	cout << "시행할 횟수 : ";
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

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

	string name[13] = { "펭펭이", "핑핑이", "퐁퐁이", "세레나", "코스모빗", "아메시스트", "리스", "하스", "닉스", "빅토리", "글로리", "쁘띠 포니", "루나 크리스탈 키" };
	int probability[13] = { 960, 1920, 2880, 3840, 4800, 5760, 6720, 7680, 8640, 9028, 9416, 9804, 10000 };
	vector<int> result(13, 0);

	cout << "시행할 횟수 : ";
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

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

	string name[13] = { "펭펭이", "핑핑이", "퐁퐁이", "세레나", "코스모빗", "아메시스트", "리스", "하스", "닉스", "빅토리", "글로리", "쁘띠 포니", "루나 크리스탈 키" };
	int probability[13] = { 840, 1680, 2520, 3360, 4200, 5040, 5880, 6720, 7560, 8240, 8920, 9600, 10000 };
	vector<int> result(13, 0);

	cout << "시행할 횟수 : ";
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

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

	string name[131] = { "위대한 시그너스의 소울", "위대한 핑크빈의 소울", "위대한 모카딘의 소울", "위대한 아카이럼의 소울", "페어리 하트", "카오스 핑크빈 마크", "도미네이터 펜던트", "할로캣로이드 교환권", "코어 젬스톤 10개 교환권", "데미지 스킨 저장 슬롯 1칸 확장권", "투명 데미지 스킨", "마스터 쉐도우 데미지 스킨", "마카롱이담!", "달려라 보드 라이딩(영구) 교환권", "달려라 보드 라이딩(90일) 교환권", "프리미엄 악세서리 공격력 스크롤 100 %", "프리미엄 펫장비 공격력 스크롤 100 %", "프리미엄 펫장비 마력 스크롤 100 %", "프리미엄 악세서리 마력 스크롤 100 %", "영원한 환생의 불꽃", "티타늄 하트", "리튬 하트", "크리스탈 하트", "골드 하트", "기운찬 시그너스의 소울", "날렵한 시그너스의 소울", "총명한 시그너스의 소울", "놀라운 시그너스의 소울", "화려한 시그너스의 소울", "강력한 시그너스의 소울", "빛나는 시그너스의 소울", "강인한 시그너스의 소울", "영원히 꺼지지 않는 불꽃 조각", "스페셜 소울 인챈터", "마력의 하운드 이어링", "샤이니 레드 매지션 마이스터 심볼", "샤이니 레드 시프 마이스터 심볼", "샤이니 레드 워리어 마이스터 심볼", "베어스 퍼플 펜던트", "레드 워리어 마이스터 심볼", "레드 파이렛 마이스터 심볼", "하프 이어링", "레드 시프 마이스터 심볼", "레드 매지션 마이스터 심볼", "레드 아처 마이스터 심볼", "피콕스 퍼플 펜던트", "아울스 퍼플 펜던트", "울프스 퍼플 펜던트", "샤이니 레드 아처 마이스터 심볼", "샤이니 레드 파이렛 마이스터 심볼", "강인함의 익스트림 벨트", "지혜의 익스트림 벨트", "행운의 익스트림 벨트", "님블 하운드 이어링", "날카로운 익스트림 벨트", "체력의 하운드 이어링", "하이퍼 하운드 이어링", "펫장비 공격력 스크롤 100 %", "펫장비 마력 스크롤 100 %", "악세서리 공격력 스크롤 100 %", "악세서리 마력 스크롤 100 %", "에픽 잠재능력 부여 주문서 50 %", "에디셔널 잠재능력 부여 주문서 70 %", "황금 망치 100 %", "기운찬 핑크빈의 소울", "날렵한 핑크빈의 소울", "총명한 핑크빈의 소울", "놀라운 핑크빈의 소울", "화려한 핑크빈의 소울", "강력한 핑크빈의 소울", "빛나는 핑크빈의 소울", "강인한 핑크빈의 소울", "기운찬 모카딘의 소울", "날렵한 모카딘의 소울", "총명한 모카딘의 소울", "놀라운 모카딘의 소울", "화려한 모카딘의 소울", "강력한 모카딘의 소울", "빛나는 모카딘의 소울", "강인한 모카딘의 소울", "기운찬 아카이럼의 소울", "날렵한 아카이럼의 소울", "총명한 아카이럼의 소울", "놀라운 아카이럼의 소울", "화려한 아카이럼의 소울", "강력한 아카이럼의 소울", "빛나는 아카이럼의 소울", "강인한 아카이럼의 소울", "소울 분해기", "소울 20칸 가방", "식물용 20칸 가방", "광물용 20칸 가방", "제작물품 20칸 가방", "레시피 20칸 가방", "의자 20칸 가방", "칭호 20칸 명함 지갑", "주문서 20칸 가방", "레전드 메이플 리프", "현명한 피노키오 코", "얼음결정 페이스페인팅", "행운의 피노키오 코", "민첩한 피노키오 코", "블러드 마스크", "힘센 피노키오 코", "금빛 각인의 인장", "긍정의 혼돈 주문서 30 %", "긍정의 혼돈 주문서 50 %", "놀라운 혼돈의 주문서 30 %", "놀라운 혼돈의 주문서 40 %", "놀라운 혼돈의 주문서 50 %", "놀라운 혼돈의 주문서 60 %", "놀라운 혼돈의 주문서 70 %", "순백의 주문서 10 %", "순백의 주문서 5 %", "은빛 각인의 인장", "은빛 에디셔널 각인의 인장", "혼돈의 주문서 70 %", "황금 망치 50 %", "미라클 장갑 공격력 주문서 50 %", "미라클 펫장비 공격력 주문서 50 %", "미라클 악세서리 공격력 주문서 50 %", "미라클 악세서리 마력 주문서 50 %", "미라클 방어구 공격력 주문서 50 %", "미라클 펫장비 마력 주문서 50 %", "미라클 방어구 마력 주문서 50 %", "악세서리 공격력 주문서 70 %", "방어구 공격력 주문서 70 %", "펫장비 공격력 주문서 70 %", "방어구 마력 주문서 70 %", "펫장비 마력 주문서 70 %", "악세서리 마력 주문서 70 %" };
	double sosu[131] = { 0.04817, 0.38533, 0.19266, 0.77065, 0.00385, 0.00385, 0.00963, 0.0578, 0.19266, 0.04817, 0.06743, 0.03853, 0.96332, 0.09633, 0.48166, 0.01927, 0.01927, 0.01927, 0.01927, 0.09633, 0.01927, 0.289, 0.38533, 0.57799,  0.00963, 0.00963, 0.00963, 0.00963, 0.00963, 0.00963, 0.00963,0.00963, 0.48166, 0.48166, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.26973, 0.38533, 0.38533, 0.38533, 0.38533, 0.38533, 0.289, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 0.57799, 3.85327, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.44498, 1.92663, 1.92663, 1.92663, 1.44498, 0.96332, 0.96332, 0.96332, 0.96332, 0.96332, 1.44498, 1.92663, 1.92663, 1.92663, 0.96332, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663, 1.92663 };
	int probability[131];

	for (int i = 0; i < 131; i++) {
		res += (sosu[i] * 100000);
		probability[i] = res;
	}

	vector<int> result(131, 0);

	cout << "시행할 횟수 : ";
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
			//cout << result[i] << endl;
		}
	}

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

	string name[25] = { "[스페셜 라벨] 플레임 크라운", "[스페셜 라벨] 이그니스", "[스페셜 라벨] 플레임 서클", "[스페셜 라벨] 이그나이트", "[스페셜 라벨] 플레임 워크", "폼폼 베어", "윈터 라벤더", "부들 라벤더 후디(남) / 부들 핑크 후디(여)", "핑크빈 허그 쿠션", "라벤더 스니커즈", "단호한 철퇴 캡", "단호한 철퇴 제복(남) / 단호한 철퇴 제복(여)", "단호한 철퇴", "단호한 철퇴 구두(남) / 단호한 철퇴 구두(여)", "마나 폭주", "핫핑크 멜빵바지", "밀키 레인보우", "핑크 몽몽 리본", "순금 태엽인형", "무지개 홍조", "꽥꽥 오리야", "[30일]꽥꽥 오리 말풍선반지 교환권", "[30일]꽥꽥 오리 명찰반지 교환권", "이불밖은 위험해!", "스카우터" };
	int probability[25] = { 310, 640, 930, 1180, 1500, 1650, 2050, 2450, 2800, 3300, 3800, 4200, 4400, 4900, 5150, 5650, 6150, 6650, 7150, 7600, 8000, 8500, 9000, 9500, 10000 };
	vector<int> result(25, 0);

	cout << "시행할 횟수 : ";
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
			//cout << result[i] << endl;
		}
	}

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

	string man_name[6] = { "테사 헤어", "루밍 헤어", "와일드 울프 헤어", "나이트 헤어", "허리케인 헤어", "안보여요 헤어" };
	int man_probability[6] = { 1000, 2500, 4000, 6000, 8000, 10000 };

	string woman_name[6] = { "솜이 헤어", "별바다 헤어", "소슬 헤어", "로시 헤어", "리본송이 헤어", "부풀린 뱅 헤어" };
	int woman_probability[6] = { 1000, 2500, 4000, 6000, 8000, 10000 };

	vector<int> result(6, 0);

	cout << "시행할 횟수 : ";
	cin >> n;
	cout << "남성(1)/여성(2) : ";
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

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

	string man_name[6] = { "포로링 얼굴", "헤헤 얼굴", "지켜본다 얼굴", "뾰로통 얼굴", "으스스 얼굴", "코분홍 얼굴" };
	int man_probability[6] = { 1666, 3333, 4999, 6666, 8337, 10000 };

	string woman_name[6] = { "포로링 얼굴", "헤헤 얼굴", "맑음 얼굴", "토라진 얼굴", "으스스 얼굴", "코분홍 얼굴" };
	int woman_probability[6] = { 1666, 3333, 4999, 6666, 8337, 10000 };

	vector<int> result(6, 0);

	cout << "시행할 횟수 : ";
	cin >> n;
	cout << "남성(1)/여성(2) : ";
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

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

void MasterPieceRed() {
	int random = 0, n = 0, m = 0, res = 0;
	string any;

	string hat[13] = { "노블 카멜리아(남자만 획득가능) / 스윗 카멜리아(여자만 획득가능)", "코튼 라벤더", "소원 배달원 모자", "멋진 토끼귀", "벚꽃 캔디캡", "유리별 총총(남자만 획득가능) / 새벽별 총총(여자만 획득가능)", "예스 캡틴", "꽃나비", "아기곰 페도라", "샤이닝 문라이트(남자만 획득가능) / 글루미 문라이트(여자만 획득가능)", "하늘 멀리(남자만 획득가능) / 하늘 높이(여자만 획득가능)", "미혹의 파편", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double hatDecimal[13] = { 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 11.85, 3.39 }; // 10005

	string cloth[13] = { "로드 카멜리아(남) / 레이디 카멜리아(여)", "라벤더 케이프(남) / 라벤더 케이프(여)", "소원 배달원 유니폼(남) / 소원 배달원 유니폼(여)", "사나운 토끼 한벌옷", "벚꽃 우비", "별의 기록자(남) / 별의 기록자(여)", "바다 맑음(남) / 하늘 맑음(여)", "하늘 속삭임(남) / 살랑 꽃망울(여)", "밤산책 한벌옷(남) / 밤산책 한벌옷(여)", "르 루나(남) / 라 루나(여)", "음악대 유니폼(남) / 음악대 유니폼(여)", "그림자 영주(남) / 그림자 성주(여)", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double clothDecimal[13] = { 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 13.68, 3.32 }; // 10005

	string cape_glove[13] = { "타고난 품격", "라벤더 멜로디", "신속 쁘띠 윙", "사나운 악마 날개", "꽃비", "기억의 매듭", "써니 오션", "꽃구름 선율", "수호 날개", "스파클링 밀키웨이", "음악대 친구들", "운명의 굴레", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double cape_gloveDecimal[13] = { 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 12.61, 3.36 }; // 10001
	
	string shoes[13] = { "카멜리아 로퍼(남) / 카멜리아 구두(여)", "라벤더 슈즈", "신속 배달 구두(남) / 신속 배달 구두(여)", "사나운 토끼 구두", "벚꽃 장화", "흰양말 별구두(남) / 니삭스 별구두(여)", "바다를 항해(남) / 파도와 함께(여)", "나비선", "아장아장", "샤이닝 문워크", "경쾌한 행진", "새벽 전진(남) / 새벽 출진(여)", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double shoesDecimal[13] = { 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 12.23, 3.38 }; // 9998

	string weapon[13] = { "카멜리아 티타임", "수정 지휘봉", "소원가득 크로스백", "불맛 삼지창", "벚꽃 우산", "별의 기록서", "언제나 바다", "하늘 꽃나비", "아기곰 밤산책", "문라이트 램프", "음악대 지휘봉", "여명의 빛", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double weaponDecimal[13] = { 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 11.73, 4.47 }; // 10002

	for (int i = 0; i < 13; i++) {
		res += (hatDecimal[i] * 100);
		hatDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (clothDecimal[i] * 100);
		clothDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (cape_gloveDecimal[i] * 100);
		cape_gloveDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (shoesDecimal[i] * 100);
		shoesDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (weaponDecimal[i] * 100);
		weaponDecimal[i] = res;
	}

	vector<int> result(13, 0);

	cout << "시행할 횟수 : ";
	cin >> n;
	cout << "모자(1)/옷(2)/망토,장갑(3)/신발(4)/무기(5) : ";
	cin >> m;

REPLAY:

	if (m == 1) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10005);

			for (int i = 0; i < result.size(); i++) {
				if (hatDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << hat[i] << " : " << result[i] << endl;
			}
		}
	}
	else if (m == 2) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10005);

			for (int i = 0; i < result.size(); i++) {
				if (clothDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << cloth[i] << " : " << result[i] << endl;
			}
		}
	}
	else if (m == 3) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10001);

			for (int i = 0; i < result.size(); i++) {
				if (cape_gloveDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << cape_glove[i] << " : " << result[i] << endl;
			}
		}
	}
	else if (m == 4) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 9998);

			for (int i = 0; i < result.size(); i++) {
				if (shoesDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << shoes[i] << " : " << result[i] << endl;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10002);

			for (int i = 0; i < result.size(); i++) {
				if (weaponDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << weapon[i] << " : " << result[i] << endl;
			}
		}
	}

	cout << endl;

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

void MasterPieceBlack() {
	int random = 0, n = 0, m = 0, res = 0;
	string any;

	string hat[13] = { "노블 카멜리아(남자만 획득가능) / 스윗 카멜리아(여자만 획득가능)", "코튼 라벤더", "소원 배달원 모자", "멋진 토끼귀", "벚꽃 캔디캡", "유리별 총총(남자만 획득가능) / 새벽별 총총(여자만 획득가능)", "예스 캡틴", "꽃나비", "아기곰 페도라", "샤이닝 문라이트(남자만 획득가능) / 글루미 문라이트(여자만 획득가능)", "하늘 멀리(남자만 획득가능) / 하늘 높이(여자만 획득가능)", "미혹의 파편", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double hatDecimal[13] = { 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 7.71, 11.85, 3.39 }; // 10005

	string cloth[13] = { "로드 카멜리아(남) / 레이디 카멜리아(여)", "라벤더 케이프(남) / 라벤더 케이프(여)", "소원 배달원 유니폼(남) / 소원 배달원 유니폼(여)", "사나운 토끼 한벌옷", "벚꽃 우비", "별의 기록자(남) / 별의 기록자(여)", "바다 맑음(남) / 하늘 맑음(여)", "하늘 속삭임(남) / 살랑 꽃망울(여)", "밤산책 한벌옷(남) / 밤산책 한벌옷(여)", "르 루나(남) / 라 루나(여)", "음악대 유니폼(남) / 음악대 유니폼(여)", "그림자 영주(남) / 그림자 성주(여)", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double clothDecimal[13] = { 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 7.55, 13.68, 3.32 }; // 10005

	string cape_glove[13] = { "타고난 품격", "라벤더 멜로디", "신속 쁘띠 윙", "사나운 악마 날개", "꽃비", "기억의 매듭", "써니 오션", "꽃구름 선율", "수호 날개", "스파클링 밀키웨이", "음악대 친구들", "운명의 굴레", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double cape_gloveDecimal[13] = { 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 7.64, 12.61, 3.36 }; // 10001

	string shoes[13] = { "카멜리아 로퍼(남) / 카멜리아 구두(여)", "라벤더 슈즈", "신속 배달 구두(남) / 신속 배달 구두(여)", "사나운 토끼 구두", "벚꽃 장화", "흰양말 별구두(남) / 니삭스 별구두(여)", "바다를 항해(남) / 파도와 함께(여)", "나비선", "아장아장", "샤이닝 문워크", "경쾌한 행진", "새벽 전진(남) / 새벽 출진(여)", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double shoesDecimal[13] = { 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 7.67, 12.23, 3.38 }; // 9998

	string weapon[13] = { "카멜리아 티타임", "수정 지휘봉", "소원가득 크로스백", "불맛 삼지창", "벚꽃 우산", "별의 기록서", "언제나 바다", "하늘 꽃나비", "아기곰 밤산책", "문라이트 램프", "음악대 지휘봉", "여명의 빛", "무결 헤어쿠폰(남) 선택권 / 수려 헤어쿠폰(여) 선택권" };
	double weaponDecimal[13] = { 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 7.62, 11.73, 4.47 }; // 10002

	for (int i = 0; i < 13; i++) {
		res += (hatDecimal[i] * 100);
		hatDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (clothDecimal[i] * 100);
		clothDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (cape_gloveDecimal[i] * 100);
		cape_gloveDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (shoesDecimal[i] * 100);
		shoesDecimal[i] = res;
	}

	res = 0;

	for (int i = 0; i < 13; i++) {
		res += (weaponDecimal[i] * 100);
		weaponDecimal[i] = res;
	}

	vector<int> result(13, 0);

	cout << "시행할 횟수 : ";
	cin >> n;
	cout << "모자(1)/옷(2)/망토,장갑(3)/신발(4)/무기(5) : ";
	cin >> m;

REPLAY:

	if (m == 1) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10005);

			for (int i = 0; i < result.size(); i++) {
				if (hatDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << hat[i] << " : " << result[i] << endl;
			}
		}
	}
	else if (m == 2) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10005);

			for (int i = 0; i < result.size(); i++) {
				if (clothDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << cloth[i] << " : " << result[i] << endl;
			}
		}
	}
	else if (m == 3) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10001);

			for (int i = 0; i < result.size(); i++) {
				if (cape_gloveDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << cape_glove[i] << " : " << result[i] << endl;
			}
		}
	}
	else if (m == 4) {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 9998);

			for (int i = 0; i < result.size(); i++) {
				if (shoesDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << shoes[i] << " : " << result[i] << endl;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			random = getRandomNumber(1, 10002);

			for (int i = 0; i < result.size(); i++) {
				if (weaponDecimal[i] >= random) {
					result[i]++;
					break;
				}
			}
		}

		cout << endl;

		for (int i = 0; i < result.size(); i++) {
			if (result[i] != 0) {
				cout << weapon[i] << " : " << result[i] << endl;
			}
		}
	}

	cout << endl;

	cout << endl << "다시 진행(1)/나가기(2) >> " << flush;
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

			case(MenuList::MASTERPIECERED): MasterPieceRed();
				break;

			case(MenuList::MASTERPIECEBLACK): MasterPieceBlack();
				break;

			default: cout << "알맞지 않은 입력" << endl;
				break;
		}

		if (choice == EXIT) {
			break;
		}
	}

	return 0;
}