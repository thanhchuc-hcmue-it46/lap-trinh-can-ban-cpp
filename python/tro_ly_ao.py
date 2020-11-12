import speech_recognition as sr
import pyttsx3

# Robot ear
robot_ear = sr.Recognizer()
with sr.Microphone() as mic:
    print("Robot: I'm Listening")
    audio = robot_ear.listen(mic)

you = ""
try:
    you = robot_ear.recognize_google(audio)
except:
    you = ""

print("You: " + you) 

# Robot brain
robot_brain = ""
if you == "":
    robot_brain = "I can't hear you, try again"
elif you == "hello":
    robot_brain = "Hello Chuc Xinh"

# Robot mount
print("Robot: " + robot_brain)
engine = pyttsx3.init()
engine.say(robot_brain)
engine.runAndWait()