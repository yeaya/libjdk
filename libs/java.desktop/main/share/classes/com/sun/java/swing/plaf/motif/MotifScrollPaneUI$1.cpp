#include <com/sun/java/swing/plaf/motif/MotifScrollPaneUI$1.h>
#include <com/sun/java/swing/plaf/motif/MotifScrollPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <jcpp.h>

using $MotifScrollPaneUI = ::com::sun::java::swing::plaf::motif::MotifScrollPaneUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifScrollPaneUI$1::init$($MotifScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifScrollPaneUI$1::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ($nc(propertyName)->equals("componentOrientation"_s)) {
		$var($JScrollPane, pane, $cast($JScrollPane, e->getSource()));
		$var($JScrollBar, vsb, $nc(pane)->getVerticalScrollBar());
		if (vsb != nullptr && this->this$0->vsbBorder != nullptr && $equals(vsb->getBorder(), this->this$0->vsbBorder)) {
			if ($$nc(pane->getComponentOrientation())->isLeftToRight()) {
				$set(this->this$0, vsbBorder, $new($CompoundBorder, $MotifScrollPaneUI::vsbMarginBorderR, $($nc(this->this$0->vsbBorder)->getInsideBorder())));
			} else {
				$set(this->this$0, vsbBorder, $new($CompoundBorder, $MotifScrollPaneUI::vsbMarginBorderL, $($nc(this->this$0->vsbBorder)->getInsideBorder())));
			}
			vsb->setBorder(this->this$0->vsbBorder);
		}
	}
}

MotifScrollPaneUI$1::MotifScrollPaneUI$1() {
}

$Class* MotifScrollPaneUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifScrollPaneUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifScrollPaneUI;)V", nullptr, 0, $method(MotifScrollPaneUI$1, init$, void, $MotifScrollPaneUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifScrollPaneUI$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifScrollPaneUI",
		"createPropertyChangeHandler",
		"()Ljava/beans/PropertyChangeListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifScrollPaneUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifScrollPaneUI$1",
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
		"com.sun.java.swing.plaf.motif.MotifScrollPaneUI"
	};
	$loadClass(MotifScrollPaneUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifScrollPaneUI$1);
	});
	return class$;
}

$Class* MotifScrollPaneUI$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com