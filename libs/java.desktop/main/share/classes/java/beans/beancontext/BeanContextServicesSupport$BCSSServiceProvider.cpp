#include <java/beans/beancontext/BeanContextServicesSupport$BCSSServiceProvider.h>
#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServicesSupport.h>
#include <jcpp.h>

using $BeanContextServiceProvider = ::java::beans::beancontext::BeanContextServiceProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextServicesSupport$BCSSServiceProvider::init$($Class* sc, $BeanContextServiceProvider* bcsp) {
	$set(this, serviceProvider, bcsp);
}

$BeanContextServiceProvider* BeanContextServicesSupport$BCSSServiceProvider::getServiceProvider() {
	return this->serviceProvider;
}

BeanContextServicesSupport$BCSSServiceProvider::BeanContextServicesSupport$BCSSServiceProvider() {
}

$Class* BeanContextServicesSupport$BCSSServiceProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextServicesSupport$BCSSServiceProvider, serialVersionUID)},
		{"serviceProvider", "Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, $PROTECTED, $field(BeanContextServicesSupport$BCSSServiceProvider, serviceProvider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/beans/beancontext/BeanContextServiceProvider;)V", "(Ljava/lang/Class<*>;Ljava/beans/beancontext/BeanContextServiceProvider;)V", 0, $method(BeanContextServicesSupport$BCSSServiceProvider, init$, void, $Class*, $BeanContextServiceProvider*)},
		{"getServiceProvider", "()Ljava/beans/beancontext/BeanContextServiceProvider;", nullptr, $PROTECTED, $virtualMethod(BeanContextServicesSupport$BCSSServiceProvider, getServiceProvider, $BeanContextServiceProvider*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.beancontext.BeanContextServicesSupport$BCSSServiceProvider", "java.beans.beancontext.BeanContextServicesSupport", "BCSSServiceProvider", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.beancontext.BeanContextServicesSupport$BCSSServiceProvider",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.beancontext.BeanContextServicesSupport"
	};
	$loadClass(BeanContextServicesSupport$BCSSServiceProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextServicesSupport$BCSSServiceProvider);
	});
	return class$;
}

$Class* BeanContextServicesSupport$BCSSServiceProvider::class$ = nullptr;

		} // beancontext
	} // beans
} // java