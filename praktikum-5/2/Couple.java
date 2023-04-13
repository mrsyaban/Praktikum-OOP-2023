class  Couple <K, V>{
	private K key;
	private V value;

	public Couple (K key, V value){
		this.key = key;
		this.value = value;
	}

	public K getKey(){
		return this.key;
	}

	public  V getVal(){
		return this.value;
	}

	public void setKey(K k){
		this.key = k;
	}

	public void setVal(V v){
		this.value = v;
	}

	public boolean isEqual (Couple c){
		if (this.key == c.getKey() && this.value == c.getVal()){
			return true;
		} else {
			return false;
		}
	}
	
	public int nearEQ (Couple c) {
		if (this.key != c.getKey() && this.value != c.getVal()){
			return 0;
		} else if (this.key == c.getKey() && this.value != c.getVal()){
			return 1;
		} else if (this.key != c.getKey() && this.value == c.getVal()){
			return 2;
		} else {
			return 3;
		}
	}
}