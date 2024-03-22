// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2021 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CONSENSUS_AMOUNT_H
#define BITCOIN_CONSENSUS_AMOUNT_H

#include <cstdint>
#include <limits>
#include <string>

/** Amount in satoshis (Can be negative) */
typedef int64_t CAmount;

static constexpr CAmount COIN = 100000000;
static constexpr CAmount CENT = 1000000;

static const CAmount MIN_TX_FEE_PREV7 = MIN_TX_FEEv2;
static const CAmount MIN_TX_FEE = 10000;
/** Fees smaller than this (in satoshi) are considered zero fee (for relaying) */
static const int64_t MIN_RELAY_TX_FEE = MIN_TX_FEE;
/** Fees smaller than this (in satoshi) are considered zero fee (for transaction creation) after block 594999 */
static const int64_t MIN_TX_FEEv2 = 10000000; //0.1 coins
/** Fees smaller than this (in satoshi) are considered zero fee (for relaying) after block 594999 */
static const CAmount PERKB_TX_FEE = MIN_TX_FEEv2;
static const CAmount MIN_TXOUT_AMOUNT = MIN_TX_FEEv2;
static const CAmount MAX_MINT_PROOF_OF_WORK = 10000 * COIN;
static const CAmount MAX_MINT_PROOF_OF_WORK_V10 = 10000 * COIN;
static const std::string CURRENCY_UNIT = "LDOGE";
static const std::string CURRENCY_ATOM = "Ltoshi"; // One indivisible minimum value unit

/** No amount larger than this (in satoshi) is valid.
 *
 * Note that this constant is *not* the total money supply, which in Bitcoin
 * currently happens to be less than 21,000,000 BTC for various reasons, but
 * rather a sanity check. As this sanity check is used by consensus-critical
 * validation code, the exact value of the MAX_MONEY constant is consensus
 * critical; in unusual circumstances like a(nother) overflow bug that allowed
 * for the creation of coins out of thin air modification could lead to a fork.
 * */
static constexpr CAmount MAX_MONEY = std::numeric_limits<int64_t>::max();
inline bool MoneyRange(const CAmount& nValue) { return (nValue >= 0 && nValue <= MAX_MONEY); }
/** Threshold for nLockTime: below this value it is interpreted as block number, otherwise as UNIX timestamp. */
static const unsigned int LOCKTIME_THRESHOLD = 500000000; // Tue Nov  5 00:53:20 1985 UTC


#endif // BITCOIN_CONSENSUS_AMOUNT_H
