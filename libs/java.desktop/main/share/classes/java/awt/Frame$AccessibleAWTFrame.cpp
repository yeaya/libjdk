#include <java/awt/Frame$AccessibleAWTFrame.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef FRAME
#undef RESIZABLE

using $Frame = ::java::awt::Frame;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

void Frame$AccessibleAWTFrame::init$($Frame* this$0) {
	$set(this, this$0, this$0);
	$Window$AccessibleAWTWindow::init$(this$0);
}

$AccessibleRole* Frame$AccessibleAWTFrame::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FRAME;
}

$AccessibleStateSet* Frame$AccessibleAWTFrame::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Window$AccessibleAWTWindow::getAccessibleStateSet());
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	if (this->this$0->isResizable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::RESIZABLE);
	}
	return states;
}

Frame$AccessibleAWTFrame::Frame$AccessibleAWTFrame() {
}

$Class* Frame$AccessibleAWTFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Frame;", nullptr, $FINAL | $SYNTHETIC, $field(Frame$AccessibleAWTFrame, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$AccessibleAWTFrame, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PROTECTED, $method(Frame$AccessibleAWTFrame, init$, void, $Frame*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Frame$AccessibleAWTFrame, getAccessibleRole, $AccessibleRole*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(Frame$AccessibleAWTFrame, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Frame$AccessibleAWTFrame", "java.awt.Frame", "AccessibleAWTFrame", $PROTECTED},
		{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Frame$AccessibleAWTFrame",
		"java.awt.Window$AccessibleAWTWindow",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Frame"
	};
	$loadClass(Frame$AccessibleAWTFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Frame$AccessibleAWTFrame));
	});
	return class$;
}

$Class* Frame$AccessibleAWTFrame::class$ = nullptr;

	} // awt
} // java