#include <TitledBorderLabel$1.h>
#include <TitledBorderLabel.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $TitledBorderLabel = ::TitledBorderLabel;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;

void TitledBorderLabel$1::init$($JDialog* val$dialog) {
	$set(this, val$dialog, val$dialog);
	$WindowAdapter::init$();
}

void TitledBorderLabel$1::windowClosing($WindowEvent* e) {
	$nc(this->val$dialog)->dispose();
	$TitledBorderLabel::fail("Main dialog was closed."_s);
}

TitledBorderLabel$1::TitledBorderLabel$1() {
}

$Class* TitledBorderLabel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(TitledBorderLabel$1, val$dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, 0, $method(TitledBorderLabel$1, init$, void, $JDialog*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TitledBorderLabel$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TitledBorderLabel",
		"createAndShowTestDialog",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TitledBorderLabel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TitledBorderLabel$1",
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
		"TitledBorderLabel"
	};
	$loadClass(TitledBorderLabel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TitledBorderLabel$1));
	});
	return class$;
}

$Class* TitledBorderLabel$1::class$ = nullptr;