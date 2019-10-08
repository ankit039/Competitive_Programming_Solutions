import tkinter as tk
from tkinter import filedialog
from pydub import AudioSegment

root =tk.Tk()
root.withdraw()

def combination():
    combined = prefixMP3 + songMP3
    fileOutputLocation = filedialog.askdirectory(title="PLEASE SELECT THE OUTPUT LOCATION")
    fileExportName = input("Please enter the file output name without the .mp3 extension \n")
    exportFile = combined.export(fileOutputLocation + "\\" + fileExportName + ".mp3", format="mp3")
    print("Prefix has been added to the song!")



print("Welcome to MP3 Prefix Additions")
userInput = input("Please type 1 to begin or press anything else to quit\n")

if(userInput == str(1)):
    print('Please select the song mp3 file fist')
    print("Then select the prefix mp3 file to add to the beginning of the song")
    songMP3File = filedialog.askopenfile(filetypes =(("MP3 File", "*.mp3"),("All Files","*.*")),title = "PLEASE SELECT THE SONG FILE")
    prefixMP3File = filedialog.askopenfile(filetypes =(("MP3 File", "*.mp3"),("All Files","*.*")),title = "PLEASE SELECT THE PREFIX FILE")
    print("Thank You, Working on finding directory and file type")
    songSplit = str(songMP3File).split("'")
    prefixSplit = str(prefixMP3File).split("'")
    songDir = str(songSplit[1])
    prefixDir = str(prefixSplit[1])
    songMP3 = AudioSegment.from_file(str(songDir), format="mp3")
    prefixMP3 = AudioSegment.from_file(str(prefixDir), format="mp3")

    combination()


else:
    quit()
