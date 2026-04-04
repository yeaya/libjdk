#include <com/sun/naming/internal/NamedWeakReference.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

void NamedWeakReference::init$(Object$* referent, $String* name) {
	$WeakReference::init$(referent);
	$set(this, name, name);
}

$String* NamedWeakReference::getName() {
	return this->name;
}

NamedWeakReference::NamedWeakReference() {
}

$Class* NamedWeakReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NamedWeakReference, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/String;)V", "(TT;Ljava/lang/String;)V", 0, $method(NamedWeakReference, init$, void, Object$*, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(NamedWeakReference, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.naming.internal.NamedWeakReference",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;"
	};
	$loadClass(NamedWeakReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedWeakReference);
	});
	return class$;
}

$Class* NamedWeakReference::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com