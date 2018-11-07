const fs =  require('fs');
const spawn = require('child_process').spawn;
const args = process.argv.slice(2);

const INDEX_ZERO = 0;
const FILE_EXT_LENGTH = 4;
const BUILD_DIR = './build/';

if(args[INDEX_ZERO] === undefined || args[INDEX_ZERO] === ""){
    console.error("Error: No filename passed, exiting...");
    return;
}  

//check if build directory exists

try{
    fs.statSync(BUILD_DIR);
}catch(e){
    console.log(`${BUILD_DIR} was not found. Creating build directory in current folder`);
    fs.mkdirSync(BUILD_DIR);
}

const file_name = './' + args[INDEX_ZERO];
let end = args[INDEX_ZERO].length - FILE_EXT_LENGTH;
let output_file = args[INDEX_ZERO].substring(INDEX_ZERO,end);
let build_path = BUILD_DIR + output_file;
const compile_args = ['-o', build_path, args[INDEX_ZERO]];
console.log(`Watching for file changes on ${args[INDEX_ZERO]}`);

let fswait = false;

fs.watch(file_name, (event, filename)=>{
    if(filename){
        if(fswait) return;
        fswait = setTimeout(()=>{
            fswait = false;
        }, 100);
        console.log(`${file_name} file was changed`);
        const compile_file = spawn('g++', compile_args);  
        console.log(`${output_file} output file successfully generated`);  
    }
});