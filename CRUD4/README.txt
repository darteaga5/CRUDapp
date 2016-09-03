Hello and welcome to our basic Box Office Tracking CRUD Application.
Our application is based off of Powell's CRUD4 application.We added
a DataTable plug in that inserts pagination, sorting and a search
functionality.

Some things I have to point out is that powell's provided code does not validate completely.
Here are the errors:
	Error: End tag div seen, but there were open elements.
	From line 61, column 19; to line 61, column 24
	          </div>↩     
	Error: Unclosed element form.
	From line 43, column 22; to line 43, column 53
	          <form id="addForm" class="form">↩     
	Error: Stray end tag form.
	From line 67, column 16; to line 67, column 22
	          </form>↩

But other than that the application works fine. We didn't implement the
poster submission since we ran out of time, but the rest of the functionality
works perfectly. The way CRUD4 populates the database is done by movie_id, so
our thought process was that we needed to make sure that it does not get
tampered with. We made a validation function that trims and strips the movie_id
of any special characters and then we check to see that if it's an actual 
number or else it's an error. The validation on the client-side, does not
allow for numbers to be used in the Movie Title or Studio form. It also
does not allow for letters to be used in the Year or Box Office form,
and it also placed a constraint on the year of the movie's production. 
   