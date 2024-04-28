/**
* @file MapCreator.h
* @author Ricardo Raji Chahine 40234410
* @brief This class is called from the main menu and allows the user to create a map by placing objects on a grid and then either save or clear that map.
* @brief The user can place walls, doors, levers, chests, characterList, and npcs on the map.
* @brief The maps are saved as .json files in the Saved Maps directory.
*/

#ifndef MAPLOADER_H
#define MAPLOADER_H

#include "CONFIG.h"
#include "GameLooptyLoop.h"
#include "MapObserver.h"
#include "Player.h"
#include "State.h"
#include "Movable.h"
#include "TreasureChest.h"
#include "GameLooptyLoop.h"
#include "NonPlayerCharacter.h"
#include "../../Maps/include/Lever.h"
#include "GameScreen.h"
#include "MainMenu.h"
#include <cmath>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class MapLoader : public State {
public:


    MapLoader(MainDataRef& data);

   /**
    * @brief Initializes the map creator by asking the user for the map size&name then, load all the Textures.
    */
   void Init() override;

   void HandleInput() override;

   void Update(float deltaTime) override;

   /**
     * @brief Clear the window and then Draw all the components.
     * @param deltaTime
     */
   void Draw(float deltaTime) override;




   void loadMapFromFile(const std::string& filename);

   vector<std::string> listSavedMaps();
   int getUserSelection(const std::vector<std::string>& files);

   void DisplayCreationMessage(const std::string& message)    ;

   struct SidebarItem :public Movable{
       sf::Sprite sprite;
       std::string name;
       int permittedCount;
       sf::Text countText;
       sf::RectangleShape countBackground;
   };

private:

   MainDataRef _data; /**< The main data reference. */

   shared_ptr<Map> _currentMap; /**< The current map. */
   RenderTexture _mapTexture; /**< The texture for rendering the map. */
   RenderTexture _characterView; /**< The texture for rendering the character view. */
   Sprite _bg; /**< The background sprite. */
   Vector2<unsigned int> _windowSize; /**< The window size. */

   struct Buttons {
       RectangleShape menu; /**< The menu button. */
   };

   shared_ptr<Buttons> buttons = make_shared<Buttons>(); /**< The buttons on the game screen. */


};
#endif MAPLOADER_H
