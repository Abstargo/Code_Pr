import React, {useState} from "react";
import axios from 'axios';

export default function SignUp()
{

    const [username, setUsername] = useState('');
    const [email, setEmail] = useState('');
    const [password, setPassword] = useState('');
    
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
    
    
    
    return (
      <>  
      <h2>Sign Up</h2>
      <input placeholder="Username" value={username} onChange={e => setUsername(e.target.value)} />
      <input placeholder="Email" value={email} onChange={e => setEmail(e.target.value)} />
      <input type="password" placeholder="password" value={password} onChange={e => setPassword(e.target.value)} />
      <button onClick={handleSignUp}>Sign Up</button>
      </>
    )
}