#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

#undef SIMPLE_SCROLL_MODE

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JViewport = ::javax::swing::JViewport;
using $UIManager = ::javax::swing::UIManager;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicTabbedPaneUI$ScrollableTabViewport::toString() {
	 return this->$JViewport::toString();
}

int32_t BasicTabbedPaneUI$ScrollableTabViewport::hashCode() {
	 return this->$JViewport::hashCode();
}

bool BasicTabbedPaneUI$ScrollableTabViewport::equals(Object$* arg0) {
	 return this->$JViewport::equals(arg0);
}

$Object* BasicTabbedPaneUI$ScrollableTabViewport::clone() {
	 return this->$JViewport::clone();
}

void BasicTabbedPaneUI$ScrollableTabViewport::finalize() {
	this->$JViewport::finalize();
}

void BasicTabbedPaneUI$ScrollableTabViewport::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$JViewport::init$();
	setName("TabbedPane.scrollableViewport"_s);
	setScrollMode($JViewport::SIMPLE_SCROLL_MODE);
	setOpaque($nc(this$0->tabPane)->isOpaque());
	$var($Color, bgColor, $UIManager::getColor("TabbedPane.tabAreaBackground"_s));
	if (bgColor == nullptr) {
		$assign(bgColor, $nc(this$0->tabPane)->getBackground());
	}
	setBackground(bgColor);
}

BasicTabbedPaneUI$ScrollableTabViewport::BasicTabbedPaneUI$ScrollableTabViewport() {
}

$Class* BasicTabbedPaneUI$ScrollableTabViewport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$ScrollableTabViewport, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(BasicTabbedPaneUI$ScrollableTabViewport, init$, void, $BasicTabbedPaneUI*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabViewport", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabViewport", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabViewport",
		"javax.swing.JViewport",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTabbedPaneUI"
	};
	$loadClass(BasicTabbedPaneUI$ScrollableTabViewport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTabbedPaneUI$ScrollableTabViewport));
	});
	return class$;
}

$Class* BasicTabbedPaneUI$ScrollableTabViewport::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax