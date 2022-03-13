#! /usr/bin/env node
const fs = require('fs');

let thisDir = fs.readdirSync('./')
    .filter(e => e.endsWith("cpp") || e.endsWith("docx"));

for(let file of thisDir) {
    if(file.endsWith("cpp") && !thisDir.includes(file.replace("cpp", "docx"))) fs.writeFileSync(file.replace("cpp", "docx"), "");
}
    