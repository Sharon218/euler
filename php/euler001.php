<?php
// https://projecteuler.net/problem=1

// If we list all the natural numbers below 10 that are multiples of 3 or 5,
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
//
// Answer: 234168

function sum_natural_35($range)
{
  return array_sum(
    array_filter($range, function($number) {
      return ( 0 == $number % 3 ) || ( 0 == $number % 5 );
    })
  );
}

echo sum_natural_35(range(0, 1000));
?>
