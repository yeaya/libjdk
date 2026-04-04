#include <javax/xml/transform/FactoryFinder$1.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/xml/transform/FactoryFinder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace javax {
	namespace xml {
		namespace transform {

void FactoryFinder$1::init$($Class* val$type) {
	$set(this, val$type, val$type);
}

$Object* FactoryFinder$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ServiceLoader, serviceLoader, $ServiceLoader::load(this->val$type));
	$var($Iterator, iterator, $nc(serviceLoader)->iterator());
	if ($nc(iterator)->hasNext()) {
		return iterator->next();
	} else {
		return nullptr;
	}
}

FactoryFinder$1::FactoryFinder$1() {
}

$Class* FactoryFinder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$type", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(FactoryFinder$1, val$type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(FactoryFinder$1, init$, void, $Class*)},
		{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(FactoryFinder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.xml.transform.FactoryFinder",
		"findServiceProvider",
		"(Ljava/lang/Class;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.transform.FactoryFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.transform.FactoryFinder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.transform.FactoryFinder"
	};
	$loadClass(FactoryFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$1);
	});
	return class$;
}

$Class* FactoryFinder$1::class$ = nullptr;

		} // transform
	} // xml
} // javax