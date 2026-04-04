#include <ExceptionallyCloseable.h>
#include <java/io/Closeable.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ExceptionallyCloseable::closeExceptionally($Throwable* cause) {
	close();
}

void ExceptionallyCloseable::close($Throwable* t, $Closeable* c) {
	$init(ExceptionallyCloseable);
	if ($instanceOf(ExceptionallyCloseable, c)) {
		$cast(ExceptionallyCloseable, c)->closeExceptionally(t);
	} else {
		$nc(c)->close();
	}
}

$Class* ExceptionallyCloseable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "(Ljava/lang/Throwable;Ljava/io/Closeable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExceptionallyCloseable, close, void, $Throwable*, $Closeable*), "java.io.IOException"},
		{"closeExceptionally", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ExceptionallyCloseable, closeExceptionally, void, $Throwable*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"ExceptionallyCloseable",
		nullptr,
		"java.io.Closeable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExceptionallyCloseable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionallyCloseable);
	});
	return class$;
}

$Class* ExceptionallyCloseable::class$ = nullptr;