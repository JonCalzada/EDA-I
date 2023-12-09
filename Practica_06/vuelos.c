
typedef struct vuelo {
  char aerolinea[30];  // Nombre de la aerolinea
  char num_vuelo[10];  // C�digos OACI de aerol�neas
                       // Ej: AM 2230
  char destino[30];    // MONTERREY
  char hora_salida[6]; // 08:30
  char sala [4];
  char obs[20];        // On time | General Boarding |Final call
  char terminal[4];
}  vuelo_t;