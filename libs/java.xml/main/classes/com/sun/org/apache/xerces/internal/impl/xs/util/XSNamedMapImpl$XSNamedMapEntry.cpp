#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$XSNamedMapEntry.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Map$Entry.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;
using $QName = ::javax::xml::namespace$::QName;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _XSNamedMapImpl$XSNamedMapEntry_FieldInfo_[] = {
	{"key", "Ljavax/xml/namespace/QName;", nullptr, $PRIVATE | $FINAL, $field(XSNamedMapImpl$XSNamedMapEntry, key)},
	{"value", "Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PRIVATE | $FINAL, $field(XSNamedMapImpl$XSNamedMapEntry, value)},
	{}
};

$MethodInfo _XSNamedMapImpl$XSNamedMapEntry_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $method(XSNamedMapImpl$XSNamedMapEntry, init$, void, $QName*, $XSObject*)},
	{"equals", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$XSNamedMapEntry;)Z", nullptr, $PUBLIC, $method(XSNamedMapImpl$XSNamedMapEntry, equals, bool, XSNamedMapImpl$XSNamedMapEntry*)},
	{"getKey", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$XSNamedMapEntry, getKey, $Object*)},
	{"getValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$XSNamedMapEntry, getValue, $Object*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$XSNamedMapEntry, hashCode, int32_t)},
	{"setValue", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $method(XSNamedMapImpl$XSNamedMapEntry, setValue, $XSObject*, $XSObject*)},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSNamedMapImpl$XSNamedMapEntry, setValue, $Object*, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$XSNamedMapEntry, toString, $String*)},
	{}
};

$InnerClassInfo _XSNamedMapImpl$XSNamedMapEntry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$XSNamedMapEntry", "com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl", "XSNamedMapEntry", $PRIVATE | $STATIC | $FINAL},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XSNamedMapImpl$XSNamedMapEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$XSNamedMapEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_XSNamedMapImpl$XSNamedMapEntry_FieldInfo_,
	_XSNamedMapImpl$XSNamedMapEntry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;",
	nullptr,
	_XSNamedMapImpl$XSNamedMapEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl"
};

$Object* allocate$XSNamedMapImpl$XSNamedMapEntry($Class* clazz) {
	return $of($alloc(XSNamedMapImpl$XSNamedMapEntry));
}

void XSNamedMapImpl$XSNamedMapEntry::init$($QName* key, $XSObject* value) {
	$set(this, key, key);
	$set(this, value, value);
}

$Object* XSNamedMapImpl$XSNamedMapEntry::getKey() {
	return $of(this->key);
}

$Object* XSNamedMapImpl$XSNamedMapEntry::getValue() {
	return $of(this->value);
}

$XSObject* XSNamedMapImpl$XSNamedMapEntry::setValue($XSObject* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool XSNamedMapImpl$XSNamedMapEntry::equals(XSNamedMapImpl$XSNamedMapEntry* o) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Map$Entry, o)) {
		$var($Map$Entry, e, static_cast<$Map$Entry*>(o));
		$var($QName, otherKey, $cast($QName, $nc(e)->getKey()));
		$var($XSObject, otherValue, $cast($XSObject, e->getValue()));
		bool var$0 = (this->key == nullptr ? otherKey == nullptr : $nc(this->key)->equals(otherKey));
		return var$0 && (this->value == nullptr ? otherValue == nullptr : $nc($of(this->value))->equals(otherValue));
	}
	return false;
}

int32_t XSNamedMapImpl$XSNamedMapEntry::hashCode() {
	int32_t var$0 = (this->key == nullptr ? 0 : $nc(this->key)->hashCode());
	return var$0 ^ (this->value == nullptr ? 0 : $nc($of(this->value))->hashCode());
}

$String* XSNamedMapImpl$XSNamedMapEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buffer, $new($StringBuilder));
	buffer->append($($String::valueOf($of(this->key))));
	buffer->append(u'=');
	buffer->append($($String::valueOf($of(this->value))));
	return buffer->toString();
}

$Object* XSNamedMapImpl$XSNamedMapEntry::setValue(Object$* value) {
	return $of(this->setValue($cast($XSObject, value)));
}

XSNamedMapImpl$XSNamedMapEntry::XSNamedMapImpl$XSNamedMapEntry() {
}

$Class* XSNamedMapImpl$XSNamedMapEntry::load$($String* name, bool initialize) {
	$loadClass(XSNamedMapImpl$XSNamedMapEntry, name, initialize, &_XSNamedMapImpl$XSNamedMapEntry_ClassInfo_, allocate$XSNamedMapImpl$XSNamedMapEntry);
	return class$;
}

$Class* XSNamedMapImpl$XSNamedMapEntry::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com