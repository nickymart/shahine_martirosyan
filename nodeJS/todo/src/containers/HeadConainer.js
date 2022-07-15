import React from "react";
import { Routes, Route , Outlet} from "react-router-dom";
import { HomePage } from "./HomePage";
import {UserPage} from "./UserPage"

export function HeadContainer() {
    return (
        <>
            <Routes>
                    <Route index element={<HomePage />} />
                    <Route path="user/:title" element={<UserPage />} />
                    <Route path="" element={<Outlet />}>
                    </Route>
            </Routes>
        </>
    )
}