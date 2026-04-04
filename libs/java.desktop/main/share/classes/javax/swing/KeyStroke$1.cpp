#include <javax/swing/KeyStroke$1.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {

void KeyStroke$1::init$() {
}

$KeyStroke* KeyStroke$1::create() {
	return $new($KeyStroke);
}

KeyStroke$1::KeyStroke$1() {
}

$Class* KeyStroke$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeyStroke$1, init$, void)},
		{"create", "()Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $virtualMethod(KeyStroke$1, create, $KeyStroke*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.KeyStroke",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.KeyStroke$1", nullptr, nullptr, 0},
		{"sun.swing.SwingAccessor$KeyStrokeAccessor", "sun.swing.SwingAccessor", "KeyStrokeAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.KeyStroke$1",
		"java.lang.Object",
		"sun.swing.SwingAccessor$KeyStrokeAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.KeyStroke"
	};
	$loadClass(KeyStroke$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStroke$1);
	});
	return class$;
}

$Class* KeyStroke$1::class$ = nullptr;

	} // swing
} // javax