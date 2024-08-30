// 크기가 작은 부분 문자열

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int ts = t.size();
    int ps = p.size();
    long long p_value = stol(p); // p를 숫자로 변환

    for(int i = 0; i <= ts - ps; i++) {
        long long t_value = stol(t.substr(i, ps)); // t의 부분 문자열을 숫자로 변환
        if(t_value <= p_value) {
            answer++;
        }
    }
    return answer;
}
