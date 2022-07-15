import "../style/TodoItem.css";
import { Link, Routes, Route } from "react-router-dom";

const User = ({ user, onDelete }) => {
    return (
        <div className="ListItem">
            <label>
                {user.name}
            </label>
            <Link className="ViewButton" to={`/user/${user.id}`}>Go-To</Link>
            <button
                className="ListItemDelete"
                onClick={() => {
                    onDelete(user);
                }}>X</button>
        </div>
    )
}

export default User;