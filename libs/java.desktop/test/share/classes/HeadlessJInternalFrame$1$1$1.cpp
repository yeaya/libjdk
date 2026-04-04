#include <HeadlessJInternalFrame$1$1$1.h>
#include <HeadlessJInternalFrame$1$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <jcpp.h>

using $HeadlessJInternalFrame$1$1 = ::HeadlessJInternalFrame$1$1;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;

void HeadlessJInternalFrame$1$1$1::init$($HeadlessJInternalFrame$1$1* this$1) {
	$set(this, this$1, this$1);
	$BasicInternalFrameTitlePane$PropertyChangeHandler::init$(this$1);
	this->countUI = 0;
}

void HeadlessJInternalFrame$1$1$1::propertyChange($PropertyChangeEvent* evt) {
	if ($$nc($nc(evt)->getPropertyName())->equals("UI"_s)) {
		++this->countUI;
	} else if (this->countUI > 1) {
		$throwNew($RuntimeException, "Test failed. Listener not removed!"_s);
	}
}

HeadlessJInternalFrame$1$1$1::HeadlessJInternalFrame$1$1$1() {
}

$Class* HeadlessJInternalFrame$1$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LHeadlessJInternalFrame$1$1;", nullptr, $FINAL | $SYNTHETIC, $field(HeadlessJInternalFrame$1$1$1, this$1)},
		{"countUI", "I", nullptr, 0, $field(HeadlessJInternalFrame$1$1$1, countUI)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LHeadlessJInternalFrame$1$1;)V", nullptr, 0, $method(HeadlessJInternalFrame$1$1$1, init$, void, $HeadlessJInternalFrame$1$1*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(HeadlessJInternalFrame$1$1$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJInternalFrame$1$1",
		"createPropertyChangeListener",
		"()Ljava/beans/PropertyChangeListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJInternalFrame$1", nullptr, nullptr, 0},
		{"HeadlessJInternalFrame$1$1", nullptr, nullptr, 0},
		{"HeadlessJInternalFrame$1$1$1", nullptr, nullptr, 0},
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJInternalFrame$1$1$1",
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadlessJInternalFrame"
	};
	$loadClass(HeadlessJInternalFrame$1$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessJInternalFrame$1$1$1);
	});
	return class$;
}

$Class* HeadlessJInternalFrame$1$1$1::class$ = nullptr;