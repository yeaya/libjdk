#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/LargeContainer.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/Container.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $OneAttrArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr>;
using $Container = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::Container;
using $OneAttr = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::OneAttr;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _LargeContainer_FieldInfo_[] = {
	{"items", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;>;", 0, $field(LargeContainer, items)},
	{}
};

$MethodInfo _LargeContainer_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(LargeContainer, init$, void, int32_t)},
	{"get", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;", nullptr, 0, $virtualMethod(LargeContainer, get, $OneAttr*, $String*)},
	{"put", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr;)V", nullptr, 0, $virtualMethod(LargeContainer, put, void, $String*, $OneAttr*)},
	{}
};

$ClassInfo _LargeContainer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.LargeContainer",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.Container",
	nullptr,
	_LargeContainer_FieldInfo_,
	_LargeContainer_MethodInfo_
};

$Object* allocate$LargeContainer($Class* clazz) {
	return $of($alloc(LargeContainer));
}

void LargeContainer::init$(int32_t size) {
	$Container::init$();
	$set(this, items, $new($HashMap, size * 2 + 1));
	$set(this, values, $new($OneAttrArray, size));
}

void LargeContainer::put($String* key, $OneAttr* value) {
	$nc(this->items)->put(key, value);
	$nc(this->values)->set(this->pos++, value);
}

$OneAttr* LargeContainer::get($String* key) {
	$var($OneAttr, ret, $cast($OneAttr, $nc(this->items)->get(key)));
	return ret;
}

LargeContainer::LargeContainer() {
}

$Class* LargeContainer::load$($String* name, bool initialize) {
	$loadClass(LargeContainer, name, initialize, &_LargeContainer_ClassInfo_, allocate$LargeContainer);
	return class$;
}

$Class* LargeContainer::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com