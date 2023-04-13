public class Couple<K,V> {
    private K key;
    private V value;

    public Couple(K key, V value){
        this.key = key;
        this.value = value;
    }

    public K getKey(){
        return key;
    }

    public V getVal(){
        return value;
    }

    public void setKey(K key){
        this.key = key;
    }

    public void setVal(V value){
        this.value = value;
    }

    public boolean isEqual(Couple c){
        return this.key == c.getKey() && this.value == c.getVal();
    }

    public int nearEQ (Couple couple){
        if (isEqual(couple)) return 3;
        if (this.value == couple.getVal()) return 2;
        if (this.key == couple.getKey()) return 1;
        return 0;
    }
}
