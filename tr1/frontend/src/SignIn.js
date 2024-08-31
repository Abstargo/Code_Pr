import React, { useState } from 'react';
import axios from 'axios';
import { useNavigate } from 'react-router-dom';

function SignIn() {
  const [username, setUsername] = useState('');
  const [password, setPassword] = useState('');
  const navigate = useNavigate();

  const handleSignIn = async () => {
    try {
      const response = await axios.post(`${process.env.REACT_APP_API_URL}/signin`, { username, password });
      if (response.status === 200) {
        navigate('/signup');
      }
    } catch (error) {
      console.error('Error signing in:', error.response ? error.response.data : error.message);
    }
  };

  return (
    <div>
      <h1>Sign In</h1>
      <input type="text" placeholder="Username" value={username} onChange={(e) => setUsername(e.target.value)} />
      <input type="password" placeholder="Password" value={password} onChange={(e) => setPassword(e.target.value)} />
      <button onClick={handleSignIn}>Sign In</button>
    </div>
  );
}

export default SignIn;
