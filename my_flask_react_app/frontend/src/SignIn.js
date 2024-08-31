import React, {useState} from "react";
import axios from 'axios';
import { useNavigate } from "react-router-dom";

export default function SignIn()
{

    const [email, setEmail] = useState('');
    const [password, setPassword] = useState('');
    const [accessToken, setAccessToken] = useState('');

    const navigate = useNavigate()
    const handleClick= () =>
    {
      navigate("/signin/signup")
    }

    const handleSignIn = async () => 
      {
        try {
          const response = await axios.post('http://localhost:5000/signin', {
            email, password
          });
          setAccessToken(response.data.access_token);
        } catch (error) {
          alert(error.response?.data?.msg || "Sign-in failed");
        }
    };

      return (
        <>
            <h2>Sign In</h2>
            <input placeholder="Email" value={email} onChange={e => setEmail(e.target.value)} />
            <input type="password" placeholder="Password" value={password} onChange={e => setPassword(e.target.value)} />
            <button onClick={handleSignIn}>Sign In</button>
            <button style={{ marginRight: '10px'}} onClick={handleClick}>Create an Accout?</button>
            {accessToken && <h3>Sign in successfully</h3>}
        </>

      )
}
