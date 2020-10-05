#include "Containers.h"
#include <benchmark/benchmark.h>


using namespace std;

Containers vector_container;
Containers list_container;

static void BM_VECTOR(benchmark::State& state)
{
    for (auto _ : state)
    {
        vector<int> vector_test(state.range(0));
        generate(vector_test.begin(), vector_test.end(), rand);
        vector_container.set_sum(vector_test);
    }
}

static void BM_LIST(benchmark::State& state)
{
    for(auto _ : state)
    {
        list<int> list_test(state.range(0));
        generate(list_test.begin(), list_test.end(), rand);
        list_container.set_sum(list_test);
    }
}

static void BM_VECTOR_M(benchmark::State& state)
{
     for (auto _ : state)
    {
        vector<int> vector_test(1000000);
        generate(vector_test.begin(), vector_test.end(), rand);
        vector_container.set_sum(vector_test);
    }
}


BENCHMARK(BM_VECTOR) -> Arg(1000) -> Arg(5000) -> Arg(10000);
BENCHMARK(BM_LIST) -> Arg(1000) -> Arg(5000) -> Arg(10000);
BENCHMARK(BM_VECTOR_M);


BENCHMARK_MAIN();
