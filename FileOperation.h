#ifndef TEST_FILEOPERATION_H
#define TEST_FILEOPERATION_H

#include "Arguments.h"
#include "Statistics.h"

class FileOperation {
public:
    virtual void execute(const Arguments& arguments, Statistics& statistics) = 0;
};

#endif //TEST_FILEOPERATION_H
