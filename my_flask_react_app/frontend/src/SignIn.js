import React, {useState} from "react";
import axios from 'axios';

export default function SignIn({setAccessToken})
{

    const [email, setEmail] = useState('');
    const [password, setPassword] = useState('');

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
        <>
            <h2>Sign In</h2>
            <input placeholder="Email" value={email} onChange={e => setEmail(e.target.value)} />
            <input type="password" placeholder="Password" value={password} onChange={e => setPassword(e.target.value)} />
            <button onClick={handleSignIn}>Sign In</button>
        </>
      )
}