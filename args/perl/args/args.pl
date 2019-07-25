#! /usr/bin/perl

use strict;
use warnings;

my $argc = scalar @ARGV;
print "Number of arguments: $argc\n";
for my $i (0 .. $#ARGV) {
    printf("%2d. %s\n", $i+1, $ARGV[$i]);
}
