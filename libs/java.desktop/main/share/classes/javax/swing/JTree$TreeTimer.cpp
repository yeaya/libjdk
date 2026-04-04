#include <javax/swing/JTree$TreeTimer.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/JTree.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $Timer = ::javax::swing::Timer;

namespace javax {
	namespace swing {

void JTree$TreeTimer::init$($JTree* this$0) {
	$set(this, this$0, this$0);
	$Timer::init$(2000, nullptr);
	setRepeats(false);
}

void JTree$TreeTimer::fireActionPerformed($ActionEvent* ae) {
	this->this$0->expandRow(this->this$0->expandRow$);
}

JTree$TreeTimer::JTree$TreeTimer() {
}

$Class* JTree$TreeTimer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTree;", nullptr, $FINAL | $SYNTHETIC, $field(JTree$TreeTimer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTree;)V", nullptr, $PUBLIC, $method(JTree$TreeTimer, init$, void, $JTree*)},
		{"fireActionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTree$TreeTimer, fireActionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTree$TreeTimer", "javax.swing.JTree", "TreeTimer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTree$TreeTimer",
		"javax.swing.Timer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTree"
	};
	$loadClass(JTree$TreeTimer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTree$TreeTimer);
	});
	return class$;
}

$Class* JTree$TreeTimer::class$ = nullptr;

	} // swing
} // javax