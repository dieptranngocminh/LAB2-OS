#include <stdio.h>
#include <unistd.h>
#include "ex1.h"

int main() {
        void* pre_brk = sbrk(0);
        void* ptr_alloc = aligned_malloc(16,8192);
        void* post_brk = sbrk(0);
        void* return_free = aligned_free(ptr_alloc);
        printf("pre_brk: %p\n ptr_alloc: %p\n post_brk: %p\n return_free: %p\n", pre_brk, ptr_alloc, post_brk, return_free);
}
