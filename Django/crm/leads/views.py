from django.http import HttpResponse
from django.shortcuts import render, redirect
from .models import Lead, Agent
from .forms import LeadForm, LeadModelForm
from django.core.mail import send_mail
from django.views import generic
from django.contrib.auth.mixins import LoginRequiredMixin



class HomePage(LoginRequiredMixin, generic.ListView):
    template_name = "lead_list.html"
    queryset = Lead.objects.all()
    context_object_name = "leads"


def home_page(request):
    lead = Lead.objects.all()
    context = {
        "leads": lead
    }
    return render(request, "lead_list.html", context)


def lead_detail(request, pk):
    lead = Lead.objects.get(id=pk)
    context = {
        "lead": lead
    }
    return render(request, "leads/lead_detail.html", context)


def lead_create(request):
    # print(request.POST)
    if request.method == "POST":
        print('Recieving a POST request.')
        form = LeadForm(request.POST)
        if form.is_valid():
            print('form.cleaned_data')
            first_name = form.cleaned_data['first_name']
            last_name = form.cleaned_data['last_name']
            age = form.cleaned_data['age']
            agent = Agent.objects.first()
            Lead.objects.create(
                first_name=first_name,
                last_name=last_name,
                age=age,
                agent=agent,
            )
        print('The Lead has been created Successfully!')
        return redirect("/leads")

    context = {
        "form": LeadForm()
    }
    return render(request, "leads/lead_create.html", context)


def leadCreate(request):
    if request.method == "POST":
        print('Recieving a POST request.')
        form = LeadModelForm(request.POST)
        if form.is_valid():
            form.save()
            send_mail(
                subject="A lead has been created.",
                message="Go to the site to see the new lead.",
                from_email="test@test.com",
                recipient_list=["ashutosh.kumar1@celebaltech.com"]
            )
            return redirect("/leads")

    context = {
        "form": LeadModelForm()
    }
    return render(request, "leads/lead-create.html", context)


def lead_update(request, pk):
    lead = Lead.objects.get(id=pk)
    if request.method == "POST":
        form = LeadForm(request.POST)
        if form.is_valid():
            first_name = form.cleaned_data['first_name']
            last_name = form.cleaned_data['last_name']
            age = form.cleaned_data['age']
            agent = Agent.objects.first()
            lead.first_name = first_name
            lead.last_name = last_name
            lead.age = age
            lead.save()
        print('The Lead has been updated Successfully!')
        return redirect("/leads")

    context = {
        "form": LeadForm(),
        "lead": lead
    }
    return render(request, "leads/lead_update.html", context)


def leadUpdate(request, pk):
    lead = Lead.objects.get(id=pk)
    form = LeadModelForm(instance=lead)
    if request.method == "POST":
        form = LeadModelForm(request.POST, instance=lead)
        if form.is_valid():
            form.save()
            return redirect("/leads")

    context = {
        "form": LeadModelForm(),
        "lead": lead
    }
    return render(request, "leads/lead-update.html", context)


def lead_delete(request, pk):
    lead = Lead.objects.get(id=pk)
    lead.delete()
    return redirect('/leads')
    