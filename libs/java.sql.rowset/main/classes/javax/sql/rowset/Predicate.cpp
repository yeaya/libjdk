#include <javax/sql/rowset/Predicate.h>
#include <javax/sql/RowSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSet = ::javax::sql::RowSet;

namespace javax {
	namespace sql {
		namespace rowset {

$Class* Predicate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"evaluate", "(Ljavax/sql/RowSet;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Predicate, evaluate, bool, $RowSet*)},
		{"evaluate", "(Ljava/lang/Object;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Predicate, evaluate, bool, Object$*, int32_t), "java.sql.SQLException"},
		{"evaluate", "(Ljava/lang/Object;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Predicate, evaluate, bool, Object$*, $String*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.rowset.Predicate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Predicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Predicate);
	});
	return class$;
}

$Class* Predicate::class$ = nullptr;

		} // rowset
	} // sql
} // javax