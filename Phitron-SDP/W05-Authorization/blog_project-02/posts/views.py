from django.shortcuts import render, redirect
from posts import forms, models
from django.contrib.auth.decorators import login_required

from django.views.generic import CreateView, UpdateView, DeleteView, DetailView
from django.urls import reverse_lazy
from django.utils.decorators import method_decorator

# function view
""" 
@login_required
def add_post(req):
    if req.method == "POST":
        post_form = forms.PostForm(req.POST)
        if post_form.is_valid():
            # post_form.cleaned_data['author'] = req.user
            post_form.instance.author = req.user
            post_form.save()
            return redirect('profile')
    post_form = forms.PostForm()
    return render(req, 'form.html', {'form': post_form, 'type':'Add Post'})

 """

# class based view
@method_decorator(login_required, name='dispatch')
class AddPost(CreateView):
    model = models.Posts
    form_class = forms.PostForm
    template_name = 'form.html'
    success_url = reverse_lazy('profile') # redirect
    def form_valid(self, form):
        form.instance.author = self.request.user # is valid form
        return super().form_valid(form)



# function view
""" 

@login_required
def edit_post(req, id):
    post = models.Posts.objects.get(pk=id)
    post_form = forms.PostForm(instance=post)
    # print(post)
    if req.method == "POST":
        post_form = forms.PostForm(req.POST, instance=post)
        if post_form.is_valid():
            post_form.save()
            return redirect('profile')
    return render(req, 'form.html', {'form': post_form, 'type':'Edit Post'})

 """

# class based view
@method_decorator(login_required, name='dispatch')
class EditPost(UpdateView):
    model = models.Posts
    form_class = forms.PostForm
    template_name = 'form.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')



# function view
""" 
@login_required
def delete_post(req, id):
    post = models.Posts.objects.get(pk=id)
    post.delete()
    return redirect('profile')
 """

# class based view
@method_decorator(login_required, name='dispatch')
class DeletePost(DeleteView):
    model = models.Posts
    template_name = 'posts/delete.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')


class PostDetail(DetailView):
    model = models.Posts
    pk_url_kwarg = 'id'
    template_name = 'posts/post_detail.html'
    
    def post(self, req, *args, **kwargs):
        comment_form = forms.CommentForm(data=self.request.POST)
        post = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.post = post
            new_comment.save()
        return self.get(req, *args, **kwargs)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object 
        comments = post.comment.all()
        comment_form = forms.CommentForm()

        context['comments'] = comments
        context['comment_form'] = comment_form
        return context