#include <javax/naming/spi/InitialContextFactoryBuilder.h>
#include <java/util/Hashtable.h>
#include <javax/naming/spi/InitialContextFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $InitialContextFactory = ::javax::naming::spi::InitialContextFactory;

namespace javax {
	namespace naming {
		namespace spi {

$Class* InitialContextFactoryBuilder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createInitialContextFactory", "(Ljava/util/Hashtable;)Ljavax/naming/spi/InitialContextFactory;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/spi/InitialContextFactory;", $PUBLIC | $ABSTRACT, $virtualMethod(InitialContextFactoryBuilder, createInitialContextFactory, $InitialContextFactory*, $Hashtable*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.spi.InitialContextFactoryBuilder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InitialContextFactoryBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InitialContextFactoryBuilder);
	});
	return class$;
}

$Class* InitialContextFactoryBuilder::class$ = nullptr;

		} // spi
	} // naming
} // javax