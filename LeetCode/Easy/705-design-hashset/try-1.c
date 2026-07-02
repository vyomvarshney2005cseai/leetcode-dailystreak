/*
 * Problem #705: Design HashSet
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: c
 * Date: 6/19/2026, 7:44:55 AM
 * Link: https://leetcode.com/problems/design-hashset/
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_KEY 1000001
typedef struct {
    bool* keys;
} MyHashSet;
MyHashSet* myHashSetCreate() {
    MyHashSet* obj = (MyHashSet*)malloc(sizeof(MyHashSet));
    obj->keys = (bool*)calloc(MAX_KEY, sizeof(bool));
    return obj;
}
void myHashSetAdd(MyHashSet* obj, int key) {
    if (key >= 0 && key < MAX_KEY) {
        obj->keys[key] = true;
    }
}

void myHashSetRemove(MyHashSet* obj, int key) {
    if (key >= 0 && key < MAX_KEY) {
        obj->keys[key] = false;
    }
}
bool myHashSetContains(MyHashSet* obj, int key) {
    if (key >= 0 && key < MAX_KEY) {
        return obj->keys[key];
    }
    return false;
}
void myHashSetFree(MyHashSet* obj) {
    if (obj) {
        free(obj->keys);
        free(obj);
    }
}
