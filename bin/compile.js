#! /usr/bin/env node
require('child_process').exec(`g++ ${process.argv[2]} -o ${process.argv[2].replace(".cpp", "")}${process.platform === 'darwin' ? '.app' : ''}`, e => e ? console.error(e) : "");