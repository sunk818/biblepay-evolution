// Copyright (c) 2014-2019 The Dash Core Developers, The BiblePay Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SMARTCONTRACTSERVER_H
#define SMARTCONTRACTSERVER_H

#include "wallet/wallet.h"
#include "hash.h"
#include "net.h"
#include "utilstrencodings.h"
#include <univalue.h>

class CWallet;


std::string AssessBlocks(int nHeight);
int GetLastGSCSuperblockHeight(int nCurrentHeight, int& nNextSuperblock);
std::string GetGSCContract();
bool SubmitGSCTrigger(std::string sHex, std::string& gobjecthash, std::string& sError);
void GetGSCGovObjByHeight(int nHeight, uint256 uOptFilter, int& out_nVotes, uint256& out_uGovObjHash, std::string& out_PaymentAddresses, std::string& out_PaymentAmounts);
uint256 GetPAMHashByContract(std::string sContract);
bool VoteForGSCContract(int nHeight, std::string sMyContract, std::string sError);
std::string ExecuteGenericSmartContractQuorumProcess();
UniValue GetProminenceLevels();

#endif