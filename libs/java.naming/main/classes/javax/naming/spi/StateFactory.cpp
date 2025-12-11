#include <javax/naming/spi/StateFactory.h>

#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _StateFactory_MethodInfo_[] = {
	{"getStateToBind", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _StateFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.StateFactory",
	nullptr,
	nullptr,
	nullptr,
	_StateFactory_MethodInfo_
};

$Object* allocate$StateFactory($Class* clazz) {
	return $of($alloc(StateFactory));
}

$Class* StateFactory::load$($String* name, bool initialize) {
	$loadClass(StateFactory, name, initialize, &_StateFactory_ClassInfo_, allocate$StateFactory);
	return class$;
}

$Class* StateFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax