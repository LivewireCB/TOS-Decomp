#ifndef HOME_BUTTON_FRAME_CONTROLLER_H
#define HOME_BUTTON_FRAME_CONTROLLER_H

#include <types.h>

namespace homebutton {
enum eState {
  eState_Stopped,
  eState_Playing,
};
enum {
  ANIM_TYPE_FORWARD = 0,
  ANIM_TYPE_BACKWARD,
  ANIM_TYPE_LOOP,
  ANIM_TYPE_ALTERNATE
};

enum {
  ANIM_STATE_STOP = 0,
  ANIM_STATE_PLAY,
  ANIM_STATE_STOP_REQ,
};

class FrameController {
public:
  FrameController() {}
  virtual ~FrameController() {}

  void init(int type, f32 maxFrame, f32 minFrame, f32 delta);
  void initFrame();

  virtual void calc();

  void setMaxFrame(f32 value) { mMaxFrame = value; }
  f32 getMaxFrame() const { return mMaxFrame; }

  f32 getLastFrame() const { return mMaxFrame - 1.0f; }

  void setMinFrame(f32 value) { mMinFrame = value; }
  f32 getMinFrame() const { return mMinFrame; }

  void setCurrentFrame(f32 value) { mCurFrame = value; }
  f32 getCurrentFrame() const { return mCurFrame; }

  void setDelta(f32 value) { mFrameDelta = value; }
  f32 getDelta() const { return mFrameDelta; }

  void setState(int value) { mState = value; }
  int getState() const { return mState; }

  void setAnimType(int value) { mAnmType = value; }
  int getAnimType() const { return mAnmType; }

  bool isPlaying() const { return mState == ANIM_STATE_PLAY; }

protected:         // GroupAnmController::doCalc
  /* vtable */     // size 0x04, offset 0x00
  f32 mMaxFrame;   // size 0x04, offset 0x04
  f32 mMinFrame;   // size 0x04, offset 0x08
  f32 mCurFrame;   // size 0x04, offset 0x0c
  f32 mFrameDelta; // size 0x04, offset 0x10
  int mState;      // size 0x04, offset 0x14
  int mAnmType;    // size 0x04, offset 0x18
  bool mAltFlag;   // size 0x01, offset 0x1c
  /* 3 bytes padding */
  // size 0x20
private:
  bool mbAlternateBack; // 0x1C
};
} // namespace homebutton

#endif // HOME_BUTTON_FRAME_CONTROLLER_H
