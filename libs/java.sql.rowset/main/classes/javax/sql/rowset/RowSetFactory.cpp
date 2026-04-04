#include <javax/sql/rowset/RowSetFactory.h>
#include <javax/sql/rowset/CachedRowSet.h>
#include <javax/sql/rowset/FilteredRowSet.h>
#include <javax/sql/rowset/JdbcRowSet.h>
#include <javax/sql/rowset/JoinRowSet.h>
#include <javax/sql/rowset/WebRowSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CachedRowSet = ::javax::sql::rowset::CachedRowSet;
using $FilteredRowSet = ::javax::sql::rowset::FilteredRowSet;
using $JdbcRowSet = ::javax::sql::rowset::JdbcRowSet;
using $JoinRowSet = ::javax::sql::rowset::JoinRowSet;
using $WebRowSet = ::javax::sql::rowset::WebRowSet;

namespace javax {
	namespace sql {
		namespace rowset {

$Class* RowSetFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createCachedRowSet", "()Ljavax/sql/rowset/CachedRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetFactory, createCachedRowSet, $CachedRowSet*), "java.sql.SQLException"},
		{"createFilteredRowSet", "()Ljavax/sql/rowset/FilteredRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetFactory, createFilteredRowSet, $FilteredRowSet*), "java.sql.SQLException"},
		{"createJdbcRowSet", "()Ljavax/sql/rowset/JdbcRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetFactory, createJdbcRowSet, $JdbcRowSet*), "java.sql.SQLException"},
		{"createJoinRowSet", "()Ljavax/sql/rowset/JoinRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetFactory, createJoinRowSet, $JoinRowSet*), "java.sql.SQLException"},
		{"createWebRowSet", "()Ljavax/sql/rowset/WebRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetFactory, createWebRowSet, $WebRowSet*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.rowset.RowSetFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RowSetFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetFactory);
	});
	return class$;
}

$Class* RowSetFactory::class$ = nullptr;

		} // rowset
	} // sql
} // javax