#include <iostream>
#include <string>
using namespace std;

class MusicPlayer
{
private:
    string title, artist, album, genre, playlist;
    int id, playCount;
    float duration;
    bool available;

public:

    // Default Constructor
    MusicPlayer()
    {
        id = 0;
        title = "Not Set";
        artist = "Unknown";
        album = "None";
        genre = "None";
        playlist = "None";
        duration = 0;
        playCount = 0;
        available = false;
    }

    // Parameterized Constructor
    MusicPlayer(int songId, string songTitle, string singer,
                string albumName, string songGenre,
                float songDuration, string listName)
    {
        id = songId;
        title = songTitle;
        artist = singer;
        album = albumName;
        genre = songGenre;
        duration = songDuration;
        playlist = listName;
        playCount = 0;
        available = true;
    }

    // Copy Constructor
    MusicPlayer(const MusicPlayer &song)
    {
        id = song.id;
        title = song.title;
        artist = song.artist;
        album = song.album;
        genre = song.genre;
        duration = song.duration;
        playlist = song.playlist;
        playCount = song.playCount;
        available = song.available;
    }

    // Destructor
    ~MusicPlayer()
    {
        // Destructor is called automatically
    }

    // Add New Song Record
    void addSong()
    {
        cout << "\nEnter Song ID: ";
        cin >> id;

        cout << "Enter Song Title: ";
        cin >> ws;
        getline(cin, title);

        cout << "Enter Artist Name: ";
        getline(cin, artist);

        cout << "Enter Album Name: ";
        getline(cin, album);

        cout << "Enter Genre: ";
        getline(cin, genre);

        cout << "Enter Duration (in minutes): ";
        cin >> duration;

        cout << "Enter Playlist/Category: ";
        cin >> ws;
        getline(cin, playlist);

        playCount = 0;
        available = true;

        cout << "\nSong added successfully.\n";
    }

    void displaySong()
    {
        cout << "\n----- SONG DETAILS -----";
        cout << "\nSong Title: " << title;
        cout << "\nSong ID: " << id;
        cout << "\nArtist: " << artist;
        cout << "\nAlbum: " << album;
        cout << "\nGenre: " << genre;
        cout << "\nDuration: " << duration << " minutes";
        cout << "\nPlaylist: " << playlist << endl;
    }

    void playSong()
    {
        if (available)
        {
            playCount++;
            cout << "\nNow Playing: " << title << endl;
        }
        else
        {
            cout << "\nSong is not available.\n";
        }
    }

    void changePlaylist()
    {
        cout << "\nEnter playlist name: ";
        cin >> ws;
        getline(cin, playlist);

        cout << "Song added to playlist successfully.\n";
    }
    void removeFromPlaylist()
    {
        playlist = "None";
        cout << "\nSong removed from the playlist.\n";
    }
    void showStatistics()
    {
        cout << "\n----- SONG STATISTICS -----";
        cout << "\nNumber of plays: " << playCount;
        cout << "\nStatus: "
             << (available ? "Available" : "Not Available") << endl;
    }
};
int main()
{
    MusicPlayer song;
    int choice;

    cout << "===== ONLINE MUSIC MANAGEMENT SYSTEM =====";

    do
    {
        cout << "\n\n===== MENU =====";
        cout << "\n1. Add New Song Record";
        cout << "\n2. Display Song Details";
        cout << "\n3. Play Song";
        cout << "\n4. Add to Playlist";
        cout << "\n5. Remove From Playlist";
        cout << "\n6. View Statistics";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                song.addSong();
                break;
            case 2:
                song.displaySong();
                break;
            case 3:
                song.playSong();
                break;
            case 4:
                song.changePlaylist();
                break;
            case 5:
                song.removeFromPlaylist();
                break;
            case 6:
                song.showStatistics();
                break;
            case 7:
                cout << "\nThank you for using Online Music Management System!";
                break;
            default:
                cout << "\nPlease enter a valid choice.";
        }
    } while (choice != 7);
    return 0;
}

/* output :
===== ONLINE MUSIC MANAGEMENT SYSTEM =====

===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 1

Enter Song ID: 2397
Enter Song Title: Agar Tum Saath Ho
Enter Artist Name: Alka Yagnik
Enter Album Name: Tamasha
Enter Genre: Bollywood Romantic
Enter Duration (in minutes): 4.08
Enter Playlist/Category: Heartbreak

Song added successfully.


===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 2

----- SONG DETAILS -----
Song Title: Agar Tum Saath Ho
Song ID: 2397
Artist: Alka Yagnik
Album: Tamasha
Genre: Bollywood Romantic
Duration: 4.08 minutes
Playlist: Heartbreak


===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 3

Now Playing: Agar Tum Saath Ho


===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 4

Enter playlist name: Love Melodies
Song added to playlist successfully.


===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 2

----- SONG DETAILS -----
Song Title: Agar Tum Saath Ho
Song ID: 2397
Artist: Alka Yagnik
Album: Tamasha
Genre: Bollywood Romantic
Duration: 4.08 minutes
Playlist: Love Melodies


===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 5

Song removed from the playlist.


===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 6

----- SONG STATISTICS -----
Number of plays: 1
Status: Available


===== MENU =====
1. Add New Song Record
2. Display Song Details
3. Play Song
4. Add to Playlist
5. Remove From Playlist
6. View Statistics
7. Exit
Enter your choice: 7

Thank you for using Online Music Management System! */
