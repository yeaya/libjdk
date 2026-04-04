#include <sun/awt/X11/XKeysym$Keysym2JavaKeycode.h>
#include <sun/awt/X11/XKeysym.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

int32_t XKeysym$Keysym2JavaKeycode::getJavaKeycode() {
	return this->jkeycode;
}

int32_t XKeysym$Keysym2JavaKeycode::getKeyLocation() {
	return this->keyLocation;
}

void XKeysym$Keysym2JavaKeycode::init$(int32_t jk, int32_t loc) {
	this->jkeycode = jk;
	this->keyLocation = loc;
}

XKeysym$Keysym2JavaKeycode::XKeysym$Keysym2JavaKeycode() {
}

$Class* XKeysym$Keysym2JavaKeycode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"jkeycode", "I", nullptr, 0, $field(XKeysym$Keysym2JavaKeycode, jkeycode)},
		{"keyLocation", "I", nullptr, 0, $field(XKeysym$Keysym2JavaKeycode, keyLocation)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(XKeysym$Keysym2JavaKeycode, init$, void, int32_t, int32_t)},
		{"getJavaKeycode", "()I", nullptr, 0, $virtualMethod(XKeysym$Keysym2JavaKeycode, getJavaKeycode, int32_t)},
		{"getKeyLocation", "()I", nullptr, 0, $virtualMethod(XKeysym$Keysym2JavaKeycode, getKeyLocation, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XKeysym$Keysym2JavaKeycode", "sun.awt.X11.XKeysym", "Keysym2JavaKeycode", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11.XKeysym$Keysym2JavaKeycode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XKeysym"
	};
	$loadClass(XKeysym$Keysym2JavaKeycode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XKeysym$Keysym2JavaKeycode);
	});
	return class$;
}

$Class* XKeysym$Keysym2JavaKeycode::class$ = nullptr;

		} // X11
	} // awt
} // sun