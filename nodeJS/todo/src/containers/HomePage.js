import React from "react";
import UserList from "../components/UserList";
import UserForm from "../components/UserForm";
import { contextUsers } from "../context";
import { useState, useReducer } from "react";
import userData from "../userData";



function reducer(state, action) {
    if (action.type === "add") {
        return [
            ...state,
            {
                id: Math.random(),
                name: action.payload.name,
            }
        ];
    } else if (action.type === "delete") {
        return state.filter((t) => t.id !== action.payload.id);
    }
    userData = state;
}

export function HomePage() {
    const [users, dispatch] = useReducer(reducer, userData)
    return (
        <contextUsers.Provider value={users}>
            <div>
                <UserForm onAdd={(text) => {
                    dispatch({
                        type: 'add',
                        payload: {
                            name: text
                        }
                    });
                }} />
                <UserList
                    users={users}
                    onDelete={(user) => {
                        dispatch({
                            type: "delete",
                            payload: {
                                id: user.id
                            }
                        });
                    }}
                />
            </div>
        </contextUsers.Provider>
    )
}