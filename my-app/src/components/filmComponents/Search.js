import React from "react";
import { useContext } from "react";
import { contextFilms } from "../../context";
import { films } from "../../containers/FilmsPage";

export function Search() {
    const { newFilms, setnewFilms } = useContext(contextFilms);
    return (
        <div>
            <input onChange={(e) => {
                setnewFilms(() => {
                    let newArray = films;
                    if (e.target.value == "") {
                        return films;
                    }
                    return newArray.filter(item => item.name.substring(0, e.target.value.length) === e.target.value);
                })
            }} type="text" placeholder="Search">
            </input>
        </div>
    )
}