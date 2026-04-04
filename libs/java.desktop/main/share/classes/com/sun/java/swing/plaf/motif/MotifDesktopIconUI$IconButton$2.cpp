#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton$2.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconButton = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifDesktopIconUI$IconButton$2::init$($MotifDesktopIconUI$IconButton* this$1, $MotifDesktopIconUI* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void MotifDesktopIconUI$IconButton$2::mouseClicked($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconButton$2::mousePressed($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconButton$2::mouseReleased($MouseEvent* e) {
	if (!$nc($nc(this->this$1->this$0)->systemMenu)->isShowing()) {
		this->this$1->forwardEventToParent(e);
	}
}

void MotifDesktopIconUI$IconButton$2::mouseEntered($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifDesktopIconUI$IconButton$2::mouseExited($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

MotifDesktopIconUI$IconButton$2::MotifDesktopIconUI$IconButton$2() {
}

$Class* MotifDesktopIconUI$IconButton$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton$2, this$1)},
		{"val$this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton$2, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", "()V", 0, $method(MotifDesktopIconUI$IconButton$2, init$, void, $MotifDesktopIconUI$IconButton*, $MotifDesktopIconUI*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$IconButton$2, mouseClicked, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$IconButton$2, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$IconButton$2, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$IconButton$2, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$IconButton$2, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton",
		"<init>",
		"(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;Ljavax/swing/Icon;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconButton", $PROTECTED},
		{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$2",
		"java.lang.Object",
		"java.awt.event.MouseListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
	};
	$loadClass(MotifDesktopIconUI$IconButton$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifDesktopIconUI$IconButton$2);
	});
	return class$;
}

$Class* MotifDesktopIconUI$IconButton$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com