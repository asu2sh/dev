import openai

def rias(stext):
    openai.api_key = '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'
    response = openai.Completion.create(
        engine = "davinci-instruct-beta",
        prompt = stext,
        max_tokens = 50,
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
    query = input("Prompt: ")
    if(query!='exit'):
        response = rias(query)
        print("-> ")
        print(response)
    else:
        break





