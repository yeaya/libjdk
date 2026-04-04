#include <sun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI$1.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $XTextAreaPeer$XAWTScrollPaneUI = ::sun::awt::X11::XTextAreaPeer$XAWTScrollPaneUI;

namespace sun {
	namespace awt {
		namespace X11 {

void XTextAreaPeer$XAWTScrollPaneUI$1::init$($XTextAreaPeer$XAWTScrollPaneUI* this$1) {
	$set(this, this$1, this$1);
}

void XTextAreaPeer$XAWTScrollPaneUI$1::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ($nc(propertyName)->equals("componentOrientation"_s)) {
		$var($JScrollPane, pane, $cast($JScrollPane, e->getSource()));
		$var($JScrollBar, vsb, $nc(pane)->getVerticalScrollBar());
		if (vsb != nullptr) {
			if (this->this$1->isLeftToRight(pane)) {
				$var($Border, var$0, $new($EmptyBorder, 0, 4, 0, -4));
				$set(this->this$1, vsbBorder, $new($CompoundBorder, var$0, $(vsb->getBorder())));
			} else {
				$var($Border, var$1, $new($EmptyBorder, 0, -4, 0, 4));
				$set(this->this$1, vsbBorder, $new($CompoundBorder, var$1, $(vsb->getBorder())));
			}
			vsb->setBorder(this->this$1->vsbBorder);
		}
	}
}

XTextAreaPeer$XAWTScrollPaneUI$1::XTextAreaPeer$XAWTScrollPaneUI$1() {
}

$Class* XTextAreaPeer$XAWTScrollPaneUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$XAWTScrollPaneUI$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XTextAreaPeer$XAWTScrollPaneUI;)V", nullptr, 0, $method(XTextAreaPeer$XAWTScrollPaneUI$1, init$, void, $XTextAreaPeer$XAWTScrollPaneUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(XTextAreaPeer$XAWTScrollPaneUI$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI",
		"createPropertyChangeHandler",
		"()Ljava/beans/PropertyChangeListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI", "sun.awt.X11.XTextAreaPeer", "XAWTScrollPaneUI", $FINAL},
		{"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XTextAreaPeer"
	};
	$loadClass(XTextAreaPeer$XAWTScrollPaneUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XTextAreaPeer$XAWTScrollPaneUI$1);
	});
	return class$;
}

$Class* XTextAreaPeer$XAWTScrollPaneUI$1::class$ = nullptr;

		} // X11
	} // awt
} // sun