#include <com/sun/org/apache/xerces/internal/impl/dv/xs/Base64BinaryDV$XBase64.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/util/Base64.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/util/ByteListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/Base64BinaryDV.h>
#include <jcpp.h>

using $Base64 = ::com::sun::org::apache::xerces::internal::impl::dv::util::Base64;
using $ByteListImpl = ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

void Base64BinaryDV$XBase64::init$($bytes* data) {
	$ByteListImpl::init$(data);
}

$String* Base64BinaryDV$XBase64::toString() {
	$synchronized(this) {
		if (this->canonical == nullptr) {
			$set(this, canonical, $Base64::encode(this->data));
		}
		return this->canonical;
	}
}

bool Base64BinaryDV$XBase64::equals(Object$* obj) {
	if (!($instanceOf(Base64BinaryDV$XBase64, obj))) {
		return false;
	}
	$var($bytes, odata, $nc($cast(Base64BinaryDV$XBase64, obj))->data);
	int32_t len = $nc(this->data)->length;
	if (len != $nc(odata)->length) {
		return false;
	}
	for (int32_t i = 0; i < len; ++i) {
		if (this->data->get(i) != odata->get(i)) {
			return false;
		}
	}
	return true;
}

int32_t Base64BinaryDV$XBase64::hashCode() {
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(this->data)->length; ++i) {
		hash = hash * 37 + (((int32_t)this->data->get(i)) & 0xff);
	}
	return hash;
}

Base64BinaryDV$XBase64::Base64BinaryDV$XBase64() {
}

$Class* Base64BinaryDV$XBase64::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(Base64BinaryDV$XBase64, init$, void, $bytes*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Base64BinaryDV$XBase64, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Base64BinaryDV$XBase64, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Base64BinaryDV$XBase64, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV$XBase64", "com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV", "XBase64", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV$XBase64",
		"com.sun.org.apache.xerces.internal.impl.dv.util.ByteListImpl",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV"
	};
	$loadClass(Base64BinaryDV$XBase64, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Base64BinaryDV$XBase64));
	});
	return class$;
}

$Class* Base64BinaryDV$XBase64::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com