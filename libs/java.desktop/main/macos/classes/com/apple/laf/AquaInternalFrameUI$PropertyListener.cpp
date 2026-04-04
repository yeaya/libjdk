#include <com/apple/laf/AquaInternalFrameUI$PropertyListener.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/Border.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef FALSE
#undef IS_SELECTED_PROPERTY
#undef TRUE
#undef WINDOW_DOCUMENT_MODIFIED

using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $Component = ::java::awt::Component;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFrameUI$PropertyListener::init$($AquaInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaInternalFrameUI$PropertyListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, name, $nc(e)->getPropertyName());
	if ("JInternalFrame.frameType"_s->equals(name)) {
		if ($instanceOf($String, $(e->getNewValue()))) {
			this->this$0->setFrameType($$cast($String, e->getNewValue()));
		}
	} else if ("JInternalFrame.isPalette"_s->equals(name)) {
		if (e->getNewValue() != nullptr) {
			this->this$0->setPalette($$sure($Boolean, e->getNewValue())->booleanValue());
		} else {
			this->this$0->setPalette(false);
		}
	} else {
		bool var$0 = "windowModified"_s->equals(name);
		$init($CPlatformWindow);
		if (var$0 || $nc($CPlatformWindow::WINDOW_DOCUMENT_MODIFIED)->equals(name)) {
			this->this$0->setDocumentEdited($$sure($Boolean, e->getNewValue())->booleanValue());
			int32_t var$1 = $$nc($AquaInternalFrameUI::access$4200(this->this$0))->getWidth();
			$$nc($AquaInternalFrameUI::access$4500(this->this$0))->repaint(0, 0, var$1, $nc($($$nc($$nc($AquaInternalFrameUI::access$4400(this->this$0))->getBorder())->getBorderInsets($($AquaInternalFrameUI::access$4300(this->this$0)))))->top);
		} else {
			bool var$5 = "resizable"_s->equals(name);
			bool var$4 = var$5 || "state"_s->equals(name);
			bool var$3 = var$4 || "iconable"_s->equals(name);
			bool var$2 = var$3 || "maximizable"_s->equals(name);
			if (var$2 || "closable"_s->equals(name)) {
				if ("resizable"_s->equals(name)) {
					$$nc($AquaInternalFrameUI::access$4600(this->this$0))->revalidate();
				}
				$$nc($AquaInternalFrameUI::access$4700(this->this$0))->repaint();
			} else if ("title"_s->equals(name)) {
				$$nc($AquaInternalFrameUI::access$4800(this->this$0))->repaint();
			} else if ("componentOrientation"_s->equals(name)) {
				$$nc($AquaInternalFrameUI::access$4900(this->this$0))->revalidate();
				$$nc($AquaInternalFrameUI::access$5000(this->this$0))->repaint();
			} else {
				$init($JInternalFrame);
				if ($nc($JInternalFrame::IS_SELECTED_PROPERTY)->equals(name)) {
					$var($Component, source, $cast($Component, e->getSource()));
					$AquaInternalFrameUI::updateComponentTreeUIActivation(source, $$nc($AquaInternalFrameUI::access$5100(this->this$0))->isSelected() ? $Boolean::TRUE : $Boolean::FALSE);
				}
			}
		}
	}
}

AquaInternalFrameUI$PropertyListener::AquaInternalFrameUI$PropertyListener() {
}

$Class* AquaInternalFrameUI$PropertyListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$PropertyListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI;)V", nullptr, 0, $method(AquaInternalFrameUI$PropertyListener, init$, void, $AquaInternalFrameUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFrameUI$PropertyListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFrameUI$PropertyListener", "com.apple.laf.AquaInternalFrameUI", "PropertyListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFrameUI$PropertyListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFrameUI"
	};
	$loadClass(AquaInternalFrameUI$PropertyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFrameUI$PropertyListener);
	});
	return class$;
}

$Class* AquaInternalFrameUI$PropertyListener::class$ = nullptr;

		} // laf
	} // apple
} // com