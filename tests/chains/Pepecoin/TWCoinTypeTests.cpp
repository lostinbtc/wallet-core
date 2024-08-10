// SPDX-License-Identifier: Apache-2.0
//
// Copyright © 2017 Trust Wallet.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWPepecoinCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypePepecoin));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("t123"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypePepecoin, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("a12"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypePepecoin, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypePepecoin));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypePepecoin));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypePepecoin), 8);
    ASSERT_EQ(TWBlockchainBitcoin, TWCoinTypeBlockchain(TWCoinTypePepecoin));
    ASSERT_EQ(0x16, TWCoinTypeP2shPrefix(TWCoinTypePepecoin));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypePepecoin));
    assertStringsEqual(symbol, "PEPE");
    assertStringsEqual(txUrl, "https://blockchair.com/pepecoin/transaction/t123");
    assertStringsEqual(accUrl, "https://blockchair.com/pepecoin/address/a12");
    assertStringsEqual(id, "pepe");
    assertStringsEqual(name, "Pepecoin");
}
