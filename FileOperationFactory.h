#ifndef TEST_FILEOPERATIONFACTORY_H
#define TEST_FILEOPERATIONFACTORY_H

#include "FileOperation.h"

#include <memory>

class FileOperationFactory {
public:
    static std::unique_ptr<FileOperation> create(const std::string& mode);
};


#endif //TEST_FILEOPERATIONFACTORY_H
