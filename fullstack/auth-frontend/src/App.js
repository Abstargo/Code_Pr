import React from 'react';
import { BrowserRouter as Router, Route, Routes, Navigate} from 'react-router-dom';
import Register from './Register';
import Login from './Login';

const App = () => 
{
  return (
    <Router>
      <div className="App">
        <Routes>
          <Route path="/" element={<Navigate to="/register" />}/>
          <Route path="/register" element={<Register />} />
          <Route path="/login" element={<Login />} />
        </Routes>
      </div>
    </Router>
  );
}

export default App;
