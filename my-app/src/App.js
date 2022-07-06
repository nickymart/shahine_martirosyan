import React from "react";
import { HeadContainer } from "./containers/HeadConainer";
import { BrowserRouter } from "react-router-dom";
import mcss from "./styles/App.module.css"

function App() {
    return (
        <BrowserRouter>
            <HeadContainer />
        </BrowserRouter>
    )
}

export default App;