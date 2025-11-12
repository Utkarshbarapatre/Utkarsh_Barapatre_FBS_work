class SocialMediaAccount{
    String userName;
    String email;
    boolean isPublic;
    boolean isVerified;
    String countryOfOrigin;
    int noOfPosts;
    int noOfLikes;
    int noOfComments;
    String createdAt;
    int noOfImpressions;

    SocialMediaAccount(){
        userName="Unknown";
        email="N/A";
        isPublic=true;
        isVerified=false;
        countryOfOrigin="Unknown";
        noOfPosts=0;
        noOfLikes=0;
        noOfComments=0;
        createdAt="NotSet";
        noOfImpressions=0;
    }

    SocialMediaAccount(String userName,String email,boolean isPublic,boolean isVerified,String countryOfOrigin,
                       int noOfPosts,int noOfLikes,int noOfComments,String createdAt,int noOfImpressions){
        this.userName=userName;
        this.email=email;
        this.isPublic=isPublic;
        this.isVerified=isVerified;
        this.countryOfOrigin=countryOfOrigin;
        this.noOfPosts=noOfPosts;
        this.noOfLikes=noOfLikes;
        this.noOfComments=noOfComments;
        this.createdAt=createdAt;
        this.noOfImpressions=noOfImpressions;
    }

    void display(){
        System.out.println("Username: "+userName);
        System.out.println("Email: "+email);
        System.out.println("Public: "+isPublic);
        System.out.println("Verified: "+isVerified);
        System.out.println("Country: "+countryOfOrigin);
        System.out.println("Posts: "+noOfPosts);
        System.out.println("Likes: "+noOfLikes);
        System.out.println("Comments: "+noOfComments);
        System.out.println("Created At: "+createdAt);
        System.out.println("Impressions: "+noOfImpressions);
    }
}

class InstagramAccount extends SocialMediaAccount{
    int noOfFollowers;
    int noOfFollowing;
    int noOfHighlights;
    int noOfPostArchive;
    int noOfStoryArchive;
    int noOfAudioSaved;

    InstagramAccount(){
        super();
        noOfFollowers=0;
        noOfFollowing=0;
        noOfHighlights=0;
        noOfPostArchive=0;
        noOfStoryArchive=0;
        noOfAudioSaved=0;
    }

    InstagramAccount(String userName,String email,boolean isPublic,boolean isVerified,String countryOfOrigin,
                     int noOfPosts,int noOfLikes,int noOfComments,String createdAt,int noOfImpressions,
                     int noOfFollowers,int noOfFollowing,int noOfHighlights,int noOfPostArchive,
                     int noOfStoryArchive,int noOfAudioSaved){
        super(userName,email,isPublic,isVerified,countryOfOrigin,noOfPosts,noOfLikes,noOfComments,createdAt,noOfImpressions);
        this.noOfFollowers=noOfFollowers;
        this.noOfFollowing=noOfFollowing;
        this.noOfHighlights=noOfHighlights;
        this.noOfPostArchive=noOfPostArchive;
        this.noOfStoryArchive=noOfStoryArchive;
        this.noOfAudioSaved=noOfAudioSaved;
    }

    void display(){
        super.display();
        System.out.println("Followers: "+noOfFollowers);
        System.out.println("Following: "+noOfFollowing);
        System.out.println("Highlights: "+noOfHighlights);
        System.out.println("Post Archive: "+noOfPostArchive);
        System.out.println("Story Archive: "+noOfStoryArchive);
        System.out.println("Audio Saved: "+noOfAudioSaved);
    }
}

class LinkedInAccount extends SocialMediaAccount{
    int noOfConnections;
    int noOfProfileReviews;
    int noOfJobsApplied;

    LinkedInAccount(){
        super();
        noOfConnections=0;
        noOfProfileReviews=0;
        noOfJobsApplied=0;
    }

    LinkedInAccount(String userName,String email,boolean isPublic,boolean isVerified,String countryOfOrigin,
                    int noOfPosts,int noOfLikes,int noOfComments,String createdAt,int noOfImpressions,
                    int noOfConnections,int noOfProfileReviews,int noOfJobsApplied){
        super(userName,email,isPublic,isVerified,countryOfOrigin,noOfPosts,noOfLikes,noOfComments,createdAt,noOfImpressions);
        this.noOfConnections=noOfConnections;
        this.noOfProfileReviews=noOfProfileReviews;
        this.noOfJobsApplied=noOfJobsApplied;
    }

    void display(){
        super.display();
        System.out.println("Connections: "+noOfConnections);
        System.out.println("Profile Reviews: "+noOfProfileReviews);
        System.out.println("Jobs Applied: "+noOfJobsApplied);
    }
}

class YouTubeAccount extends SocialMediaAccount{
    int noOfSubscribers;
    double watchTime;
    boolean isMonetized;
    double estimatedRevenue;

    YouTubeAccount(){
        super();
        noOfSubscribers=0;
        watchTime=0.0;
        isMonetized=false;
        estimatedRevenue=0.0;
    }

    YouTubeAccount(String userName,String email,boolean isPublic,boolean isVerified,String countryOfOrigin,
                   int noOfPosts,int noOfLikes,int noOfComments,String createdAt,int noOfImpressions,
                   int noOfSubscribers,double watchTime,boolean isMonetized,double estimatedRevenue){
        super(userName,email,isPublic,isVerified,countryOfOrigin,noOfPosts,noOfLikes,noOfComments,createdAt,noOfImpressions);
        this.noOfSubscribers=noOfSubscribers;
        this.watchTime=watchTime;
        this.isMonetized=isMonetized;
        this.estimatedRevenue=estimatedRevenue;
    }

    void display(){
        super.display();
        System.out.println("Subscribers: "+noOfSubscribers);
        System.out.println("Watch Time (hrs): "+watchTime);
        System.out.println("Monetized: "+isMonetized);
        System.out.println("Estimated Revenue: "+estimatedRevenue);
    }
}

public class SocialMediaInheritance{
    public static void main(String[] args){
        InstagramAccount ig1=new InstagramAccount();
        LinkedInAccount li1=new LinkedInAccount();
        YouTubeAccount yt1=new YouTubeAccount();

        InstagramAccount ig2=new InstagramAccount("utkarsh_11","utkarsh@gmail.com",true,true,"India",150,1200,500,"2019-06-01",20000,
                                                  800,600,10,50,25,100);
        LinkedInAccount li2=new LinkedInAccount("Utkarsh B","utkarshb@gmail.com",true,true,"India",60,700,300,"2020-02-15",10000,
                                                500,200,15);
        YouTubeAccount yt2=new YouTubeAccount("Utkarsh Tech","utkarsh@youtube.com",true,true,"India",300,25000,5000,"2018-05-20",80000,
                                              10000,3500.5,true,120000.75);

        System.out.println("Default Instagram");
        ig1.display();
        System.out.println("\nParameterized Instagram");
        ig2.display();

        System.out.println("\nDefault LinkedIn");
        li1.display();
        System.out.println("\nParameterized LinkedIn");
        li2.display();

        System.out.println("\nDefault YouTube");
        yt1.display();
        System.out.println("\nParameterized YouTube");
        yt2.display();
    }
}
