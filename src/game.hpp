class Game {
 public:
  Game();
  ~Game();

  void init();
  void update();
  void render();
  void handle_input();
  void save();
  void load();

 private:
  Map* map_;
  Player* player_;
  std::vector<Enemy*> enemies_;
};
