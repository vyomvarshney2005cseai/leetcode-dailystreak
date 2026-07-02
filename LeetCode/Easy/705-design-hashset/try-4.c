/*
 * Problem #705: Design HashSet
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: c
 * Date: 6/19/2026, 7:48:39 AM
 * Link: https://leetcode.com/problems/design-hashset/
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define hs 20000

typedef struct {
    int hashkey[hs];
    bool isocc[hs];
} MyHashSet;

MyHashSet* myHashSetCreate() {
    MyHashSet* obj = (MyHashSet*)malloc(sizeof(MyHashSet));
    memset(obj->isocc, 0, sizeof(obj->isocc));

    for(int i = 0; i < hs; i++) obj->hashkey[i] = -1; 
    return obj;
}

void myHashSetAdd(MyHashSet* obj, int key) {
    int index = key % hs;
    int first_deleted = -1;
    
    while (obj->isocc[index]) {
        if (obj->hashkey[index] == key) return; 
        index = (index + 1) % hs;
    }
    
    obj->hashkey[index] = key;
    obj->isocc[index] = true;
}

void myHashSetRemove(MyHashSet* obj, int key) {
    int index = key % hs;
    int start = index;
    
    while (obj->isocc[index]) {
        if (obj->hashkey[index] == key) {
            obj->hashkey[index] = -1; 
            obj->isocc[index] = false;
            return;
        }
        index = (index + 1) % hs;
        if (index == start) break; 
    }
}

bool myHashSetContains(MyHashSet* obj, int key) {
    int index = key % hs;
    int start = index;
    
    
    while (obj->isocc[index] || obj->hashkey[index] == -1) {
        if (obj->hashkey[index] == key) return true;
        index = (index + 1) % hs;
        if (index == start) break;
    }
    return false;
}

void myHashSetFree(MyHashSet* obj) {
    free(obj);
}
