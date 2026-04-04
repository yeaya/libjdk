#include <HeadlessJInternalFrame$1$1.h>
#include <HeadlessJInternalFrame$1$1$1.h>
#include <HeadlessJInternalFrame$1.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $HeadlessJInternalFrame$1 = ::HeadlessJInternalFrame$1;
using $HeadlessJInternalFrame$1$1$1 = ::HeadlessJInternalFrame$1$1$1;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

void HeadlessJInternalFrame$1$1::init$($HeadlessJInternalFrame$1* this$0, $JInternalFrame* arg0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane::init$(arg0);
}

$PropertyChangeListener* HeadlessJInternalFrame$1$1::createPropertyChangeListener() {
	return $new($HeadlessJInternalFrame$1$1$1, this);
}

HeadlessJInternalFrame$1$1::HeadlessJInternalFrame$1$1() {
}

$Class* HeadlessJInternalFrame$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LHeadlessJInternalFrame$1;", nullptr, $FINAL | $SYNTHETIC, $field(HeadlessJInternalFrame$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LHeadlessJInternalFrame$1;Ljavax/swing/JInternalFrame;)V", nullptr, 0, $method(HeadlessJInternalFrame$1$1, init$, void, $HeadlessJInternalFrame$1*, $JInternalFrame*)},
		{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(HeadlessJInternalFrame$1$1, createPropertyChangeListener, $PropertyChangeListener*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJInternalFrame$1",
		"createNorthPane",
		"(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJInternalFrame$1", nullptr, nullptr, 0},
		{"HeadlessJInternalFrame$1$1", nullptr, nullptr, 0},
		{"HeadlessJInternalFrame$1$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJInternalFrame$1$1",
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane",
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
	$loadClass(HeadlessJInternalFrame$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJInternalFrame$1$1));
	});
	return class$;
}

$Class* HeadlessJInternalFrame$1$1::class$ = nullptr;