import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

import javax.swing.border.EmptyBorder;

public class Manager {
    ArrayList<Employee> employees = new ArrayList<>();

    public void addEmployee() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(Sytem.in));
        System.out.println("Please enter employee info below. ");
        System.out.print("ID: "); int id = Integer.parseInt(br.readLine());
        System.out.print("Name: "); String name = br.readLine();
        System.out.print("Dept: "); String dept = br.readLine();
        System.out.print("Salary: "); double sal = Double.parseDouble(br.readLine());
        System.out.print("Extra: "); double ext = Double.parseDouble(br.readLine());
        Employee emp = new Employee(id, name, dept, sal, ext);
        this.employees.add(emp);
    }

    public void addEmployees () throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(Sytem.in));
        System.out.print("Please enter #employees: ");
        int empNum = Integer.parseInt(br.readLine());
        System.out.println("---");
        for (int i = 0; i < empNum; i++) {
            this.addEmployee();
        }
    }

    public void saveEmployeeInfo() throws IOException {
        PrintWriter pw = new PrintWriter(new FileWriter("employees.txt"));
        for (Employee i : this.employees) {
            pw.write(i.introduce());
        }
        pw.close();
    }

    public void printEmployeeInfo() {
        for (Employee i : this.employees) {
            System.out.print(i.introduce());
        }
    }

    public static void main(String[] args) {
        Manager mgn = new Manager();
        try {
            mgn.addEmployees();
            mgn.saveEmployeeInfo();
            mgn.printEmployeeInfo();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
