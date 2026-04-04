#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title$2.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameTitlePane$Title = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$Title;
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

void MotifInternalFrameTitlePane$Title$2::init$($MotifInternalFrameTitlePane$Title* this$1, $MotifInternalFrameTitlePane* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void MotifInternalFrameTitlePane$Title$2::mouseClicked($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifInternalFrameTitlePane$Title$2::mousePressed($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifInternalFrameTitlePane$Title$2::mouseReleased($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifInternalFrameTitlePane$Title$2::mouseEntered($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

void MotifInternalFrameTitlePane$Title$2::mouseExited($MouseEvent* e) {
	this->this$1->forwardEventToParent(e);
}

MotifInternalFrameTitlePane$Title$2::MotifInternalFrameTitlePane$Title$2() {
}

$Class* MotifInternalFrameTitlePane$Title$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$Title$2, this$1)},
		{"val$this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$Title$2, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$Title;Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", "()V", 0, $method(MotifInternalFrameTitlePane$Title$2, init$, void, $MotifInternalFrameTitlePane$Title*, $MotifInternalFrameTitlePane*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameTitlePane$Title$2, mouseClicked, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameTitlePane$Title$2, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameTitlePane$Title$2, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameTitlePane$Title$2, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameTitlePane$Title$2, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title",
		"<init>",
		"(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "Title", $PRIVATE},
		{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title$2",
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
		"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
	};
	$loadClass(MotifInternalFrameTitlePane$Title$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifInternalFrameTitlePane$Title$2);
	});
	return class$;
}

$Class* MotifInternalFrameTitlePane$Title$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com