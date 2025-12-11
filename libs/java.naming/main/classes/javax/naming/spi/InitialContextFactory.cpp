#include <javax/naming/spi/InitialContextFactory.h>

#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _InitialContextFactory_MethodInfo_[] = {
	{"getInitialContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _InitialContextFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.InitialContextFactory",
	nullptr,
	nullptr,
	nullptr,
	_InitialContextFactory_MethodInfo_
};

$Object* allocate$InitialContextFactory($Class* clazz) {
	return $of($alloc(InitialContextFactory));
}

$Class* InitialContextFactory::load$($String* name, bool initialize) {
	$loadClass(InitialContextFactory, name, initialize, &_InitialContextFactory_ClassInfo_, allocate$InitialContextFactory);
	return class$;
}

$Class* InitialContextFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax