public class Employee {
    public int id;
    public String name, dept;
    public double sal, ext;

    public Employee(int id, String name, String dept, double sal, double ext) {
        this.id = id;
        this.name = name;
        this.dept = dept;
        this.sal = sal;
        this.ext = ext;
    }

    public double calIncome() {
        return this.sal + this.ext * 2.5;
    }

    public String introduce() {
        return "My name is " + this.name
            + " [" + this.id + "]: \n"
            + "Department: " + this.dept + "\n"
            + "Salary: " + this.sal + "\n"
            + "Ext: " + this.ext + "\n"
            + "Income: " + this.calIncome();
    }
}
