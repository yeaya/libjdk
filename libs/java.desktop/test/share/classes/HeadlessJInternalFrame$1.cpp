#include <HeadlessJInternalFrame$1.h>
#include <HeadlessJInternalFrame$1$1.h>
#include <HeadlessJInternalFrame.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $HeadlessJInternalFrame$1$1 = ::HeadlessJInternalFrame$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

void HeadlessJInternalFrame$1::init$($JInternalFrame* arg0) {
	$BasicInternalFrameUI::init$(arg0);
}

$JComponent* HeadlessJInternalFrame$1::createNorthPane($JInternalFrame* w) {
	$set(this, titlePane, $new($HeadlessJInternalFrame$1$1, this, w));
	return this->titlePane;
}

HeadlessJInternalFrame$1::HeadlessJInternalFrame$1() {
}

$Class* HeadlessJInternalFrame$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, 0, $method(HeadlessJInternalFrame$1, init$, void, $JInternalFrame*)},
		{"createNorthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED, $virtualMethod(HeadlessJInternalFrame$1, createNorthPane, $JComponent*, $JInternalFrame*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJInternalFrame",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJInternalFrame$1", nullptr, nullptr, 0},
		{"HeadlessJInternalFrame$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJInternalFrame$1",
		"javax.swing.plaf.basic.BasicInternalFrameUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadlessJInternalFrame"
	};
	$loadClass(HeadlessJInternalFrame$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessJInternalFrame$1);
	});
	return class$;
}

$Class* HeadlessJInternalFrame$1::class$ = nullptr;