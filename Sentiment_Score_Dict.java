import java.util.AbstractMap;
import java.util.HashMap;

public class Sentiment_Score_Dict{
    protected HashMap<String, Integer> positive_words;
    protected HashMap<String, Integer> negative_words;
    protected HashMap<String, Integer> neutral_words;
    
    public Sentiment_Score_Dict(){
	positive_words = new HashMap<String, Integer>(){{
		put("awesome", 5);
	    }};
    }
    public int GetScore(String word){
	if (positive_words.containsValue(word)){
	    return positive_words.get(word);
	}
	if (negative_words.containsValue(word)){
	    return negtaive_words.get(word);
	}
	if (neutral_words.containsValue(word)){
	    return neutral_words.get(word);
	}
	
    }
    
}