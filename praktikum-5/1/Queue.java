import java.util.*;

public class Queue<T> {

  private ArrayList<T> data;

  private int lastElmIdx, size;

  private final static int DEFAULT_QUEUE_SIZE = 500;

//Instantiate dengan size default

  public Queue() {
  	this.size = this.DEFAULT_QUEUE_SIZE;
  	this.lastElmIdx = -1;
    this.data = new ArrayList<T>();
  }

//Instantiate dengan size = n
  public Queue(int n){
  	this.size = n;
  	this.lastElmIdx = -1;
    this.data = new ArrayList<T>();
  }

//Copy queue

  public Queue(final Queue<T> q){
  	this.size = q.size;
  	this.lastElmIdx = q.lastElmIdx;
  	this.data = new ArrayList<T>();
    for (int i=0; i < q.lastElmIdx; i++){
      this.data.add(q.data.get(i));
    }
    // this.data = q.data
  }

  public void push(T t){
    if (!isFull()){
    	this.lastElmIdx ++;
    	this.data.add(t);
    }
  }

  public T pop(){
    if (!isEmpty()){
	  	this.lastElmIdx--;
      T temp = this.data.get(0);
	  	this.data.remove(0);
	  	return temp;
    } else {
      return null;
    }
  }

  public boolean isEmpty(){
  	return this.lastElmIdx < 0; 
  }

  public boolean isFull(){
  	return this.lastElmIdx == this.size -1;
  }

}