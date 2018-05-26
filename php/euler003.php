<?php
// https://projecteuler.net/problem=3

// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143

// Answer: 6857

function euler_solution_003($product)
{
  $answer = 1;
  $point = 3;
  $divisor = $product;

  while ( 0 == ( $divisor % 2 ) ) {
    $answer = 2;
    $divisor = ( $divisor / 2 );
  }

  while ($divisor != 1) {
    while (0 == ($divisor % $point)) {
      $answer = $point;
      $divisor = ($divisor / $point);
    }
    $point += 2;
  }
  return $answer;
}
echo euler_solution_003(600851475143)
?>
