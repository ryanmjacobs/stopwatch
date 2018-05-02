#!/bin/bash

trap "rm -vf tmp.vvp" EXIT

for tb in src/tb/*_tb.v; do
    iverilog -o tmp.vvp src/*.v "$tb"
    vvp tmp.vvp
done
