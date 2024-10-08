#ifndef COMMON_H
#define COMMON_H

#include <malloc.h>
#include <pthread.h>
#include <unistd.h>

typedef struct WinData {
    size_t width;
    size_t height;
} WinData;

typedef struct WaveData {
    double amplitude;
    double f;
    double phi;
} WaveData;

// TODO: Добавить поле флагов по типу is_ready для возможности получения сигнала
// о готовности данных без использования сторонней синхронизации.
// TODO: Поддержка унифицированных параметров для графиков.
typedef struct GraphData {
    WaveData wave;
    size_t size;
    double step;  // на еденицу X
    double *array;
} GraphData;

typedef struct ThreadData {
    WinData window;
    //------------//
    size_t num_of_graph;
    GraphData *graph;  // При необходимости можно завести в массив
} ThreadData;

#endif  // !COMMON_H
