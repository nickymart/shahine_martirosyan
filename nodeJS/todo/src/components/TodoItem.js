import "../style/TodoItem.css";

const TodoItem = ({ todo, onChange, onDelete }) => {
    return (
        <div className="ListItem">
            <label>
                <input type="checkbox" checked={todo.isCompleted} onChange={(e) => {
                    onChange({
                        ...todo,
                        isCompleted: e.target.checked
                    });
                }} />
                {todo.text}

            </label>
            <button
                className="todoListItemDelete"
                onClick={() => {
                    onDelete(todo);
                }}>X</button>
        </div>
    )
}

export default TodoItem;