import React from 'react';
import { BrowserRouter as Router, Route, Routes} from 'react-router-dom';
import Register from './Register';
import Login from './Login';

export default function App()
{
  return (
    <Router>
      <div className='App'>
        <Routes>
          <Route path="/register" element={<Register />} />
          <Route path="/login" element={<Login />} />
        </Routes>
      </div>
    </Router>
  );
}