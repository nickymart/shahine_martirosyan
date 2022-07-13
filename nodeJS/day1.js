import path from "path"
import fs from "fs"
import {createServer} from "http"

let filePath = path.resolve();
filePath = path.join(filePath, "package.json");

fs.promises.readFile(filePath, "utf8").then((data)=>{
    console.log(data);
});

const promise1 = new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve('data');
    }, 1000);
});

promise1.then((data)=>{
    console.log(data);
});

const server = createServer((req, res)=>{
    res.end("Hello world!");
});

server.listen(3001);
