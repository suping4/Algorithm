#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int same = 0;
    int dif = 0;
    char c = NULL;
    for(int i=0; i<s.size(); i++){
        if(c == NULL) {     //c가 비어있으면 첫번째 글자 대입 후 same 증가, contiune
            c = s[i];
            same++;
            continue;
        }
        if(c == s[i]) {     //첫번째 글자와 비교 작업
            same++;
        }else dif++;
        
        if(same == dif) {   //두 횟수가 같으면 답 증가 후 초기화 작업
            answer++;
            same = 0;
            dif = 0;
            c = NULL;
        }
    }
    if(c != NULL) answer++;     //두 횟수가 다른 채로 읽기 종료 되면 답 증가
    return answer;
}
