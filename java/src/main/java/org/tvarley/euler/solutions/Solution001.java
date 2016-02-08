/*
 * Solution for Euler problem 001
 *
 * Multiples of 3 and 5
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * @author tvarley
 * @date 2/8/2016
 */
package org.tvarley.euler.solutions;

import org.tvarley.euler.Solution;

public class Solution001 implements Solution {
  public String solve() {
    int sum = 0;
    for (int i = 0 ; i < 1000 ; i++ ) {
      if((i % 3 == 0) || (i % 5 == 0)) {
        sum += i;
      }
    }
    return Integer.toString(sum);
  }
}
