#include <sun/awt/X11CustomCursor$1CCount.h>
#include <sun/awt/X11CustomCursor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11CustomCursor = ::sun::awt::X11CustomCursor;

namespace sun {
	namespace awt {

void X11CustomCursor$1CCount::init$($X11CustomCursor* this$0, int32_t cl, int32_t ct) {
	$set(this, this$0, this$0);
	this->color = cl;
	this->count = ct;
}

int32_t X11CustomCursor$1CCount::compareTo(X11CustomCursor$1CCount* cc) {
	return $nc(cc)->count - this->count;
}

int32_t X11CustomCursor$1CCount::compareTo(Object$* cc) {
	return this->compareTo($cast(X11CustomCursor$1CCount, cc));
}

X11CustomCursor$1CCount::X11CustomCursor$1CCount() {
}

$Class* X11CustomCursor$1CCount::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/X11CustomCursor;", nullptr, $FINAL | $SYNTHETIC, $field(X11CustomCursor$1CCount, this$0)},
		{"color", "I", nullptr, 0, $field(X11CustomCursor$1CCount, color)},
		{"count", "I", nullptr, 0, $field(X11CustomCursor$1CCount, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11CustomCursor;II)V", nullptr, $PUBLIC, $method(X11CustomCursor$1CCount, init$, void, $X11CustomCursor*, int32_t, int32_t)},
		{"compareTo", "(Lsun/awt/X11CustomCursor$1CCount;)I", nullptr, $PUBLIC, $virtualMethod(X11CustomCursor$1CCount, compareTo, int32_t, X11CustomCursor$1CCount*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(X11CustomCursor$1CCount, compareTo, int32_t, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11CustomCursor",
		"createNativeCursor",
		"(Ljava/awt/Image;[IIIII)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11CustomCursor$1CCount", nullptr, "CCount", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11CustomCursor$1CCount",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Lsun/awt/X11CustomCursor$1CCount;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11CustomCursor"
	};
	$loadClass(X11CustomCursor$1CCount, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11CustomCursor$1CCount);
	});
	return class$;
}

$Class* X11CustomCursor$1CCount::class$ = nullptr;

	} // awt
} // sun