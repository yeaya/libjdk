#include <javax/swing/plaf/TabbedPaneUI.h>

#include <java/awt/Rectangle.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _TabbedPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(TabbedPaneUI, init$, void)},
	{"getTabBounds", "(Ljavax/swing/JTabbedPane;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabbedPaneUI, getTabBounds, $Rectangle*, $JTabbedPane*, int32_t)},
	{"getTabRunCount", "(Ljavax/swing/JTabbedPane;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabbedPaneUI, getTabRunCount, int32_t, $JTabbedPane*)},
	{"tabForCoordinate", "(Ljavax/swing/JTabbedPane;II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TabbedPaneUI, tabForCoordinate, int32_t, $JTabbedPane*, int32_t, int32_t)},
	{}
};

$ClassInfo _TabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.TabbedPaneUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_TabbedPaneUI_MethodInfo_
};

$Object* allocate$TabbedPaneUI($Class* clazz) {
	return $of($alloc(TabbedPaneUI));
}

void TabbedPaneUI::init$() {
	$ComponentUI::init$();
}

TabbedPaneUI::TabbedPaneUI() {
}

$Class* TabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(TabbedPaneUI, name, initialize, &_TabbedPaneUI_ClassInfo_, allocate$TabbedPaneUI);
	return class$;
}

$Class* TabbedPaneUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax