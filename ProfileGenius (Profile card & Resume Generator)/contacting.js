const express = require('express');
const nodemailer = require('nodemailer');
const contact = express();
const port = 5050; // Change this to your desired port

// Serve the contact form HTML
contact.get('/', (req, res) => {
    res.sendFile(__dirname + '/contact.html');
});

// Handle the form submission
contact.post('/sendEmail', express.urlencoded({ extended: false }), (req, res) => {
    const { Name, contactNo, Comment } = req.body;

    // Create a transporter for sending emails (you may need to adjust the settings here)
    const transporter = nodemailer.createTransport({
        service: 'Gmail', // Change this to your email service provider
        auth: {
            user: 'parvindarsingh43958@gmail.com', // Your email address
            pass: 'boardpaper2021', // Your email password
        },
    });

    // Email message options
    const mailOptions = {
        from: contactNo,
        to: '2pyvd4@gmail.com', // Your email address where you want to receive messages
        subject: `Message from ${Name}`,
        text: Comment,
    };

    // Send the email
    transporter.sendMail(mailOptions, (error, info) => {
        if (error) {
            console.log(error);
            res.send('Error sending email. Please try again.');
        } else {
            console.log('Email sent: ' + info.response);
            res.send('Message sent successfully.');
        }
    });
});

// Start the server
contact.listen(port, () => {
    console.log(`Server is running on http://localhost:${port}`);
});
