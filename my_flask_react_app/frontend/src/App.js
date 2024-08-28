import React from "react";
import Home from "./Home";
import SignIn from "./SignIn";
import SignUp from "./SignUp";
import {BrowserRouter as Router, Route, Routes} from 'react-router-dom';

function App()
{

  return (
    <div className="App">
        <Router>
          <Routes>
            <Route exact path="/" Component={Home} />
            <Route path="/signin" Component={SignIn} />
            <Route path="/signin/signup" Component={SignUp} />
          </Routes>
        </Router> 
    </div>
  )
}

export default App;

/* <SignIn />
      <SignUp /> */