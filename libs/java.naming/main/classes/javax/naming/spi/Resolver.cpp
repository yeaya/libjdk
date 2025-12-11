#include <javax/naming/spi/Resolver.h>

#include <javax/naming/Name.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _Resolver_MethodInfo_[] = {
	{"resolveToClass", "(Ljavax/naming/Name;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljavax/naming/Name;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"resolveToClass", "(Ljava/lang/String;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _Resolver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.Resolver",
	nullptr,
	nullptr,
	nullptr,
	_Resolver_MethodInfo_
};

$Object* allocate$Resolver($Class* clazz) {
	return $of($alloc(Resolver));
}

$Class* Resolver::load$($String* name, bool initialize) {
	$loadClass(Resolver, name, initialize, &_Resolver_ClassInfo_, allocate$Resolver);
	return class$;
}

$Class* Resolver::class$ = nullptr;

		} // spi
	} // naming
} // javax