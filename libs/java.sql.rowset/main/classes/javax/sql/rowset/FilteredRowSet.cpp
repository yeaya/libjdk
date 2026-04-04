#include <javax/sql/rowset/FilteredRowSet.h>
#include <javax/sql/rowset/Predicate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Predicate = ::javax::sql::rowset::Predicate;

namespace javax {
	namespace sql {
		namespace rowset {

$Class* FilteredRowSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFilter", "()Ljavax/sql/rowset/Predicate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilteredRowSet, getFilter, $Predicate*)},
		{"setFilter", "(Ljavax/sql/rowset/Predicate;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilteredRowSet, setFilter, void, $Predicate*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.rowset.FilteredRowSet",
		nullptr,
		"javax.sql.rowset.WebRowSet",
		nullptr,
		methodInfos$$
	};
	$loadClass(FilteredRowSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilteredRowSet));
	});
	return class$;
}

$Class* FilteredRowSet::class$ = nullptr;

		} // rowset
	} // sql
} // javax