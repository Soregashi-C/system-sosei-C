#include <stdio.h>
#include <stdbool.h>

int main()
{
    int command;

    int player_hp = 20;
    int enemy_hp = 15;
    int player_at = 5;
    int enemy_at = 4;
    int player_heal = 5;
    bool finish = false;

    while (finish == false) {
        printf("Please Enter Number: ");
        scanf_s("%d", &command);

        if (command == 0) {
            printf("�E�҂��X���C����%d�_���[�W�^�����I",player_at);
            enemy_hp -= player_at;
        }
        else if (command == 1)
        {
            printf("�X���C�����E�҂�%d�_���[�W�^�����I",enemy_at);
            player_hp -= enemy_at;
        }
        else {
            printf("�E�҂�HP��%d�񕜂����I",player_heal);
            player_hp += player_heal;
            if (player_hp >= 20) {
                player_hp = 20;
            }
        }

        if (player_hp <= 0) {
            printf("�E�҂͗͐s�����B�B�B");
            finish = true;
        }
        else if (enemy_hp <= 0) {
            printf("�X���C����|�����I");
            finish = true;
        }
        else {
            printf("�E�҂�HP:%d",player_hp);
            printf("�X���C����HP:%d", enemy_hp);
        }
    }
    return 0;
}