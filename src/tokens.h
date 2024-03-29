/*******************************************************************************
*   Ledger Ethereum App
*   (c) 2016-2019 Ledger
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#ifndef _TOKENS_H_
#define _TOKENS_H_

#include <stdint.h>

typedef struct tokenDefinition_t {
    uint8_t address[20];
    uint8_t ticker[10];
    uint8_t decimals;
} tokenDefinition_t;

#ifdef HAVE_TOKENS_LIST

#define NUM_TOKENS_ETHEREUM 13
#define NUM_TOKENS_ETHEREUM_CLASSIC 4
#define NUM_TOKENS_WANCHAIN 0
#define NUM_TOKENS_RIVEX 0

extern tokenDefinition_t const TOKENS_ETHEREUM[NUM_TOKENS_ETHEREUM];
extern tokenDefinition_t const TOKENS_ETHEREUM_CLASSIC[NUM_TOKENS_ETHEREUM_CLASSIC];
extern tokenDefinition_t const TOKENS_WANCHAIN[NUM_TOKENS_WANCHAIN];
extern tokenDefinition_t const TOKENS_RIVEX[NUM_TOKENS_RIVEX];

#endif

#endif /* _TOKENS_H_ */
