#include <java/sql/Ref.h>

#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace sql {

$MethodInfo _Ref_MethodInfo_[] = {
	{"getBaseTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _Ref_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Ref",
	nullptr,
	nullptr,
	nullptr,
	_Ref_MethodInfo_
};

$Object* allocate$Ref($Class* clazz) {
	return $of($alloc(Ref));
}

$Class* Ref::load$($String* name, bool initialize) {
	$loadClass(Ref, name, initialize, &_Ref_ClassInfo_, allocate$Ref);
	return class$;
}

$Class* Ref::class$ = nullptr;

	} // sql
} // java