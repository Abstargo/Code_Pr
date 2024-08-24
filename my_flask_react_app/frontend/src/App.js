import React, { useState } from "react";
import axios from 'axios'

function App()
{
  const [username, setUsername] = useState('');
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [accessToken, setAccessToken] = useState('');

  const handleSignUp = async () => {
    try {
      const response = await axios.post('http://localhost:5000/signup', {
        username, email, password
      });
      alert(response.data.msg);
    } catch (error) {
      alert(error.response.data.msg);
    }
  };

  const handleSignIn = async () => {
    try {
      const response = await axios.post('http://localhost:5000/signin', {
        email, password
      });
      setAccessToken(response.data.access_token);
    } catch (error) {
      alert(error.response.data.msg);
    }
  };

  return (
    <div className="App">
      <h2>Sign Up</h2>
      <input placeholder="Username" value={username} onChange={e => setUsername(e.target.value)} />
      <input placeholder="Email" value={email} onChange={e => setEmail(e.target.value)} />
      <input type="password" placeholder="password" value={password} onChange={e => setPassword(e.target.value)} />
      <button onClick={handleSignUp}>Sign Up</button>

      <h2>Sign In</h2>
      <input placeholder="Email" value={email} onChange={e => setEmail(e.target.value)} />
      <input type="password" placeholder="Password" value={password} onChange={e => setPassword(e.target.value)} />
      <button onClick={handleSignIn}>Sign In</button>

      {accessToken && <h3>Sign in successfully</h3>}
    </div>
  )
}

export default App;