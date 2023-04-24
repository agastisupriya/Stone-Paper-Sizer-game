// Code to display current year in the footer
let year = new Date().getFullYear();
let footer = document.querySelector('footer');
footer.innerHTML = `<p>&copy; ${year} Startup Business</p>`;

// Code to add active class to the current page in the navigation
let currentLocation = location.href;
let navLinks = document.querySelectorAll('nav ul li a');
for (let i = 0; i < navLinks.length; i++) {
	if (navLinks[i].href === currentLocation) {
		navLinks[i].classList.add('active');
	}
}
// Code to handle form submission
let form = document.querySelector('form');
form.addEventListener('submit', function(event) {
	event.preventDefault();
	let name = document.getElementById('name').value;
	let email = document.getElementById('email').value;
	let message = document.getElementById('message').value;
	console.log(`Name: ${name}\nEmail: ${email}\nMessage: ${message}`);
	alert('Thank you for your message!');
	form.reset();
});
