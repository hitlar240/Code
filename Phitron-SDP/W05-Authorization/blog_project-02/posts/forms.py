from django import forms
from posts.models import Posts, CommentModel

class PostForm(forms.ModelForm):
    class Meta:
        model = Posts
        # fields = '__all__'
        exclude = ['author']

class CommentForm(forms.ModelForm):
    class Meta:
        model = CommentModel
        fields = ['name', 'email', 'body']