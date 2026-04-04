#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/SmallContainer.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/Container.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr.h>
#include <jcpp.h>

using $OneAttrArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr>;
using $Container = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container;
using $OneAttr = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

void SmallContainer::init$(int32_t size) {
	$Container::init$();
	$set(this, keys, $new($StringArray, size));
	$set(this, values, $new($OneAttrArray, size));
}

void SmallContainer::put($String* key, $OneAttr* value) {
	$nc(this->keys)->set(this->pos, key);
	$nc(this->values)->set(this->pos++, value);
}

$OneAttr* SmallContainer::get($String* key) {
	for (int32_t i = 0; i < this->pos; ++i) {
		if ($nc($nc(this->keys)->get(i))->equals(key)) {
			return $nc(this->values)->get(i);
		}
	}
	return nullptr;
}

SmallContainer::SmallContainer() {
}

$Class* SmallContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keys", "[Ljava/lang/String;", nullptr, 0, $field(SmallContainer, keys)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(SmallContainer, init$, void, int32_t)},
		{"get", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;", nullptr, 0, $virtualMethod(SmallContainer, get, $OneAttr*, $String*)},
		{"put", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;)V", nullptr, 0, $virtualMethod(SmallContainer, put, void, $String*, $OneAttr*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.SmallContainer",
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.Container",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SmallContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SmallContainer);
	});
	return class$;
}

$Class* SmallContainer::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com