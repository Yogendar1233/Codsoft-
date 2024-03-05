import java.util.ArrayList;
import java.util.List;

class Student {
    private String id;
    private String name;
    private int age;

    public Student(String id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    // Getters and setters
    // Implement as needed
}

class Course {
    private String courseId;
    private String courseName;

    public Course(String courseId, String courseName) {
        this.courseId = courseId;
        this.courseName = courseName;
    }

    // Getters and setters
    // Implement as needed
}

public class StudentManagementSystem {
    private List<Student> students;
    private List<Course> courses;

    public StudentManagementSystem() {
        students = new ArrayList<>();
        courses = new ArrayList<>();
    }

    public void addStudent(Student student) {
        students.add(student);
    }

    public void removeStudent(Student student) {
        students.remove(student);
    }

    public void addCourse(Course course) {
        courses.add(course);
    }

    public void removeCourse(Course course) {
        courses.remove(course);
    }

    // Other methods as needed for managing students and courses

    public static void main(String[] args) {
        // Example usage
        StudentManagementSystem system = new StudentManagementSystem();
        Student student1 = new Student("1", "Alice", 20);
        Student student2 = new Student("2", "Bob", 21);
        system.addStudent(student1);
        system.addStudent(student2);

        Course course1 = new Course("CSC101", "Introduction to Computer Science");
        Course course2 = new Course("MAT201", "Calculus");
        system.addCourse(course1);
        system.addCourse(course2);
    }
}
