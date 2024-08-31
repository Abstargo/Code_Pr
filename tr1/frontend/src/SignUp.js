import React, { useState } from 'react';
import axios from 'axios';
import { useNavigate } from 'react-router-dom';

function SignUp() {
	const [username, setUsername] = useState('');
	const [password, setPassword] = useState('');
	const [error, setError] = useState(null);
	const navigate = useNavigate();

	const handleSignUp = async () => {
		try {
			const response = await axios.post(`${process.env.REACT_APP_API_URL}/signup`, { username, password });
			if (response.status === 201) {
				navigate('/signin');
			}
			alert('User created successfully');
		} catch (error) {
			console.error('Error signing up:', error);
			setError('Sign-up failed. Please try again.');
		}
	};

	return (
		<div>
		<h1>Sign Up</h1>
		{error && <p style={{ color: 'red' }}>{error}</p>}
		<input type="text" placeholder="Username" value={username} onChange={(e) => setUsername(e.target.value)} />
		<input type="password" placeholder="Password" value={password} onChange={(e) => setPassword(e.target.value)} />
		<button onClick={handleSignUp}>Sign Up</button>
		</div>
	);
}

export default SignUp;
