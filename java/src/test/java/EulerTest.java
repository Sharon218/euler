import org.junit.Test;
import static org.junit.Assert.*;

import org.tvarley.euler.Solution;
import org.tvarley.euler.solutions.Solution001;
import org.tvarley.euler.solutions.Solution002;

/*
 * Euler project test project
 *
 * @author tvarley, @date 2/8/16 3:13 PM
 */
public class EulerTest {
  @Test public void testSolution001() {
    Solution solution001 = new Solution001();
    assertEquals("Solution 001 should return 233168", solution001.solve(), "233168" );
  }

  @Test public void testSolution002() {
    Solution solution002 = new Solution002();
    assertEquals("Solution 001 should return 4613732", solution002.solve(), "4613732" );
  }
}
