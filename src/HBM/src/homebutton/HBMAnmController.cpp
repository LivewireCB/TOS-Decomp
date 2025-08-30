#include "HBMAnmController.h"

/*******************************************************************************
 * headers
 */

#include <macros.h> // NW4HBM_RANGE_FOR

#include "lyt/lyt_animation.h"
#include "lyt/lyt_group.h"
#include "lyt/lyt_pane.h"

#include "ut/ut_LinkList.h" // IWYU pragma: keep (NW4HBM_RANGE_FOR)

/*******************************************************************************
 * functions
 */

namespace homebutton {

GroupAnmController::GroupAnmController() : mpGroup(), mpAnimGroup() {}

GroupAnmController::~GroupAnmController() {}

void GroupAnmController::do_calc() {
  bool flag;

  if (mState == eState_Playing) {
    calc();
    flag = true;

    mpAnimGroup->SetFrame(mCurFrame);
  } else {
    flag = false;
  }

  // nw4hbm::lyt::detail::PaneLink::LinkList &list = mpGroup->GetPaneList();

  // NW4HBM_RANGE_FOR(it, list)
  // it->mTarget->SetAnimationEnable(mpAnimGroup, flag, false);
}

} // namespace homebutton
