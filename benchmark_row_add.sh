# benchmark_row_add.sh
# Author: Stephen Polcyn

if [ ! -f data.csv ]; then
    ./gencsv
fi

timescaledb-parallel-copy --db-name=tutorial --table=challenge --verbose --reporting-period=1s --file=data.csv
