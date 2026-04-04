#include <javax/swing/JFileChooser$1.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace javax {
	namespace swing {

void JFileChooser$1::init$($JFileChooser* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void JFileChooser$1::windowClosing($WindowEvent* e) {
	this->this$0->returnValue = 1;
}

JFileChooser$1::JFileChooser$1() {
}

$Class* JFileChooser$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(JFileChooser$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(JFileChooser$1, init$, void, $JFileChooser*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JFileChooser",
		"showDialog",
		"(Ljava/awt/Component;Ljava/lang/String;)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFileChooser$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JFileChooser$1",
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
		"javax.swing.JFileChooser"
	};
	$loadClass(JFileChooser$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFileChooser$1));
	});
	return class$;
}

$Class* JFileChooser$1::class$ = nullptr;

	} // swing
} // javax