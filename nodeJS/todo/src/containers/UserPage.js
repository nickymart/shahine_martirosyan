import React from "react";
import TodoList from "../components/TodoList"
import TodoForm from "../components/TodoForm"
import { useParams } from "react-router-dom";
import { useReducer } from "react";
import { contextUsers } from "../context";
import userData from "../userData";

function reducer(state, action) {
    if (action.type === "add") {
        return [
            ...state,
            {
                id: Math.random(),
                text: action.payload.text,
                isCompleted: false
            }
        ];
    } else if (action.type === "delete") {
        return state.filter((t) => t.id !== action.payload.id);
    } else if (action.type === "clear-completed") {
        return state.filter((todo) => !todo.isCompleted);
    } else if (action.type === "update") {
        return state.map((todo) => {
            if (todo.id === action.payload.updatedTodo.id) {
                return action.payload.updatedTodo;
            }
            return todo;
        });
    }
}


export function UserPage(props) {
    const { title } = useParams();

    let i;
    for (i = 0; i < userData.length; i++) {
        if (userData[i].id == title) {
            break;
        }
    }
    const [todo, dispatch] = useReducer(reducer, userData[i].todos)
    return (
        <div>
            {i}
            <TodoForm onAdd={(text) => {
                    dispatch({
                        type: 'add',
                        payload: {
                            text: text,
                            isCompleted:false
                        }
                    });
                }} />
            <TodoList
                    todo={todo}
                    onDelete={(user) => {
                        dispatch({
                            type: "delete",
                            payload: {
                                id: todo.id
                            }
                        });
                    }}
                />
        </div>
    )
}