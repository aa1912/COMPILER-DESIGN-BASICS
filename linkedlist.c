#include <stdio.h>
#include <stdlib.h>

struct N {
    int x;
    struct N* n;
};

struct N* h = NULL;

void add(int v) {
    struct N* tmp = (struct N*)malloc(sizeof(struct N));
    tmp->x = v;
    tmp->n = NULL;

    if (h == NULL) {
        h = tmp;
        return;
    }

    struct N* cur = h;
    while (cur->n != NULL) {
        cur = cur->n;
    }

    cur->n = tmp;
}

void rem(int v) {
    struct N* cur = h;
    struct N* prev = NULL;

    if (cur != NULL && cur->x == v) {
        h = cur->n;
        free(cur);
        return;
    }

    while (cur != NULL && cur->x != v) {
        prev = cur;
        cur = cur->n;
    }

    if (cur == NULL) {
        printf("not found\n");
        return;
    }

    prev->n = cur->n;
    free(cur);
}

void show() {
    struct N* t = h;
    if (t == NULL) {
        printf("list empty\n");
        return;
    }

    printf("list: ");
    while (t != NULL) {
        printf("%d ", t->x);
        t = t->n;
    }
    printf("\n");
}

int main() {
    int ch, val;

    printf("=== codtech list prog ===\n");

    while (1) {
        printf("\n1. insert\n2. delete\n3. print\n4. exit\n");
        printf("choose: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("val: ");
            scanf("%d", &val);
            add(val);
        } else if (ch == 2) {
            printf("val: ");
            scanf("%d", &val);
            rem(val);
        } else if (ch == 3) {
            show();
        } else if (ch == 4) {
            printf("done.\n");
            break;
        } else {
            printf("??\n");
        }
    }

    return 0;
}
