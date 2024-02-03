// peticion usando axios
const axios = require("axios");
const { createDiffieHellmanGroup } = require("crypto");
// para trabajar de forma asincrona  
const fs = require("fs").promises;  

const path = require("path");

const main = async () => {
  let response = await axios.get('https://rickandmortyapi.com/api/character'); 
  let { data:{results},
  } = response;
  let characters = results.map((character) => {
    return {
      id: character.id,
      name: character.name, 
      status: character.status,
      species: character.species,
    };
  }) /*
      una forma de hacerlo en un string 
      .map((personaje) => Object.values(personaje).join(","))
      console.log(characters);
      
      segunda de devolver values y keys
      ;
      console.log(characters);
      */ 
  .map((personaje) => Object.values(personaje).join(","))
  .join("\n");
  
  // console.log(path.join(__dirname, 'data.csv'));
  await fs.writeFile(path.join(__dirname, 'data.csv'), characters);
  // console.log(characters);
  
};

main();
