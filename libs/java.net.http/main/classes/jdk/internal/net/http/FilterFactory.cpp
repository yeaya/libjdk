#include <jdk/internal/net/http/FilterFactory.h>
#include <java/lang/InternalError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <jdk/internal/net/http/HeaderFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $HeaderFilter = ::jdk::internal::net::http::HeaderFilter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void FilterFactory::init$() {
	$set(this, filterClasses, $new($LinkedList));
}

void FilterFactory::addFilter($Class* type) {
	this->filterClasses->add(type);
}

$LinkedList* FilterFactory::getFilterChain() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($LinkedList, l, $new($LinkedList));
	{
		$var($Iterator, i$, this->filterClasses->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* clazz = $cast($Class, i$->next());
			try {
				$var($HeaderFilter, headerFilter, $cast($HeaderFilter, $$nc($nc(clazz)->getConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
				l->add(headerFilter);
			} catch ($ReflectiveOperationException& e) {
				$throwNew($InternalError, e);
			}
		}
	}
	return l;
}

FilterFactory::FilterFactory() {
}

$Class* FilterFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filterClasses", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/lang/Class<+Ljdk/internal/net/http/HeaderFilter;>;>;", $FINAL, $field(FilterFactory, filterClasses)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FilterFactory, init$, void)},
		{"addFilter", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+Ljdk/internal/net/http/HeaderFilter;>;)V", $PUBLIC, $virtualMethod(FilterFactory, addFilter, void, $Class*)},
		{"getFilterChain", "()Ljava/util/LinkedList;", "()Ljava/util/LinkedList<Ljdk/internal/net/http/HeaderFilter;>;", 0, $virtualMethod(FilterFactory, getFilterChain, $LinkedList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.FilterFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FilterFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilterFactory);
	});
	return class$;
}

$Class* FilterFactory::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk