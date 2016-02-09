/*
 * Euler project test project
 *
 * @author tvarley,
 * @date 2/9/16
 */

import org.junit.Test;
import static org.junit.Assert.*;

import org.tvarley.euler.Solution;
import org.tvarley.euler.solutions.Solution001;
import org.tvarley.euler.solutions.Solution002;
import org.tvarley.euler.solutions.Solution003;

public class EulerTest {
  @Test public void testSolution001() {
    Solution solution001 = new Solution001();
    assertEquals("Solution 001 should return 233168", solution001.solve(), "233168" );
  }

  @Test public void testSolution002() {
    Solution solution002 = new Solution002();
    assertEquals("Solution 002 should return 4613732", solution002.solve(), "4613732" );
  }

  @Test public void testSolution003() {
    Solution solution003 = new Solution003();
    assertEquals("Solution 003 should return 6857", solution003.solve(), "6857" );
  }
}
