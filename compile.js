require('child_process').exec(`g++ ${process.argv[2]} -o ${process.argv[2].replace(".cpp", "")}${process.platform === 'darwin' ? '.app' : ''}`,
    (e) => {
        console.error(e);
    });