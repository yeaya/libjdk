#include <javax/naming/spi/DirObjectFactory.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $Attributes = ::javax::naming::directory::Attributes;

namespace javax {
	namespace naming {
		namespace spi {

$Class* DirObjectFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(DirObjectFactory, getObjectInstance, $Object*, Object$*, $Name*, $Context*, $Hashtable*, $Attributes*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.spi.DirObjectFactory",
		nullptr,
		"javax.naming.spi.ObjectFactory",
		nullptr,
		methodInfos$$
	};
	$loadClass(DirObjectFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirObjectFactory);
	});
	return class$;
}

$Class* DirObjectFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax