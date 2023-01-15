
#include "stdio.h"
#include "raylib.h"
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int menuOpcoes = 0;
int maxOpcoes = 3;
int cursorXbase = 177;
int cursorYbase = 239;
int cursorX = 177;
int cursorY = 239;
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Lolo Bizarre Adventures");

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
    Texture2D menuInicial = LoadTexture("LoloMenu.png");        // Texture loading
    Texture2D cursor = LoadTexture("loloCursorNOBG.png");
    //---------------------------------------------------------------------------------------
    //x = 177
    //y = 239
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawTexture(menuInicial, screenWidth/2 - menuInicial.width/2, screenHeight/2 - menuInicial.height/2, WHITE);
            DrawTexture(cursor, cursorX, cursorY, WHITE);
            DrawText(TextFormat("Cursor X: %d",cursorX), 10, 10,30, WHITE);
            DrawText(TextFormat("Cursor Y: %d",cursorY), 10, 60,30, WHITE);
            if(IsKeyReleased(KEY_W)){
                moveCursor(true);
            }
            if(IsKeyReleased(KEY_S)){
                moveCursor(false);
            }


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadTexture(menuInicial);       // Texture unloading
    UnloadTexture(cursor);       // Texture unloading

    CloseWindow();                // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

//recebe um boolean, se for true o cursor sobe, caso contrario
//o cursor desce
void moveCursor(bool num){
    if(num){
        if(menuOpcoes == 0){
            menuOpcoes = maxOpcoes;
        }
        else{
            menuOpcoes--;
        }
    }
    else{
        if(menuOpcoes == maxOpcoes){
            menuOpcoes = 0;
        }
        else{
            menuOpcoes++;
        }
    }
    cursorY = cursorYbase + 90*menuOpcoes;
  
}