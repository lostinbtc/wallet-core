// SPDX-License-Identifier: Apache-2.0
//
// Copyright © 2017 Trust Wallet.

#include "TestUtilities.h"

#include <TrustWalletCore/TWBitcoinScript.h>

#include <gtest/gtest.h>

TEST(Pepe, LockScripts) {
    auto script = WRAP(TWBitcoinScript, TWBitcoinScriptLockScriptForAddress(STRING("PrDtUmvtfcUu7yxBKHSLXjPywpszSh2gb3").get(), TWCoinTypePepecoin));
    auto scriptData = WRAPD(TWBitcoinScriptData(script.get()));
    assertHexEqual(scriptData, "76a914c8aea0a04d56ffcc8e5ec00a8d8cf58842fec68588ac");

    auto script2 = WRAP(TWBitcoinScript, TWBitcoinScriptLockScriptForAddress(STRING("AAjP15o6XUj7KFDEV27W3U9EYg7vHLgMCm").get(), TWCoinTypePepecoin));
    auto scriptData2 = WRAPD(TWBitcoinScriptData(script2.get()));
    assertHexEqual(scriptData2, "a914c8aea0a04d56ffcc8e5ec00a8d8cf58842fec68587");
}
