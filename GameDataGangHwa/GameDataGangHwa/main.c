#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // 난수 발생을 위한 시드 설
    int level = 0; // 초기 공부 단계
    int success_rate = 100; // 초기 성공 확률
    int funds = 1000000; // 초기 장학금
    char choice;
    int enhance_cost = 2000; // 초기 공부 비용
    int value = 0; // 초기 학생 가치

    printf("대학생 강화하기 게임을 시작합니다.\n\n");

    while (1) {
        printf("현재 공부 단계: %d\n", level);
        printf("현재 장학금: %d원\n", funds);
        printf("현재 학생의 가치: %d원\n", value);

        if (level < 19) {
            printf("원하는 행동을 선택하세요:\n");
            printf("1. 공부시키기(비용 : %d)\n", enhance_cost);
        }
        else {
            printf("원하는 행동을 선택하세요:\n");
        }

        printf("2. 취업시키기\n");
        printf("3. 종료\n");
        printf("선택: ");
        scanf(" %c", &choice);

        switch (choice) {
        case '1':
            if (funds < enhance_cost) {
                printf("장학금이 부족하여 강화를 할 수 없습니다.\n");
                break;
            }

            int random_number = rand() % 100 + 1; // 1부터 100까지의 난수 생성

            if (random_number <= success_rate) {
                level++; // 공부 단계 증가
                printf("\nA학점을 받았습니다!\n");
                success_rate -= 1; // 성공 확률 감소                             //성공 확률 조정 (1 : 1%)
                funds -= enhance_cost; // 공부 비용 차감
                enhance_cost += 2000; // 다음 공부 비용 증가                     //강화 비용 조절

                // 검 가치 업데이트
                if (level == 1) {
                    value = 2000; // 0단계에서 1단계로 강화 성공 시
                }
                else {
                    value *= 2; // 이후 공부 단계에서는 이전 학생 가치의 2배             //단계별 학생가치 조절
                }
                switch (level)
                {
                default:
                    printf("병아리 신입생(세상의 때가 묻지 않은 귀여운 신입생이 등장했다!)\n");
                    break;
                case 1:
                    printf("C언어를 배운 1학년(김영철 교수님께 칭찬을 받은 귀여운 1학년이다.)\n");
                    break;
                case 2:
                    printf("HTML5를 배운 1학년(이윤임 교수님의 사랑을 받는 1학년이다.)\n");
                    break;
                case 3:
                    printf("포토샵을 배운 1학년(노은석 교수님께서 매우 만족하신다.)\n");
                    break;
                case 4:
                    printf("파이썬을 배운 1학년(이은석 교수님께 욕을 많이 먹었다. 슬슬 사람이 이상해진다.)\n");
                    break;
                case 5:
                    printf("JavaScript를 배운 1학년(이윤임 교수님께선 큰 신뢰를 걸고 계신다.)\n");
                    break;
                case 6:
                    printf("C언어응용을 배운 1학년(김영철 교수님께 혼났다. 분명 C언어를 배웠는데...??)\n");
                    break;
                case 7:
                    printf("유니티를 배운 2학년(이성현 교수님께서 걱정하신다. 원래 착했던 애가 이상해지고 있다...)\n");
                    break;
                case 8:
                    printf("C# 프로그래밍을 배운 2학년(윤수미 교수님께서 좋아하신다. 다행히 아직 초반이라...)\n");
                    break;
                case 9:
                    printf("앱기획을 배운 2학년(김영철 교수님께 맞기 직전까지 갔다. 한강물의 온도가 궁금하다...)\n");
                    break;
                case 10:
                    printf("현타가 온 대학생(교수님께 혼나고, 과제에 치이고... 학생의 눈앞에 눈물이 글썽인다.)\n");
                    break;
                case 11:
                    printf("반응형웹을 배운 2학년(이은석 교수님께서 좋아하신다. 잠을 자지 않고 과제를 끝냈다.)\n");
                    break;
                case 12:
                    printf("C++을 배운 2학년(이제 C계얼 언어를 다 배웠다. 근데 포인터는 도저히 이해가 안된다...)\n");
                    break;
                case 13:
                    printf("유니티로 게임을 개발한 3학년(코피를 흘려가며 게임을 만들었다. 이성현 교수님께서 이딴 게 게임이냐고 하셨다.)\n");
                    break;
                case 14:
                    printf("HTML과 CSS로 웹을 만들어 본 3학년(이윤임 교수님께 잔소리를 많이 들었다. 그래도 내심 교수님께서 기특해하신다.)\n");
                    break;
                case 15:
                    printf("전공동아리 멘토를 하는 3학년(후배들의 존경을 받고 있다. 이은석 교수님께선 쟤를 왜 좋아하는지 모르겠다 하신다.)\n");
                    break;
                case 16:
                    printf("3D모델링을 배운 3학년(노은석 교수님과 1대1 면담을 했다. 아트도 괜찮은 것 같은데... 어디로 갈지 모르겠다.)\n");
                    break;
                case 17:
                    printf("창업동아리를 하는 3학년(매일 학교에 21시까지 후배, 동기들과 같이 작업을 한다. 이정도면 귀신이다.)\n");
                    break;
                case 18:
                    printf("기획서 작성을 마스터한 3학년(본인은 정말 잘한다고 생각한다. 이은석 교수님과 이성현 교수님도 그렇게 생각하실까?)\n");
                    break;
                case 19:
                    printf("현장 실습을 다녀온 3학년(회사에선 오랜만에 인재가 들어왔다고 한다. 하지만 본인은 회사가 별로다.)\n");
                    break;
                case 20:
                    printf("졸업 가운을 입고 있는 대학생(모든 능력을 탑재했다. 이제 진짜 지옥을 향해 걸어간다.)\n");
                    break;
                }
            }
            else {
                printf("F학점을 받았습니다.\n");
                printf("공부 단계를 초기화합니다.\n");
                level = 0; // 공부 단계 초기화
                value = 0;
                funds -= enhance_cost;
                enhance_cost = 2000;
            }
            break;
        case '2':
            printf("학생을 취업시킵니다...\n");
            funds += value; // 학생 가치만큼 자금 추가           
            printf("학생을 취업시켜 %d원의 장학금을 획득했습니다.\n", value);
            value = 0; // 학생 가치 초기화
            level = 0; // 공부 단계 초기화
            enhance_cost = 2000;
            break;
        case '3':
            printf("게임을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다. 다시 선택해주세요.\n");
            break;
        }
        printf("\n");
    }

    return 0;
}