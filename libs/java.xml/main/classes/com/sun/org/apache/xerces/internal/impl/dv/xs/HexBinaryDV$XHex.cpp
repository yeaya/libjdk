#include <com/sun/org/apache/xerces/internal/impl/dv/xs/HexBinaryDV$XHex.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/util/ByteListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/util/HexBin.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/HexBinaryDV.h>
#include <jcpp.h>

using $ByteListImpl = ::com::sun::org::apache::xerces::internal::impl::dv::util::ByteListImpl;
using $HexBin = ::com::sun::org::apache::xerces::internal::impl::dv::util::HexBin;
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

void HexBinaryDV$XHex::init$($bytes* data) {
	$ByteListImpl::init$(data);
}

$String* HexBinaryDV$XHex::toString() {
	$synchronized(this) {
		if (this->canonical == nullptr) {
			$set(this, canonical, $HexBin::encode(this->data));
		}
		return this->canonical;
	}
}

bool HexBinaryDV$XHex::equals(Object$* obj) {
	if (!($instanceOf(HexBinaryDV$XHex, obj))) {
		return false;
	}
	$var($bytes, odata, $nc($cast(HexBinaryDV$XHex, obj))->data);
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

int32_t HexBinaryDV$XHex::hashCode() {
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(this->data)->length; ++i) {
		hash = hash * 37 + (((int32_t)this->data->get(i)) & 0xff);
	}
	return hash;
}

HexBinaryDV$XHex::HexBinaryDV$XHex() {
}

$Class* HexBinaryDV$XHex::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(HexBinaryDV$XHex, init$, void, $bytes*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(HexBinaryDV$XHex, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(HexBinaryDV$XHex, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(HexBinaryDV$XHex, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV$XHex", "com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV", "XHex", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV$XHex",
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
		"com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV"
	};
	$loadClass(HexBinaryDV$XHex, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HexBinaryDV$XHex));
	});
	return class$;
}

$Class* HexBinaryDV$XHex::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com