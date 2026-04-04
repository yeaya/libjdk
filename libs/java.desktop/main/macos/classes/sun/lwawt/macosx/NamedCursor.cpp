#include <sun/lwawt/macosx/NamedCursor.h>
#include <java/awt/Cursor.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

void NamedCursor::init$($String* name) {
	$Cursor::init$(name);
}

NamedCursor::NamedCursor() {
}

$Class* NamedCursor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(NamedCursor, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.NamedCursor",
		"java.awt.Cursor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NamedCursor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedCursor);
	});
	return class$;
}

$Class* NamedCursor::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun