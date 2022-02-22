#include <stdio.h>
#include <stdlib.h>

struct dice {
	int number;
	int index;

	struct list_head *list;
};

struct list_head {
	struct list_head *prev, *next;
};

int main(int argc, char *argv[])
{
	struct dice *entry, *head, *tail;
	int roll;

	scanf("%d", &roll);

	entry = malloc(sizeof(struct dice) * roll);
	if (entry == NULL)
		return -1;

	for (struct dice *index = entry;
	     entry < &entry[roll];
	     entry++)
	{

	}

	free(entry);

	return 0;
}
