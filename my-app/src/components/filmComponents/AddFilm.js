import React from "react";
import { useContext, useRef, useState } from "react";
import { contextFilms } from "../../context";
import { films } from "../../containers/FilmsPage";
import mcss from '../../styles/AddFilm.module.css';
import Img777 from "../../images/filmImPoster/film777.jpg"

export function AddFilm() {
    const { newFilms, setnewFilms } = useContext(contextFilms);
    const input = useRef();
    const input1 = useRef();
    let [addListActiv, setAddListActiv] = useState(false)

    return (
        <div>
            <button className={mcss.Add} onClick={() => { setAddListActiv(true) }}>Add</button>
            <div className={addListActiv ? mcss.AddListActive : mcss.AddListNoActive}>
                <button className={mcss.AddListButton} onClick={() => { setAddListActiv(false) }} >X</button>
                <h2 style={{ color: "white" }}>add film</h2>
                <input placeholder="yor film name" ref={input} type="text" className={mcss.AddListImput1} />
                <input placeholder="yor film decription" ref={input1} type="text" className={mcss.AddListImput2} />
                <button className={mcss.AddListButton1} onClick={() => {
                    setnewFilms(() => {
                        films.push({
                            id: Date.now(),
                            name: input.current.value,
                            img: Img777,
                            discription: input1.current.value
                        })
                        let arr = films.map((el) => { return el });
                        return (arr)
                    })
                    setAddListActiv(false)
                }
                }>Add</button>
            </div>

        </div>


    )
}