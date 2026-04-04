#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$1.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Point.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Point = ::java::awt::Point;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$AccessibleJTextComponent$1::init$($JTextComponent$AccessibleJTextComponent* this$1, $JTextComponent* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$ComponentAdapter::init$();
}

void JTextComponent$AccessibleJTextComponent$1::componentMoved($ComponentEvent* e) {
	try {
		$var($Point, newLocationOnScreen, this->this$1->getLocationOnScreen());
		this->this$1->firePropertyChange("AccessibleVisibleData"_s, this->this$1->oldLocationOnScreen, newLocationOnScreen);
		$set(this->this$1, oldLocationOnScreen, newLocationOnScreen);
	} catch ($IllegalComponentStateException& iae) {
	}
}

JTextComponent$AccessibleJTextComponent$1::JTextComponent$AccessibleJTextComponent$1() {
}

$Class* JTextComponent$AccessibleJTextComponent$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$AccessibleJTextComponent$1, this$1)},
		{"val$this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$AccessibleJTextComponent$1, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(JTextComponent$AccessibleJTextComponent$1, init$, void, $JTextComponent$AccessibleJTextComponent*, $JTextComponent*)},
		{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$AccessibleJTextComponent$1, componentMoved, void, $ComponentEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent$AccessibleJTextComponent",
		"<init>",
		"(Ljavax/swing/text/JTextComponent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
		{"javax.swing.text.JTextComponent$AccessibleJTextComponent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$AccessibleJTextComponent$1",
		"java.awt.event.ComponentAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$AccessibleJTextComponent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$AccessibleJTextComponent$1);
	});
	return class$;
}

$Class* JTextComponent$AccessibleJTextComponent$1::class$ = nullptr;

		} // text
	} // swing
} // javax