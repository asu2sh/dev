import openai

def rias(stext):
    openai.api_key = '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'
    response = openai.Completion.create(
        engine = "davinci-instruct-beta",
        prompt = stext,
        max_tokens = 64,
        temperature = 0,
        top_p = 1,
        frequency_penalty = 0,
        presence_penalty = 0,
        best_of = 1,
    )
    content = response.choices[0].text.split('.')
    return response.choices[0].text


query = input()
response = rias(query)
print(response)


#print("Hi asu2sh, I am your personal AI assistant Rias, Ask me anything.")
# while(True):
#     query = input("Q: ")
#     if(query!='exit'):
#         response = rias(query)
#         print("-> ")
#         print(response)
#     else:
#         break






