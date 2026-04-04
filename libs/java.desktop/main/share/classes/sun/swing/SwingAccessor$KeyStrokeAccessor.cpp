#include <sun/swing/SwingAccessor$KeyStrokeAccessor.h>
#include <javax/swing/KeyStroke.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace sun {
	namespace swing {

$Class* SwingAccessor$KeyStrokeAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"create", "()Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$KeyStrokeAccessor, create, $KeyStroke*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingAccessor$KeyStrokeAccessor", "sun.swing.SwingAccessor", "KeyStrokeAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingAccessor$KeyStrokeAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.SwingAccessor"
	};
	$loadClass(SwingAccessor$KeyStrokeAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingAccessor$KeyStrokeAccessor);
	});
	return class$;
}

$Class* SwingAccessor$KeyStrokeAccessor::class$ = nullptr;

	} // swing
} // sun