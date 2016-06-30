//
//  FMStopWordTokenizer+StopWords.h
//  fmdb+stopwords
//
//  Created by Mark D. Freeman Williams on 6/30/16.
//  Copyright © 2016 The Fascinating Group. All rights reserved.
//
// Licensed under unlicense. For more information, please refer to <http://unlicense.org>
// Word lists licensed under both Apache and PostgreSQL license, depending on the data.

#import <FMDB/FMTokenizers.h>

typedef NS_ENUM(NSInteger, FMStopWordsLanguage) {
    FMStopWordsEnglish = 1,
    FMStopWordsDanish = 2,
    FMStopWordsDutch = 3,
    FMStopWordsFinnish = 4,
    FMStopWordsFrench = 5,
    FMStopWordsGerman = 6,
    FMStopWordsHungarian = 7,
    FMStopWordsItalian = 8,
    FMStopWordsNorwegian = 9,
    FMStopWordsPortuguese = 10,
    FMStopWordsRussian = 11,
    FMStopWordsSpanish = 12,
    FMStopWordsSwedish = 13,
    FMStopWordsTurkish = 14
};


@interface FMStopWordTokenizer (StopWords)
/**
 Load a stop-word tokenizer using a built-in set of stop words.
 */
+ (instancetype)tokenizerForStopWordsInLanguage:(FMStopWordsLanguage)language baseTokenizer:(id<FMTokenizerDelegate>)tokenizer error:(NSError **)error;
@end
