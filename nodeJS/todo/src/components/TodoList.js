import TodoItem from "./TodoItem";

const TodoList = ({ todos, onDelete }) => {
    {console.log(todos)}
    return (
        <div>
            {
                todos.map((todo) => {
                    return (
                        <TodoItem
                            key={todo.id}
                            todo={todo}
                            // onChange={onChange}
                            onDelete={onDelete}
                        />
                    )
                })
            }
        </div>
    )
}

export default TodoList;