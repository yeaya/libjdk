#include <javax/naming/spi/Resolver.h>
#include <javax/naming/Name.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace javax {
	namespace naming {
		namespace spi {

$Class* Resolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolveToClass", "(Ljavax/naming/Name;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljavax/naming/Name;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC | $ABSTRACT, $virtualMethod(Resolver, resolveToClass, $ResolveResult*, $Name*, $Class*), "javax.naming.NamingException"},
		{"resolveToClass", "(Ljava/lang/String;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC | $ABSTRACT, $virtualMethod(Resolver, resolveToClass, $ResolveResult*, $String*, $Class*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.spi.Resolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Resolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolver);
	});
	return class$;
}

$Class* Resolver::class$ = nullptr;

		} // spi
	} // naming
} // javax