#include <javax/swing/Popup$DefaultFrame.h>
#include <java/awt/Frame.h>
#include <javax/swing/Popup.h>
#include <jcpp.h>

using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void Popup$DefaultFrame::init$() {
	$Frame::init$();
}

Popup$DefaultFrame::Popup$DefaultFrame() {
}

$Class* Popup$DefaultFrame::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Popup$DefaultFrame, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Popup$DefaultFrame", "javax.swing.Popup", "DefaultFrame", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.Popup$DefaultFrame",
		"java.awt.Frame",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.Popup"
	};
	$loadClass(Popup$DefaultFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Popup$DefaultFrame));
	});
	return class$;
}

$Class* Popup$DefaultFrame::class$ = nullptr;

	} // swing
} // javax