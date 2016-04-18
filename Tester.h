/**
*   usage : 1.  test all units in CPPutilibs.
*
*   note :  1.
*/

#ifndef TESTER_H
#define TESTER_H


#include <iostream>
#include <sstream>
#include <algorithm>
#include <thread>
#include <chrono>

#include "system/Directory.h"
#include "system/Termination.h"
#include "system/Memory.h"

#include "io/File.h"

#include "type/Double.h"
#include "type/Convert.h"
#include "type/Integer.h"
#include "type/VectorMD.h"
#include "type/Arr.h"
#include "type/PriorityQueue.h"

#include "random/Random.h"
#include "random/RangeRand.h"
#include "random/RandSelect.h"

#include "algorithm/Graph.h"
#include "algorithm/BidirectionIndex.h"
#include "algorithm/Counter.h"
#include "algorithm/SetOperation.h"
#include "algorithm/String.h"
#include "algorithm/DijkstraPathGenerator.h"

#include "log/Timer.h"
#include "log/Log.h"
#include "log/Trace.h"


void testDirectory();
void testFileLock();
void testTermination();
void testMemory();

void testFile();

void testDouble();
void testConvert();
void testInteger();
void testVectorMD();
void testArr();
void testPriorityQueue();

void testRandom();
void testRangeRand();
void testRandSelect();

void testGraph();
void testBidirectionIndex();
void testCounter();
void testSetOperation();
void testString();
void testDijkstraPathGenerator();

void testTimer();
void testLog();
void testTrace();


void f_testTrace( int i );

#endif