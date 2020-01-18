#include "Arguments.h"
#include "FileOperation.h"
#include "Statistics.h"
#include "FileOperationFactory.h"

#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    Arguments arguments(argc, argv);

    auto file_operation = FileOperationFactory::create(arguments.mode);

    Statistics statistics;

    file_operation->execute(arguments, statistics);

    statistics.print();

    return 0;
}