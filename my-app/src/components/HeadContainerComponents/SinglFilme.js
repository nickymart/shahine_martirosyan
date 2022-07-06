import React from "react";
import { useParams } from "react-router-dom";
import mcss from './../../styles/AddFilm.module.css';
import { useState } from "react";
import { films } from "../../containers/FilmsPage";
import { Link } from "react-router-dom";


export function SinglFilme() {

    const { title } = useParams();

    let i;
    for (i = 0; i < films.length; i++){
        if(films[i].id == title){
            break;
        }
    }
    return (
         <div className={mcss.goto}>
            <h1>{films[i].name}</h1>
            <img src={films[i].img} />
            <p>{films[i].discription}</p>
        </div>
    )
}