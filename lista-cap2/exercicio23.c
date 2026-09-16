#include <stdio.h>

int main () {
    int h_inicio, m_inicio, s_inicio;
    int duracao;

    printf("Digite a hora de início (hh mm ss): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duração do evento em segundos: ");
    scanf("%d", &duracao);

    int total_segundos = h_inicio * 3600 + m_inicio * 60 + s_inicio + duracao;

    int h_fim = (total_segundos / 3600) % 24;
    int m_fim = (total_segundos % 3600) / 60;
    int s_fim = total_segundos % 60;

    printf("O evento terminará às %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

}