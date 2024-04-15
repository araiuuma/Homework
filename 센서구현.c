#include <stdio.h>

// 일차방정식을 사용하여 온도 계산하는 함수
float calculate_temperature(float x) {
    // 일차방정식의 계수와 상수
    float a = 15.0 / 4.0;
    float b = -45.0;

    // 일차방정식을 사용하여 온도 계산
    float y = a * x + b;
    return y;
}

int main() {
    float x_sensor;
    
    // 센서로부터 입력된 x 값 받기
    printf("센서로부터 입력된 x 값을 입력하세요: ");
    scanf("%f", &x_sensor);
    
    // 입력된 x 값에 따른 온도 계산
    float temperature = calculate_temperature(x_sensor);
    
    // 결과 출력
    printf("센서로부터 입력된 x 값에 대응하는 온도는 %.2f도 입니다.\n", temperature);

    return 0;
}