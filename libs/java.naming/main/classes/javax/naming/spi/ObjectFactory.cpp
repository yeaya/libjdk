#include <javax/naming/spi/ObjectFactory.h>
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

$Class* ObjectFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(ObjectFactory, getObjectInstance, $Object*, Object$*, $Name*, $Context*, $Hashtable*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.spi.ObjectFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ObjectFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectFactory);
	});
	return class$;
}

$Class* ObjectFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax