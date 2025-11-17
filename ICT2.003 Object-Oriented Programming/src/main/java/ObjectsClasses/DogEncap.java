package ObjectsClasses;

public class DogEncap {
    private int size;

    public void setSize (int x) {
        if (x > 0) size = x;
    }

    public int getSize() {
        return size;
    }
}
