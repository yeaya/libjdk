#include <sun/swing/PrintingStatus$2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/Action.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace sun {
	namespace swing {

void PrintingStatus$2::init$($PrintingStatus* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void PrintingStatus$2::windowClosing($WindowEvent* we) {
	$nc(this->this$0->abortAction)->actionPerformed(nullptr);
}

PrintingStatus$2::PrintingStatus$2() {
}

$Class* PrintingStatus$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/PrintingStatus;)V", nullptr, 0, $method(PrintingStatus$2, init$, void, $PrintingStatus*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintingStatus$2, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.PrintingStatus",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.PrintingStatus$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.PrintingStatus$2",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.PrintingStatus"
	};
	$loadClass(PrintingStatus$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrintingStatus$2));
	});
	return class$;
}

$Class* PrintingStatus$2::class$ = nullptr;

	} // swing
} // sun