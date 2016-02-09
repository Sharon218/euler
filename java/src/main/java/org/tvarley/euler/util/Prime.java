/*
 * Euler project prime utilities
 *
 * @author tvarley
 * @date 2/9/2016
 */
package org.tvarley.euler.util;

public final class Prime {
  public static boolean isPrime(int n) {
    if( n <= 1 ) {
      return false;
    }

    if( n == 2 ) {
      return true;
    }

    for (int i = 2; i <= Math.sqrt(n) + 1; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
}
