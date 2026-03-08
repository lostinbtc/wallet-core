// SPDX-License-Identifier: Apache-2.0
//
// Copyright © 2017 Trust Wallet.

#include "TestUtilities.h"

#include <TrustWalletCore/TWBitcoinScript.h>

#include <gtest/gtest.h>

TEST(Pepe, LockScripts) {
    auto script = WRAP(TWBitcoinScript, TWBitcoinScriptLockScriptForAddress(STRING("PjB8XQHXktkMudzQ3ji5gSsW7kPSaRwBSi").get(), TWCoinTypePepecoin));
    auto scriptData = WRAPD(TWBitcoinScriptData(script.get()));
    assertHexEqual(scriptData, "76a9147b603936c46bc65f53be89dd7426ac6a1dd453aa88ac");

    auto script2 = WRAP(TWBitcoinScript, TWBitcoinScriptLockScriptForAddress(STRING("AAjP15o6XUj7KFDEV27W3U9EYg7vHLgMCm").get(), TWCoinTypePepecoin));
    auto scriptData2 = WRAPD(TWBitcoinScriptData(script2.get()));
    assertHexEqual(scriptData2, "a914c8aea0a04d56ffcc8e5ec00a8d8cf58842fec68587");
}
