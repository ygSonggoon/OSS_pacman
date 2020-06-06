/*
[Description]
���ΰ� �÷��̾ �浹�ߴ��� üũ���ִ� �Լ�.
*/

#include "Header.h"

void check_coin_collision(Game* game, int y_position, int x_position)
{
	int current_coins_index; // ���� �˻����� ������ index�� ���� ����.

	current_coins_index = has_coin_in_position(game, y_position, x_position);
    // ���� ������ ��ǥ�� �����ϴ��� Ȯ���� ����.
	if (current_coins_index >= 0)
	{
		game->coins[current_coins_index].i = REMOVED; // ���� �Ϸ�
		game->coins[current_coins_index].j = REMOVED; // ���� �Ϸ�

		game->score += 10; // ���� �߰�.
		game->total_coins_number--; // �� ������ ���� ���̱�.
	}
}