import React, { useState } from "react";
import SignIn from "./SignIn";
import SignUp from "./SignUp";

function App()
{
  const [accessToken, setAccessToken] = useState('');

  function handleclick() {
    
  }

  return (
    <div className="App">
      <SignIn setAccessToken={setAccessToken} />
      <SignUp />

      {accessToken && <h3>Sign in successfully</h3>}
    </div>
  )
}

export default App;
