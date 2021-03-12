#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;

#define sc2(a, b) scanf("%d%d", &a, &b)
#define scan(x) cin>>x
#define fr(i, a, n) for(int i = (a); i < (n); i++)
#define println(x) cout<<x<<"\n";

#include <list>
#include <map>

void add(int& subset, int x){
    subset = (subset ^ (1 << (x-1)));
}

void remove(int& subset, int x){
    subset = (subset ^ (1 << (x-1)));
}


void display(int subset){
    for(int bit_no = 0; bit_no <=9; bit_no++)
    {
        if(subset & (1 << bit_no))
            cout << bit_no + 1 << ' ';
    }
}

int main(){
    int Set = 15;
    remove(Set, 2);
    remove(Set, 4);
    add(Set,5);
    display(Set);

    return 0;
}
