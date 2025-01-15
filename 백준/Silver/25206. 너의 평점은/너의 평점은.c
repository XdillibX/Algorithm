//
//  25206.c
//  평점 계산
//
//  Created by dillib on 1/12/25.
//

#include <stdio.h>

int main(void) {
    char name[20][51];
    char score1[20][2];
    double score[20];
    double hak[20];
    double avr = 0;
    double ch = 0;
    
    
    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", name[i], &hak[i], score1[i]);
        
        if (score1[i][0] == 'P') continue;
        
        score[i] = (score1[i][1] == '+') ? ((-1) * ((int)score1[i][0] -69)) + 0.5 : ((-1) * ((int)score1[i][0] -69)) + 0.0;
        if (score1[i][0] == 'F') score[i] += 1;
        
        avr += hak[i] * score[i];
        ch += hak[i];
    }
    
    printf("%lf", avr / ch);
    
    
    return 0;
}
