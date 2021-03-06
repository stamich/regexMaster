//
// Created by EB79OJ on 2019-04-24.
//

#ifndef REGEXMASTER_REGEXMASTERPROPERTIESHANDLER_H
#define REGEXMASTER_REGEXMASTERPROPERTIESHANDLER_H

#include <string>

class RegexMasterPropertiesHandler {

    enum Properties{
        VERSION,
        THREADS_RUNNING,
        INSTANCE_NUMBER,
        SCALABILITY,
        MATCH_PROPER_DATE,
        TIME_ZONE,
        CHARSET,
        INCOME_DATA_PATH,
        OUTCOME_DATA_PATH,
        LOG_FILE_PATH,
        INCOME_FILES_FORMULA,
        LAST_FILE_FORMULA,
        OUTCOME_FILES_FORMULA,
        CARD_FORMULA,
        FILE1_MASK,
        FILE2_MASK,
        FILE3_MASK,
        FILE4_MASK,
        FILE5_MASK
    };

    std::string properties;

public:
    RegexMasterPropertiesHandler();
    const std::string &getProperties(std::string properties) const;
    const std::string loadConfigurationFile(std::string filePath);
    const std::string ambiguityResolver();
    ~RegexMasterPropertiesHandler();
};


#endif //REGEXMASTER_REGEXMASTERPROPERTIESHANDLER_H
