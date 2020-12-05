import speech_recognition as sr
import pyttsx3
from datetime import date
from datetime import datetime

robot_ear = sr.Recognizer()
engine = pyttsx3.init()
robot_brain = ""

while True:
    # Robot ear
    with sr.Microphone() as mic:
        print("Robot: I'm Listening")
        audio = robot_ear.listen(mic)
    print("Robot: ...")

    try:
        you = robot_ear.recognize_google(audio)
    except:
        you = ""

    print("You: " + you) 

    # Robot brain
    if you == "":
        robot_brain = "I can't hear you, try again"
    elif "hello" in you:
        robot_brain = "Hello Chuc Xinh"
    elif "today" in you:
        today = date.today()
        robot_brain = today.strftime("%B %d, %Y")
    elif "time" in you:
        now = datetime.now()
        robot_brain = now.strftime("%H hours %M minutes %S seconds")
    elif "president" in you:
        robot_brain = "Donald Trunp"
    elif "bye" in you:
        robot_brain = "Bye Chuc xinh"
        print("Robot: " + robot_brain)
        engine.say(robot_brain)
        engine.runAndWait()
        break
    else:
        robot_brain = "I'm fine thank you anh you"

    # Robot mount
    print("Robot: " + robot_brain)
    engine = pyttsx3.init()
    engine.say(robot_brain)
    engine.runAndWait()