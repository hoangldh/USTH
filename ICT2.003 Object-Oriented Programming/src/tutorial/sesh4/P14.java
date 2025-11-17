import java.util.*;
import java.io.*;

public class P14 {
  static class Emp {
    String id, name, dept;
    double basic, extra;
  }

  public static void main(String[] args) {
    try (Scanner sc = new Scanner(System.in)) {
      System.out.print("Number of employees: ");
      int n = sc.nextInt(); sc.nextLine();
      List<Emp> list = new ArrayList<>();

      for (int i = 0; i < n; i++) {
        Emp e = new Emp();
        System.out.println("Employee #" + (i+1));
        System.out.print("ID: ");    e.id = sc.nextLine().trim();
        System.out.print("Full name: "); e.name = sc.nextLine().trim();
        System.out.print("Department: "); e.dept = sc.nextLine().trim();
        try {
          System.out.print("Basic salary: "); e.basic = Double.parseDouble(sc.nextLine());
          System.out.print("Extra salary: "); e.extra = Double.parseDouble(sc.nextLine());
        } catch (NumberFormatException nfe) {
          System.out.println("Bad number, aborting."); return;
        }
        list.add(e);
      }

      // write
      try (PrintWriter out = new PrintWriter(new FileWriter("employees.txt"))) {
        for (Emp e : list)
          out.printf("%s|%s|%s|%f|%f%n", e.id, e.name, e.dept, e.basic, e.extra);
      } catch (IOException ioe) {
        System.out.println("Cannot write file: " + ioe.getMessage());
        return;
      }

      // read & print income
      System.out.println("\nID | Name | Dept | Income");
      try (BufferedReader br = new BufferedReader(new FileReader("employees.txt"))) {
        for (String line; (line = br.readLine()) != null; ) {
          String[] p = line.split("\\|", -1);
          if (p.length != 5) continue;
          try {
            double basic = Double.parseDouble(p[3]);
            double extra = Double.parseDouble(p[4]);
            double income = basic + extra * 2.5;
            System.out.printf("%s | %s | %s | %.2f%n", p[0], p[1], p[2], income);
          } catch (NumberFormatException ignore) { /* skip bad line */ }
        }
      } catch (IOException ioe) {
        System.out.println("Cannot read file: " + ioe.getMessage());
      }
    } catch (Exception e) {
      System.out.println("Unexpected error: " + e.getMessage());
    }
  }
}
