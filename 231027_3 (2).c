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
            printf("勇者がスライムに%dダメージ与えた！",player_at);
            enemy_hp -= player_at;
        }
        else if (command == 1)
        {
            printf("スライムが勇者に%dダメージ与えた！",enemy_at);
            player_hp -= enemy_at;
        }
        else {
            printf("勇者はHPが%d回復した！",player_heal);
            player_hp += player_heal;
            if (player_hp >= 20) {
                player_hp = 20;
            }
        }

        if (player_hp <= 0) {
            printf("勇者は力尽きた。。。");
            finish = true;
        }
        else if (enemy_hp <= 0) {
            printf("スライムを倒した！");
            finish = true;
        }
        else {
            printf("勇者のHP:%d",player_hp);
            printf("スライムのHP:%d", enemy_hp);
        }
    }
    return 0;
}