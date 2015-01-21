//
//  Stock.h
//  Assignment6
//
//  Created by Ryan Dontas on 4/20/14.
//  Copyright (c) 2014 Ryan Dontas. All rights reserved.
//

typedef struct stock{
	char * stockSymbol;
	float closingSharePrice;
	float openingSharePrice;
	int numberOfShares;
	float (* getPrice) (void * S);
	float (*getTotalDollarAmount)(void* S);
	float (*getPercentChange)(void* S);
	char * (* toString)(void* S);
}stock_t;


stock_t * createnew();
float getPricef(void * S);
float getTotalDollarAmtf(void * S);
float getPercentChangef(void * S);
char * toStringf(void * S);
