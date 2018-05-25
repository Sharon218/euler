<?php
// Each new term in the Fibonacci sequence is generated by adding the
// previous two terms. By starting with 1 and 2, the first 10 terms will be:
//
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
// By considering the terms in the Fibonacci sequence whose values do not
// exceed four million, find the sum of the even-valued terms.

// Answer: 4613732

function euler_solution_002($upper)
{
  $fib1 = 1;
  $fib2 = 1;
  $result = 0;
  $summed = 0;

  while ($result < $upper) {
    if (($result % 2) == 0) {
      $summed += $result;
    }

    $result = $fib1 + $fib2;
    $fib2 = $fib1;
    $fib1 = $result;
  }
  return $summed;
}

echo euler_solution_002(4000000);
?>

