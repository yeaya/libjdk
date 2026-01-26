#include <javax/sql/rowset/Joinable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sql {
		namespace rowset {

$MethodInfo _Joinable_MethodInfo_[] = {
	{"getMatchColumnIndexes", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, getMatchColumnIndexes, $ints*), "java.sql.SQLException"},
	{"getMatchColumnNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, getMatchColumnNames, $StringArray*), "java.sql.SQLException"},
	{"setMatchColumn", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, setMatchColumn, void, int32_t), "java.sql.SQLException"},
	{"setMatchColumn", "([I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, setMatchColumn, void, $ints*), "java.sql.SQLException"},
	{"setMatchColumn", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, setMatchColumn, void, $String*), "java.sql.SQLException"},
	{"setMatchColumn", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, setMatchColumn, void, $StringArray*), "java.sql.SQLException"},
	{"unsetMatchColumn", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, unsetMatchColumn, void, int32_t), "java.sql.SQLException"},
	{"unsetMatchColumn", "([I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, unsetMatchColumn, void, $ints*), "java.sql.SQLException"},
	{"unsetMatchColumn", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, unsetMatchColumn, void, $String*), "java.sql.SQLException"},
	{"unsetMatchColumn", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Joinable, unsetMatchColumn, void, $StringArray*), "java.sql.SQLException"},
	{}
};

$ClassInfo _Joinable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.rowset.Joinable",
	nullptr,
	nullptr,
	nullptr,
	_Joinable_MethodInfo_
};

$Object* allocate$Joinable($Class* clazz) {
	return $of($alloc(Joinable));
}

$Class* Joinable::load$($String* name, bool initialize) {
	$loadClass(Joinable, name, initialize, &_Joinable_ClassInfo_, allocate$Joinable);
	return class$;
}

$Class* Joinable::class$ = nullptr;

		} // rowset
	} // sql
} // javax