/*
 * Euler Project Util tests
 *
 * @author tvarley
 * @date 2/9/2016
 */

import org.junit.Test;
import static org.junit.Assert.*;

import org.tvarley.euler.util.Prime;

public class UtilTest {
  @Test public void testPrime01() {
    assertTrue("isPrime should return true",Prime.isPrime(3));
  }

  @Test public void testPrime02() {
    assertFalse("isPrime should return false",Prime.isPrime(8));
  }

  @Test public void testPrime03() {
    assertTrue("isPrime should return true",Prime.isPrime(997));
  }
}
