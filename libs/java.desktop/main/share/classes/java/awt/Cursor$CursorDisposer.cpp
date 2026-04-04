#include <java/awt/Cursor$CursorDisposer.h>
#include <java/awt/Cursor.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Cursor$CursorDisposer::init$(int64_t pData) {
	this->pData = pData;
}

void Cursor$CursorDisposer::dispose() {
	if (this->pData != 0) {
		$Cursor::finalizeImpl(this->pData);
	}
}

Cursor$CursorDisposer::Cursor$CursorDisposer() {
}

$Class* Cursor$CursorDisposer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pData", "J", nullptr, $VOLATILE, $field(Cursor$CursorDisposer, pData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(Cursor$CursorDisposer, init$, void, int64_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(Cursor$CursorDisposer, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Cursor$CursorDisposer", "java.awt.Cursor", "CursorDisposer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Cursor$CursorDisposer",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Cursor"
	};
	$loadClass(Cursor$CursorDisposer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cursor$CursorDisposer);
	});
	return class$;
}

$Class* Cursor$CursorDisposer::class$ = nullptr;

	} // awt
} // java