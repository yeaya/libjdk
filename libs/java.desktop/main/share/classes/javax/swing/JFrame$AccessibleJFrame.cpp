#include <javax/swing/JFrame$AccessibleJFrame.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Frame$AccessibleAWTFrame.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ACTIVE
#undef RESIZABLE

using $Frame$AccessibleAWTFrame = ::java::awt::Frame$AccessibleAWTFrame;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JFrame = ::javax::swing::JFrame;

namespace javax {
	namespace swing {

void JFrame$AccessibleJFrame::init$($JFrame* this$0) {
	$set(this, this$0, this$0);
	$Frame$AccessibleAWTFrame::init$(this$0);
}

$String* JFrame$AccessibleJFrame::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else if (this->this$0->getTitle() == nullptr) {
		return $Frame$AccessibleAWTFrame::getAccessibleName();
	} else {
		return this->this$0->getTitle();
	}
}

$AccessibleStateSet* JFrame$AccessibleJFrame::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Frame$AccessibleAWTFrame::getAccessibleStateSet());
	if (this->this$0->isResizable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::RESIZABLE);
	}
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	return states;
}

JFrame$AccessibleJFrame::JFrame$AccessibleJFrame() {
}

$Class* JFrame$AccessibleJFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JFrame$AccessibleJFrame, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PROTECTED, $method(JFrame$AccessibleJFrame, init$, void, $JFrame*)},
		{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFrame$AccessibleJFrame, getAccessibleName, $String*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(JFrame$AccessibleJFrame, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFrame$AccessibleJFrame", "javax.swing.JFrame", "AccessibleJFrame", $PROTECTED},
		{"java.awt.Frame$AccessibleAWTFrame", "java.awt.Frame", "AccessibleAWTFrame", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JFrame$AccessibleJFrame",
		"java.awt.Frame$AccessibleAWTFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JFrame"
	};
	$loadClass(JFrame$AccessibleJFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFrame$AccessibleJFrame));
	});
	return class$;
}

$Class* JFrame$AccessibleJFrame::class$ = nullptr;

	} // swing
} // javax