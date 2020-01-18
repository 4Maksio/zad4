#include "FileOperationFactory.h"

std::unique_ptr<FileOperation> FileOperationFactory::create(const std::string &mode) {
    return std::unique_ptr<FileOperation>();
}
