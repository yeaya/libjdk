#include <javax/swing/plaf/SplitPaneUI.h>

#include <java/awt/Graphics.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _SplitPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SplitPaneUI, init$, void)},
	{"finishedPaintingChildren", "(Ljavax/swing/JSplitPane;Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SplitPaneUI, finishedPaintingChildren, void, $JSplitPane*, $Graphics*)},
	{"getDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SplitPaneUI, getDividerLocation, int32_t, $JSplitPane*)},
	{"getMaximumDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SplitPaneUI, getMaximumDividerLocation, int32_t, $JSplitPane*)},
	{"getMinimumDividerLocation", "(Ljavax/swing/JSplitPane;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SplitPaneUI, getMinimumDividerLocation, int32_t, $JSplitPane*)},
	{"resetToPreferredSizes", "(Ljavax/swing/JSplitPane;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SplitPaneUI, resetToPreferredSizes, void, $JSplitPane*)},
	{"setDividerLocation", "(Ljavax/swing/JSplitPane;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SplitPaneUI, setDividerLocation, void, $JSplitPane*, int32_t)},
	{}
};

$ClassInfo _SplitPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.SplitPaneUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_SplitPaneUI_MethodInfo_
};

$Object* allocate$SplitPaneUI($Class* clazz) {
	return $of($alloc(SplitPaneUI));
}

void SplitPaneUI::init$() {
	$ComponentUI::init$();
}

SplitPaneUI::SplitPaneUI() {
}

$Class* SplitPaneUI::load$($String* name, bool initialize) {
	$loadClass(SplitPaneUI, name, initialize, &_SplitPaneUI_ClassInfo_, allocate$SplitPaneUI);
	return class$;
}

$Class* SplitPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax