#include <javax/sql/rowset/JoinRowSet.h>

#include <java/util/Collection.h>
#include <javax/sql/RowSet.h>
#include <javax/sql/rowset/CachedRowSet.h>
#include <javax/sql/rowset/Joinable.h>
#include <jcpp.h>

#undef CROSS_JOIN
#undef FULL_JOIN
#undef INNER_JOIN
#undef LEFT_OUTER_JOIN
#undef RIGHT_OUTER_JOIN

using $RowSetArray = $Array<::javax::sql::RowSet>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $RowSet = ::javax::sql::RowSet;
using $CachedRowSet = ::javax::sql::rowset::CachedRowSet;
using $Joinable = ::javax::sql::rowset::Joinable;

namespace javax {
	namespace sql {
		namespace rowset {

$FieldInfo _JoinRowSet_FieldInfo_[] = {
	{"CROSS_JOIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JoinRowSet, CROSS_JOIN)},
	{"INNER_JOIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JoinRowSet, INNER_JOIN)},
	{"LEFT_OUTER_JOIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JoinRowSet, LEFT_OUTER_JOIN)},
	{"RIGHT_OUTER_JOIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JoinRowSet, RIGHT_OUTER_JOIN)},
	{"FULL_JOIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JoinRowSet, FULL_JOIN)},
	{}
};

$MethodInfo _JoinRowSet_MethodInfo_[] = {
	{"addRowSet", "(Ljavax/sql/rowset/Joinable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, addRowSet, void, $Joinable*), "java.sql.SQLException"},
	{"addRowSet", "(Ljavax/sql/RowSet;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, addRowSet, void, $RowSet*, int32_t), "java.sql.SQLException"},
	{"addRowSet", "(Ljavax/sql/RowSet;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, addRowSet, void, $RowSet*, $String*), "java.sql.SQLException"},
	{"addRowSet", "([Ljavax/sql/RowSet;[I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, addRowSet, void, $RowSetArray*, $ints*), "java.sql.SQLException"},
	{"addRowSet", "([Ljavax/sql/RowSet;[Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, addRowSet, void, $RowSetArray*, $StringArray*), "java.sql.SQLException"},
	{"getJoinType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, getJoinType, int32_t), "java.sql.SQLException"},
	{"getRowSetNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, getRowSetNames, $StringArray*), "java.sql.SQLException"},
	{"getRowSets", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, getRowSets, $Collection*), "java.sql.SQLException"},
	{"getWhereClause", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, getWhereClause, $String*), "java.sql.SQLException"},
	{"setJoinType", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, setJoinType, void, int32_t), "java.sql.SQLException"},
	{"supportsCrossJoin", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, supportsCrossJoin, bool)},
	{"supportsFullJoin", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, supportsFullJoin, bool)},
	{"supportsInnerJoin", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, supportsInnerJoin, bool)},
	{"supportsLeftOuterJoin", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, supportsLeftOuterJoin, bool)},
	{"supportsRightOuterJoin", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, supportsRightOuterJoin, bool)},
	{"toCachedRowSet", "()Ljavax/sql/rowset/CachedRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JoinRowSet, toCachedRowSet, $CachedRowSet*), "java.sql.SQLException"},
	{}
};

$ClassInfo _JoinRowSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.rowset.JoinRowSet",
	nullptr,
	"javax.sql.rowset.WebRowSet",
	_JoinRowSet_FieldInfo_,
	_JoinRowSet_MethodInfo_
};

$Object* allocate$JoinRowSet($Class* clazz) {
	return $of($alloc(JoinRowSet));
}

$Class* JoinRowSet::load$($String* name, bool initialize) {
	$loadClass(JoinRowSet, name, initialize, &_JoinRowSet_ClassInfo_, allocate$JoinRowSet);
	return class$;
}

$Class* JoinRowSet::class$ = nullptr;

		} // rowset
	} // sql
} // javax