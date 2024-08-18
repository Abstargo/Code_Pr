import React from "react";
import axios from 'axios';

export default function Register()
{
    const [username, setUsername] = React.useState('');
    const [email, setEmail] = React.useState('');
    const [password, setPassword] = React.useState('');
    const [message, setMessage] = React.useState('');


    const handleRegister = async (e) => {
        e.preventDefault();
        try {
            const response = await axios.post('http://localhost:5000/register', {
                username,
                email,
                password
            });
            setMessage(response.data.msg);
        } catch (error) {
            setMessage('Error: ' + error.response.data.msg);
        }
    };

    return (
        <div>
            <h2>Register</h2>
            <form onSubmit={handleRegister}>
                <div>
                    <label>Username:</label>
                    <input 
                        type="text"
                        value={username}
                        onChange={(e) => setUsername(e.target.value)}
                        required 
                    />
                </div>
                <div>
                    <label>Email:</label>
                    <input 
                        type="email"
                        value={email}
                        onChange={(e) => setEmail(e.target.value)}
                        required 
                    />
                </div>
                <div>
                    <label>Password:</label>
                    <input 
                        type="password"
                        value={password}
                        onChange={(e) => setPassword(e.target.value)}
                        required 
                    />
                </div>
                <button type="submit">Register</button>
            </form>
            <p>{message}</p>
        </div>
    );
}