import speech_recognition as SR
import pyttsx3
import datetime
import pyjokes
import pywhatkit
import time
import wikipedia
import weather_forecast as wf

#   inits
boogey_talk = pyttsx3.init()
boogey = SR.Recognizer()
#   voice mode change
female_tone = boogey_talk.getProperty('voices')
boogey_talk.setProperty('voice', female_tone[1].id)


def replaceBy(box1 ,box2,sen):
    i = 0
    for j in box1:
        if j in sen:
            sen = sen.replace(j,box2[i])
            i += 1
    return sen

def isExist(box, req):
    for i in box:
        if i in req:
            return True
    return False


def ignored(box, req):
    # print(box)
    # print(req)
    new = req.split(' ')
    for i in box:
        if i in new:
            new.remove(i)
    ret = ''
    for i in new:
        ret += i + ' '
    return ret


class Boogeywoman:
    def __init__(self):
        pass
    name = ''

    #       functions
    def talk(self, messege, isPrint=1):
        if isPrint:
            print(messege)
        boogey_talk.say(messege)
        boogey_talk.runAndWait()

    def introduceBoogeywoman(self):
        self.talk("hi i am boogeywoman . I am created by some lazy students  . By the way ,How can i help you , don't be shy", isPrint=False)

    def take_req(self,listen = 1):
        try:
            with SR.Microphone() as mic:
                # print("say what you want . . . ")
                if listen:
                    self.talk('listening .....')
                voice_command = boogey.listen(mic)
                user_command = boogey.recognize_google(voice_command)
                user_command = user_command.lower()
                return user_command

        except:
            return "bad read"

    def sayTime(self):
        time__ = datetime.datetime.now().strftime('%I:%M %p')
        self.talk(f"Current time is {time__}")

    def sayDate(self):
        date = datetime.datetime.now().strftime('%A')
        self.talk(f"Today is {date}")

    def playIt(self,topic):
        topic = ignored(['youtube', 'in', 'on', 'google', 'play'] , topic )
        self.talk('playing ' + topic)
        pywhatkit.playonyt(topic)
        time.sleep(5)

    def search(self, topic):
        topic = ignored(['in', 'on', 'google', 'it', 'please', 'search'], topic)
        self.talk('Searching ' + topic)
        pywhatkit.search(topic)
        time.sleep(5)

    def tellAbout(self,topic):
        topic = ignored(['tell me','about','who','is'],topic)
        try:
            info_got = wikipedia.summary(topic,3)
            self.talk(info_got)
        except:
            self.talk("sorry din not find " + topic)

    def crrTemp(self,place):
        place = ignored(['current','temperature','of','what','is','there','in',"what's the",'weather'],place)
        _time = datetime.datetime.now().strftime('%H:%M:%S')
        date = datetime.datetime.now().strftime('%Y-%m-%d')
        self.talk(f'current weather of {place} is below with details')
        wf.forecast(place=place, time=_time, date=date, forecast="daily")
        time.sleep(10)

    def tellJoke(self):
        joke = pyjokes.get_joke('en','neutral')
        self.talk('ok .' + joke)

    def waitForcOmmand(self):
        while True:
            tempReq = boogeywoman.take_req(0)
            if tempReq == 'bad read':
                print('..bad read..')
            if isExist(['hero','hello','hi' , 'hai', 'hay'],tempReq) :
                return
    def sayIam(self,sen):
        sen = replaceBy(['say','you are'],['','i am'],sen)
        self.talk(sen)

    def askName(self):
        self.talk("what is your name....")
        name = self.take_req(listen=False)
        name = ignored(['my','name','is','i','am'],name)
        return  name


#   driver code

boogeywoman = Boogeywoman()
boogeywoman.introduceBoogeywoman()

while True:

    request = boogeywoman.take_req()

    if request == 'bad read':

        boogeywoman.talk("You need to talk to execute commands . say exit or leave to exit and say hello to active me . thanks")

    elif 'time' in request:

        boogeywoman.sayTime()

    elif isExist(['today', 'day'], request):

        boogeywoman.sayDate()

    elif isExist(['exit', 'leave'], request):

        boogeywoman.talk("Thanks for using me. Have a nice day")
        break

    elif 'search' in request:

        boogeywoman.search(request)

    elif isExist(['play'], request):

        boogeywoman.playIt(request)
        boogeywoman.waitForcOmmand()

    elif isExist(['tell me about', 'about', 'who is'],request):

        boogeywoman.tellAbout(request)

    elif isExist(['who are you','what is your name'],request):

        boogeywoman.introduceBoogeywoman()

    elif isExist(['current temperature','temperature','weather'],request):

        boogeywoman.crrTemp(request)
        boogeywoman.waitForcOmmand()

    elif isExist(['tell me a joke','joke','jokes','say a joke'],request):

        boogeywoman.tellJoke()

    elif isExist(['hi', 'hey', "what's app", "what's up", 'whassup', 'hai', 'hay','hello'],request):
        name = boogeywoman.askName()
        boogeywoman.talk("hey there , " + name)

    elif isExist(['f*** you','f***'],request):
        boogeywoman.talk('fuck you too')

    elif isExist(['say','tell'],request):
        boogeywoman.sayIam(request)

    else:

        boogeywoman.talk("sorry i did not understand your command , but i can search it for you")
        boogeywoman.search(request)

    #time.sleep(1.5)
    #boogeywoman.waitForcOmmand()

