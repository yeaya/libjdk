#include <javax/naming/spi/InitialContextFactory.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;

namespace javax {
	namespace naming {
		namespace spi {

$Class* InitialContextFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInitialContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC | $ABSTRACT, $virtualMethod(InitialContextFactory, getInitialContext, $Context*, $Hashtable*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.spi.InitialContextFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InitialContextFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InitialContextFactory);
	});
	return class$;
}

$Class* InitialContextFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax