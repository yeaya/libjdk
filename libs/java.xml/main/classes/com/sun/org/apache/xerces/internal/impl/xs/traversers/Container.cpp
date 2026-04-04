#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/Container.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/LargeContainer.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/SmallContainer.h>
#include <jcpp.h>

#undef THRESHOLD

using $LargeContainer = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::LargeContainer;
using $OneAttr = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr;
using $SmallContainer = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::SmallContainer;
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

void Container::init$() {
	this->pos = 0;
}

Container* Container::getContainer(int32_t size) {
	if (size > Container::THRESHOLD) {
		return $new($LargeContainer, size);
	} else {
		return $new($SmallContainer, size);
	}
}

Container::Container() {
}

$Class* Container::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(Container, THRESHOLD)},
		{"values", "[Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;", nullptr, 0, $field(Container, values)},
		{"pos", "I", nullptr, 0, $field(Container, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Container, init$, void)},
		{"get", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;", nullptr, $ABSTRACT, $virtualMethod(Container, get, $OneAttr*, $String*)},
		{"getContainer", "(I)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/Container;", nullptr, $STATIC, $staticMethod(Container, getContainer, Container*, int32_t)},
		{"put", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;)V", nullptr, $ABSTRACT, $virtualMethod(Container, put, void, $String*, $OneAttr*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.Container",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Container, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Container);
	});
	return class$;
}

$Class* Container::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com