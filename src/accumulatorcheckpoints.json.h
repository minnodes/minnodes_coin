// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Minnodes_ACCUMULATORCHECKPOINTS_JSON_H
#define Minnodes_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
                                     "  {\n"
                                     "    \"height\": 0,\n"
                                     "    \"1\": \"0\",\n"
                                     "    \"5\": \"0\",\n"
                                     "    \"10\": \"0\",\n"
                                     "    \"50\": \"0\",\n"
                                     "    \"100\": \"0\",\n"
                                     "    \"500\": \"0\",\n"
                                     "    \"1000\": \"0\",\n"
                                     "    \"5000\": \"0\"\n"
                                     "  }\n"
                                     "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
                                     "  {\n"
                                     "    \"height\": 0,\n"
                                     "    \"1\": \"0\",\n"
                                     "    \"5\": \"0\",\n"
                                     "    \"10\": \"0\",\n"
                                     "    \"50\": \"0\",\n"
                                     "    \"100\": \"0\",\n"
                                     "    \"500\": \"0\",\n"
                                     "    \"1000\": \"0\",\n"
                                     "    \"5000\": \"0\"\n"
                                     "  }\n"
                                     "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //Minnodes_ACCUMULATORCHECKPOINTS_JSON_H
