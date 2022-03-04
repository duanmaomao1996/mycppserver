#pragma once
#include "Macros.h"

#include <functional>

class Poller;
class Channel;
class EventLoop {
 public:
  EventLoop();
  ~EventLoop();

  DISALLOW_COPY_AND_MOVE(EventLoop);

  void Loop();
  void UpdateChannel(Channel *ch);
  void DeleteChannel(Channel *ch);

 private:
  Poller *poller_{nullptr};
  bool quit_{false};
};
