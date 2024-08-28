import React from "react";
import { useNavigate } from "react-router-dom";

export default function Home()
{

    const navigate = useNavigate()

    const handleClick = () => {
        navigate('/signin');        
    }

    return (
        <div>
            <h1>Welcome to the Home Page</h1>
            <button onClick={handleClick}>Go to the SignIn page</button>
        </div>
    )
}

/**
 * <div>
      <h1>Welcome to the Home Page</h1>
      <Link to="/signup">Go to Sign Up Page</Link>
    </div>
 */