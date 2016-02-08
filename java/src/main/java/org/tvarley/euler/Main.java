package org.tvarley.euler;
/*
 * Euler project Java version
 * @author tvarley
 * @date 2/8/2016
 */

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;

import org.tvarley.euler.solutions.Solution001;

public class Main {
  private static final Logger log = LogManager.getLogger("Main");

  public static void main(String[] args) {
    new Main().run();
  }

  private void run() {
    Solution solution001 = new Solution001();
    long startTime = System.currentTimeMillis();
    String result = solution001.solve();
    long endTime = System.currentTimeMillis();
  }
}
