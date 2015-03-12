import java.util.*;

public class Sentiment_Score_Driver{

    public static void main ( String [] args){
	fio tweets = new fio ();
	tweets.openFile("test.txt");
	String readTweet = tweets.readLine();
	while (tweets.hasMoreData()){
	    System.out.println(readTweet);
	    readTweet = tweets.readLine();
	}
	tweets.close();
	Sentiment_Score_Dict helper = new Sentiment_Score_Dict();
	
    }
}
