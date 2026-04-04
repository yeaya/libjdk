#include <sun/java2d/cmm/Profile.h>
#include <java/awt/color/CMMException.h>
#include <jcpp.h>

using $CMMException = ::java::awt::color::CMMException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace cmm {

void Profile::init$(int64_t ptr) {
	this->nativePtr = ptr;
}

int64_t Profile::getNativePtr() {
	if (this->nativePtr == 0) {
		$throwNew($CMMException, "Invalid profile: ptr is null"_s);
	}
	return this->nativePtr;
}

Profile::Profile() {
}

$Class* Profile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nativePtr", "J", nullptr, $PRIVATE | $FINAL, $field(Profile, nativePtr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PROTECTED, $method(Profile, init$, void, int64_t)},
		{"getNativePtr", "()J", nullptr, $PROTECTED | $FINAL, $method(Profile, getNativePtr, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.cmm.Profile",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Profile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Profile);
	});
	return class$;
}

$Class* Profile::class$ = nullptr;

		} // cmm
	} // java2d
} // sun