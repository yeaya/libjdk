#include <sun/java2d/Disposer$PollDisposable.h>
#include <sun/java2d/Disposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace sun {
	namespace java2d {

$Class* Disposer$PollDisposable::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.Disposer$PollDisposable", "sun.java2d.Disposer", "PollDisposable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.Disposer$PollDisposable",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.Disposer"
	};
	$loadClass(Disposer$PollDisposable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Disposer$PollDisposable);
	});
	return class$;
}

$Class* Disposer$PollDisposable::class$ = nullptr;

	} // java2d
} // sun