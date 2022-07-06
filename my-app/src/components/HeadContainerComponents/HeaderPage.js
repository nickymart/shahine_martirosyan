import React from "react";
import { Link, Outlet } from "react-router-dom";
import mcss from "../../styles/HeaderPage.module.css"


export function HeaderPage() {
    return (
        <>
            <header className={mcss.header}>
                <Link className={mcss.link} to={"/"}><h2>Home</h2></Link>
                <Link className={mcss.link} to={"/films"}><h2>Films</h2></Link>
            </header>
            <Outlet />
        </>
    )
}