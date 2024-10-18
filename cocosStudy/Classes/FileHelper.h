#ifndef __FILE_HELPER_H__
#define __FILE_HELPER_H__

#include "cocos2d.h"
#include <spine/Json.h> // jsoncpp ���
#include "tinyxml2.h" // tinyxml2 ���
#include <fstream>
#include <sstream>

class FileHelper {
public:
    // JSON ���� �б�
    static void readJsonFile(const std::string& filePath);

    // XML ���� �б�
    static void readXmlFile(const std::string& filePath);

    // CSV ���� �б�
    static void readCsvFile(const std::string& filePath);
};

#endif // __FILE_HELPER_H__
