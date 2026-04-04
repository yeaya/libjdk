#include <javax/naming/spi/StateFactory.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;

namespace javax {
	namespace naming {
		namespace spi {

$Class* StateFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getStateToBind", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(StateFactory, getStateToBind, $Object*, Object$*, $Name*, $Context*, $Hashtable*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.spi.StateFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StateFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StateFactory);
	});
	return class$;
}

$Class* StateFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax