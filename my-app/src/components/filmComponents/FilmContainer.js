import { Film } from "./Film";
import mcss from "../../styles/FilmContainer.module.css"
function FilmContainer(props) {
    let arr = props.arr;
    return (
        <div className={mcss.FilmContainer}>{
            arr.map((elem, i) => {
                return <Film key={elem.id} film={elem} />
            })
        }
        </div>
    )
}
export {
    FilmContainer,
}