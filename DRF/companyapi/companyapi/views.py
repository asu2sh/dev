from django.http import HttpResponse, JsonResponse

def home_page(request):
    print("Home page requested")
    friends = [
        'chang',
        'ben',
        'hry'
    ]
    # return HttpResponse("This is a home page")
    return JsonResponse(friends, safe=False)