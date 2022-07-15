import React from "react";
import { BrowserRouter } from "react-router-dom";
import { HeadContainer } from "./containers/HeadConainer";
import "./style/App.css";


const App = () => {
    return (
        <div className="App">
            <BrowserRouter>
                <HeadContainer />
            </BrowserRouter>
        </div>
    );
}

export default App;
