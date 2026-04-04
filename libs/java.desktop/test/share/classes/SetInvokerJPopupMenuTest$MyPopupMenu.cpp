#include <SetInvokerJPopupMenuTest$MyPopupMenu.h>
#include <SetInvokerJPopupMenuTest.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/lang/StringBuffer.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;

void SetInvokerJPopupMenuTest$MyPopupMenu::init$() {
	$JPopupMenu::init$();
}

void SetInvokerJPopupMenuTest$MyPopupMenu::setVisible(bool state) {
	$useLocalObjectStack();
	if (!state) {
		$var($Exception, ex, $new($Exception));
		$var($StringWriter, stringWriter, $new($StringWriter));
		$var($PrintWriter, printWriter, $new($PrintWriter, stringWriter));
		ex->printStackTrace(printWriter);
		$var($String, traceString, $$nc(stringWriter->getBuffer())->toString());
		bool var$0 = traceString->lastIndexOf("windowDeactivated"_s) > 0;
		if (var$0 || traceString->lastIndexOf("menuSelectionChanged"_s) > 0) {
			return;
		}
	}
	$JPopupMenu::setVisible(state);
}

SetInvokerJPopupMenuTest$MyPopupMenu::SetInvokerJPopupMenuTest$MyPopupMenu() {
}

$Class* SetInvokerJPopupMenuTest$MyPopupMenu::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SetInvokerJPopupMenuTest$MyPopupMenu, init$, void)},
		{"setVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SetInvokerJPopupMenuTest$MyPopupMenu, setVisible, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SetInvokerJPopupMenuTest$MyPopupMenu", "SetInvokerJPopupMenuTest", "MyPopupMenu", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SetInvokerJPopupMenuTest$MyPopupMenu",
		"javax.swing.JPopupMenu",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SetInvokerJPopupMenuTest"
	};
	$loadClass(SetInvokerJPopupMenuTest$MyPopupMenu, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SetInvokerJPopupMenuTest$MyPopupMenu));
	});
	return class$;
}

$Class* SetInvokerJPopupMenuTest$MyPopupMenu::class$ = nullptr;