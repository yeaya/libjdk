#include <java/sql/NClob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace sql {

$Class* NClob::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.NClob",
		nullptr,
		"java.sql.Clob"
	};
	$loadClass(NClob, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NClob);
	});
	return class$;
}

$Class* NClob::class$ = nullptr;

	} // sql
} // java