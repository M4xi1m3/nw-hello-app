#include "hello_view.h"
#include <assert.h>

namespace Hello {

HelloView::HelloView() :
  View()
{
}

void HelloView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(bounds(), KDColorWhite);
  
  ctx->drawString("Hello world!", KDPointZero);
}

}
