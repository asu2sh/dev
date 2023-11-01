from django.urls import path

from .views import HomePage, home_page, lead_detail, lead_create, leadCreate, lead_update, leadUpdate, lead_delete

app_name = "leads"

urlpatterns = [
    # path('', home_page, name='home_page'),
    path('', HomePage.as_view(), name='home_page'),
    path('<int:pk>/', lead_detail, name='lead_detail'),
    path('create/', lead_create, name='lead_create'),
    path('<int:pk>/update/', lead_update, name='lead_update'),
    path('lead-create/', leadCreate, name='lead-create'),
    path('<int:pk>/lead-update/', leadUpdate, name='lead-update'),
    path('<int:pk>/delete/', lead_delete, name='lead_delete'),
    
]