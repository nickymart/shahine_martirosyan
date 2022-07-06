import { useContext } from "react";
import mcss from "../../styles/Film.module.css";
import { contextFilms } from "../../context";
import { films } from "../../containers/FilmsPage";
import { Link, Routes, Route } from "react-router-dom";

export function Film(props) {
    let filmId = props.film.id;
    let filmName = props.film.name;
    let discription = props.film.discription;
    let img = props.film.img;

    const { newFilms, setnewFilms } = useContext(contextFilms)
    return (
        <div className={mcss.Film}>
            <div>
                <Link className={mcss.linkGoTo} to={`/films/${filmId}`}>Go-To</Link>
                <button className="buttonDelite" onClick={() => {
                    setnewFilms(() => {
                        films.forEach((el, index) => { if (el.id === filmId) { films.splice(index, 1) } });
                        let newArray = films.map((ev) => { return ev });
                        return newArray;
                    })
                }
                }>delete</button>
            </div>
            <h1>{filmName}</h1>
            <img src={img} />
            <p>{discription}</p>
        </div>
    )
}