#include <java/sql/Wrapper.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _Wrapper_MethodInfo_[] = {
	{"isWrapperFor", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"unwrap", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _Wrapper_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Wrapper",
	nullptr,
	nullptr,
	nullptr,
	_Wrapper_MethodInfo_
};

$Object* allocate$Wrapper($Class* clazz) {
	return $of($alloc(Wrapper));
}

$Class* Wrapper::load$($String* name, bool initialize) {
	$loadClass(Wrapper, name, initialize, &_Wrapper_ClassInfo_, allocate$Wrapper);
	return class$;
}

$Class* Wrapper::class$ = nullptr;

	} // sql
} // java