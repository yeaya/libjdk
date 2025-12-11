#include <javax/naming/NamingEnumeration.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {

$MethodInfo _NamingEnumeration_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"hasMore", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _NamingEnumeration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.NamingEnumeration",
	nullptr,
	"java.util.Enumeration",
	nullptr,
	_NamingEnumeration_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TT;>;"
};

$Object* allocate$NamingEnumeration($Class* clazz) {
	return $of($alloc(NamingEnumeration));
}

$Class* NamingEnumeration::load$($String* name, bool initialize) {
	$loadClass(NamingEnumeration, name, initialize, &_NamingEnumeration_ClassInfo_, allocate$NamingEnumeration);
	return class$;
}

$Class* NamingEnumeration::class$ = nullptr;

	} // naming
} // javax