import java.util.ArrayList;

public class Queue <T>{

  private ArrayList<T> data;

  private int lastElmIdx, size;

  private final static int DEFAULT_QUEUE_SIZE = 500;



//Instantiate dengan size default

  public Queue(){
    size = DEFAULT_QUEUE_SIZE;
    lastElmIdx = -1;
    data = new ArrayList<T>();
  }

//Instantiate dengan size = n

  public Queue(int n){
    size = n;
    lastElmIdx = -1;
    data = new ArrayList<T>();
  }

  public int getSize(){
    return size;
  }

  public int getLastIdx(){
    return lastElmIdx;
  }

  public ArrayList<T> getData(){
    return data;
  }

//Copy queue

  public Queue(final Queue q){
    size = q.getSize();
    lastElmIdx = q.getLastIdx();
    data = q.getData();
  }

  public void push(T t){
    if(!this.isFull()){
      data.add(t);
      lastElmIdx++;
    }
  }

  public T pop(){
    T x;
    if(!this.isEmpty()){
      x = data.get(0);
      data.remove(0);
      lastElmIdx--;
      return x;
    }
    return null;
  }

  public boolean isEmpty(){
    return lastElmIdx == -1;
  }

  public boolean isFull(){
    return lastElmIdx == size-1;
  }
}