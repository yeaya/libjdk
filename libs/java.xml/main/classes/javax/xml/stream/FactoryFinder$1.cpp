#include <javax/xml/stream/FactoryFinder$1.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/xml/stream/FactoryFinder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace javax {
	namespace xml {
		namespace stream {

void FactoryFinder$1::init$($ClassLoader* val$cl, $Class* val$type) {
	$set(this, val$cl, val$cl);
	$set(this, val$type, val$type);
}

$Object* FactoryFinder$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ServiceLoader, serviceLoader, nullptr);
	if (this->val$cl == nullptr) {
		$assign(serviceLoader, $ServiceLoader::load(this->val$type));
	} else {
		$assign(serviceLoader, $ServiceLoader::load(this->val$type, this->val$cl));
	}
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
		{"val$cl", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(FactoryFinder$1, val$cl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/Class;)V", "()V", 0, $method(FactoryFinder$1, init$, void, $ClassLoader*, $Class*)},
		{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(FactoryFinder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.xml.stream.FactoryFinder",
		"findServiceProvider",
		"(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.stream.FactoryFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.stream.FactoryFinder$1",
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
		"javax.xml.stream.FactoryFinder"
	};
	$loadClass(FactoryFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FactoryFinder$1);
	});
	return class$;
}

$Class* FactoryFinder$1::class$ = nullptr;

		} // stream
	} // xml
} // javax