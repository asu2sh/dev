from django.test import TestCase
from django.shortcuts import reverse
from django.http import response

# Create your tests here.
class HomePageTest(TestCase):

    def test_status_code(self):
        response = self.client.get(reverse("leads:home_page"))
        # print(response.content)
        self.assertEqual(response.status_code, 200)

    def test_template_name(self):
        response = self.client.get(reverse("leads:home_page"))
        self.assertTemplateUsed(response, "lead_list.html")
