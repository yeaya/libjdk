#include <java/sql/RowId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

bool RowId::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

$String* RowId::toString() {
	 return this->$Object::toString();
}

int32_t RowId::hashCode() {
	 return this->$Object::hashCode();
}

$Class* RowId::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"getBytes", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowId, getBytes, $bytes*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.RowId",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RowId, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowId);
	});
	return class$;
}

$Class* RowId::class$ = nullptr;

	} // sql
} // java