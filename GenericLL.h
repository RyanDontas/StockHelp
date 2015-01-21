//
//  GenericLinkedList.h
//  Assignment6
//
//  Created by Ryan Dontas on 4/19/14.
//  Copyright (c) 2014 Ryan Dontas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	void * item;
	struct node * next;
    struct node * back;
}node_t;

node_t * head;

node_t * createnewempty();
node_t * createnewnode(void * item);
void insertatend(node_t * node);
void deletenode(node_t * node);
void * item(node_t * node);

