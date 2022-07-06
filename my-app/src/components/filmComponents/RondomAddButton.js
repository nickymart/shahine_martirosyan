import React from "react";
import { films } from "../../containers/FilmsPage";
import { useContext } from "react";
import { contextFilms } from "../../context";

export function RondomAddButton() {
    const { newFilms, setnewFilms } = useContext(contextFilms)
    return (
        <button onClick={() => {
            let rond = Math.ceil(Math.random() * (films.length - 1))
            setnewFilms(() => {
                let x = Object.assign({}, films[rond]);
                films.push(x);
                films[films.length-1].id = Date.now();
                let arr = films.map((el) => { return el });
                return (
                    arr
                )
            })
        }} >Random</button>
    )
}