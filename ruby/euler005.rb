#!/usr/bin/ruby
# https://projecteuler.net/problem=5

# 2520 is the smallest number that can be divided by each of the numbers from
# 1 to 10 without any remainder.
# What is the smallest positive number that is evenly divisible by all of the
# numbers from 1 to 20?

# Answer: 232792560

def will_divide(test_me)
  20.downto(1) do |i|
    return false if test_me % i != 0
  end
  true
end

answer = 20
while 1
  break if will_divide(answer)
  answer += 20
end

puts "Answer: #{answer}"
