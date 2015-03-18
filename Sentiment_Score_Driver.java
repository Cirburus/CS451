import java.util.*;

public class Sentiment_Score_Driver{

    public static void main ( String [] args){
	Sentiment_Score_Dict helper = new Sentiment_Score_Dict();
	fio tweets = new fio ();
	tweets.openFile("test.txt");
	int tweetNum = 0;
	String consider = tweets.readLine();
	StringTokenizer readTweet = new StringTokenizer(consider, " ");
	while (tweets.hasMoreData()){
	    int tweetScore = 0;
	    System.out.println(consider);
	    while (readTweet.hasMoreTokens()){
		String token = readTweet.nextToken().trim();
		if (helper.hasWord(token)){
		    tweetScore +=  helper.getScore(token.tolo);
		}
	    }
	    System.out.println("Tweet number " +(++tweetNum)+" has a score of "+tweetScore);
	    consider = tweets.readLine();
	    if (readTweet.hasMoreTokens()){readTweet = new StringTokenizer(consider," ");}
	}
	tweets.close();
    }
}
