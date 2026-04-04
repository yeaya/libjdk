#include <javax/naming/spi/ObjectFactoryBuilder.h>
#include <java/util/Hashtable.h>
#include <javax/naming/spi/ObjectFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ObjectFactory = ::javax::naming::spi::ObjectFactory;

namespace javax {
	namespace naming {
		namespace spi {

$Class* ObjectFactoryBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createObjectFactory", "(Ljava/lang/Object;Ljava/util/Hashtable;)Ljavax/naming/spi/ObjectFactory;", "(Ljava/lang/Object;Ljava/util/Hashtable<**>;)Ljavax/naming/spi/ObjectFactory;", $PUBLIC | $ABSTRACT, $virtualMethod(ObjectFactoryBuilder, createObjectFactory, $ObjectFactory*, Object$*, $Hashtable*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.spi.ObjectFactoryBuilder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ObjectFactoryBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectFactoryBuilder);
	});
	return class$;
}

$Class* ObjectFactoryBuilder::class$ = nullptr;

		} // spi
	} // naming
} // javax