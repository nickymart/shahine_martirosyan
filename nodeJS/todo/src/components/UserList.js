import User from "./User";
const UserList = ({ users, onDelete }) => {
    return (
        <div>
            <header>
                <h1 className="header">users</h1>
            </header>
            {
                users.map((user) => {
                    return (
                        <User
                            key={user.id}
                            user={user}
                            onDelete={onDelete}
                        />
                    )
                })
            }
        </div>
    )
}

export default UserList;