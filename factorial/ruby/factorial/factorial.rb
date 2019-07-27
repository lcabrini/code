#! /usr/bin/env ruby

def factorial(n)
  if n < 0
    raise ArgumentError, "factorial is not defined for negative values"
  elsif n < 2
    1
  else
    f = 1
    n.downto(2) { |i| f *= i }    
    f
  end
end

-1.upto(10) do |i|
  begin
    f = factorial(i).to_s
  rescue ArgumentError
    f = "Not defined"
  end
  puts "%2d % 15s" % [i, f]
end
