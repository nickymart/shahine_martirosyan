import React, { useState, useRef } from "react";
import { FilmContainer } from "../components/filmComponents/FilmContainer"
import { startFilmArray } from "../components/filmComponents/startFilmArray";
import { Search } from "../components/filmComponents/Search";
import { contextFilms } from "../context";
import { AddFilm } from "../components/filmComponents/AddFilm";
import mcss from '../styles/AddFilm.module.css';
import { RondomAddButton } from "../components/filmComponents/RondomAddButton";
export const films = startFilmArray;

function FilmsPage() {
    let [newFilms, setnewFilms] = useState(films);
    let filmCount = newFilms.length;

    return (
        <contextFilms.Provider value={{ newFilms, setnewFilms }}>
            <div className={mcss.App}>
                <Search className={mcss.Search} />
                <div className={mcss.Functions}>
                    <h3 className={mcss.filmCount}>Count: {filmCount}</h3>
                    <AddFilm />
                    <RondomAddButton className={mcss.Button} />
                </div>
                <FilmContainer className={mcss.FilmContainer} arr={newFilms} />
            </div>
        </contextFilms.Provider>
    );
}
export default FilmsPage;