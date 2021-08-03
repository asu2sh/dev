import openai

def rias(stext):
    openai.api_key = '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'
    response = openai.Completion.create(
        engine = "davinci-instruct-beta",
        prompt = stext,
        max_tokens = 100,
        temperature = 0.7,
        top_p = 1,
        frequency_penalty = 0.0,
        presence_penalty = 0.0,
        best_of = 1,
    )
    content = response.choices[0].text.split('.')
    return response.choices[0].text

print("Hi asu2sh, I am your personal AI assistant Rias, Ask me anything.")

while(True):
    query = input("Q: ")
    if(query!='exit'):
        response = rias(query)
        print("-> ")
        print(response)
    else:
        break





