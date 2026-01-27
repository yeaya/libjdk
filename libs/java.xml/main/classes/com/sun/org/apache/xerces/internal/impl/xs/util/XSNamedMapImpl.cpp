#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$XSNamedMapEntry.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

#undef EMPTY_MAP
#undef NULL_NS_URI

using $XSNamedMapImpl$XSNamedMapEntryArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$XSNamedMapEntry>;
using $SymbolHashArray = $Array<::com::sun::org::apache::xerces::internal::util::SymbolHash>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $XSNamedMapImpl$1 = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$1;
using $XSNamedMapImpl$XSNamedMapEntry = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$XSNamedMapEntry;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $XMLConstants = ::javax::xml::XMLConstants;
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

$FieldInfo _XSNamedMapImpl_FieldInfo_[] = {
	{"EMPTY_MAP", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSNamedMapImpl, EMPTY_MAP)},
	{"fNamespaces", "[Ljava/lang/String;", nullptr, $FINAL, $field(XSNamedMapImpl, fNamespaces)},
	{"fNSNum", "I", nullptr, $FINAL, $field(XSNamedMapImpl, fNSNum)},
	{"fMaps", "[Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $FINAL, $field(XSNamedMapImpl, fMaps)},
	{"fArray", "[Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, 0, $field(XSNamedMapImpl, fArray)},
	{"fLength", "I", nullptr, 0, $field(XSNamedMapImpl, fLength)},
	{"fEntrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;>;", $PRIVATE, $field(XSNamedMapImpl, fEntrySet)},
	{}
};

$MethodInfo _XSNamedMapImpl_MethodInfo_[] = {
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/SymbolHash;)V", nullptr, $PUBLIC, $method(XSNamedMapImpl, init$, void, $String*, $SymbolHash*)},
	{"<init>", "([Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/util/SymbolHash;I)V", nullptr, $PUBLIC, $method(XSNamedMapImpl, init$, void, $StringArray*, $SymbolHashArray*, int32_t)},
	{"<init>", "([Lcom/sun/org/apache/xerces/internal/xs/XSObject;I)V", nullptr, $PUBLIC, $method(XSNamedMapImpl, init$, void, $XSObjectArray*, int32_t)},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl, containsKey, bool, Object$*)},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSNamedMapImpl, entrySet, $Set*)},
	{"get", "(Ljava/lang/Object;)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl, get, $Object*, Object$*)},
	{"getLength", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSNamedMapImpl, getLength, int32_t)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $STATIC, $staticMethod(XSNamedMapImpl, isEqual, bool, $String*, $String*)},
	{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSNamedMapImpl, item, $XSObject*, int32_t)},
	{"itemByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl, itemByName, $XSObject*, $String*, $String*)},
	{"*keySet", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"*merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*putAll", "(Ljava/util/Map;)V", nullptr, $PUBLIC},
	{"*putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*replaceAll", "(Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl, size, int32_t)},
	{"*values", "()Ljava/util/Collection;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSNamedMapImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$XSNamedMapEntry", "com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl", "XSNamedMapEntry", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XSNamedMapImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl",
	"java.util.AbstractMap",
	"com.sun.org.apache.xerces.internal.xs.XSNamedMap",
	_XSNamedMapImpl_FieldInfo_,
	_XSNamedMapImpl_MethodInfo_,
	"Ljava/util/AbstractMap<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;",
	nullptr,
	_XSNamedMapImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$XSNamedMapEntry,com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1,com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1$1"
};

$Object* allocate$XSNamedMapImpl($Class* clazz) {
	return $of($alloc(XSNamedMapImpl));
}

bool XSNamedMapImpl::isEmpty() {
	 return this->$AbstractMap::isEmpty();
}

bool XSNamedMapImpl::containsValue(Object$* arg0) {
	 return this->$AbstractMap::containsValue(arg0);
}

$Object* XSNamedMapImpl::put(Object$* arg0, Object$* arg1) {
	 return this->$AbstractMap::put(arg0, arg1);
}

$Object* XSNamedMapImpl::remove(Object$* arg0) {
	 return this->$AbstractMap::remove(arg0);
}

void XSNamedMapImpl::putAll($Map* arg0) {
	this->$AbstractMap::putAll(arg0);
}

void XSNamedMapImpl::clear() {
	this->$AbstractMap::clear();
}

$Set* XSNamedMapImpl::keySet() {
	 return this->$AbstractMap::keySet();
}

$Collection* XSNamedMapImpl::values() {
	 return this->$AbstractMap::values();
}

bool XSNamedMapImpl::equals(Object$* arg0) {
	 return this->$AbstractMap::equals(arg0);
}

int32_t XSNamedMapImpl::hashCode() {
	 return this->$AbstractMap::hashCode();
}

$String* XSNamedMapImpl::toString() {
	 return this->$AbstractMap::toString();
}

$Object* XSNamedMapImpl::clone() {
	 return this->$AbstractMap::clone();
}

$Object* XSNamedMapImpl::getOrDefault(Object$* arg0, Object$* arg1) {
	 return this->$AbstractMap::getOrDefault(arg0, arg1);
}

void XSNamedMapImpl::forEach($BiConsumer* arg0) {
	this->$AbstractMap::forEach(arg0);
}

void XSNamedMapImpl::replaceAll($BiFunction* arg0) {
	this->$AbstractMap::replaceAll(arg0);
}

$Object* XSNamedMapImpl::putIfAbsent(Object$* arg0, Object$* arg1) {
	 return this->$AbstractMap::putIfAbsent(arg0, arg1);
}

bool XSNamedMapImpl::remove(Object$* arg0, Object$* arg1) {
	 return this->$AbstractMap::remove(arg0, arg1);
}

bool XSNamedMapImpl::replace(Object$* arg0, Object$* arg1, Object$* arg2) {
	 return this->$AbstractMap::replace(arg0, arg1, arg2);
}

$Object* XSNamedMapImpl::replace(Object$* arg0, Object$* arg1) {
	 return this->$AbstractMap::replace(arg0, arg1);
}

$Object* XSNamedMapImpl::computeIfAbsent(Object$* arg0, $Function* arg1) {
	 return this->$AbstractMap::computeIfAbsent(arg0, arg1);
}

$Object* XSNamedMapImpl::computeIfPresent(Object$* arg0, $BiFunction* arg1) {
	 return this->$AbstractMap::computeIfPresent(arg0, arg1);
}

$Object* XSNamedMapImpl::compute(Object$* arg0, $BiFunction* arg1) {
	 return this->$AbstractMap::compute(arg0, arg1);
}

$Object* XSNamedMapImpl::merge(Object$* arg0, Object$* arg1, $BiFunction* arg2) {
	 return this->$AbstractMap::merge(arg0, arg1, arg2);
}

void XSNamedMapImpl::finalize() {
	this->$AbstractMap::finalize();
}

XSNamedMapImpl* XSNamedMapImpl::EMPTY_MAP = nullptr;

void XSNamedMapImpl::init$($String* namespace$, $SymbolHash* map) {
	$AbstractMap::init$();
	$set(this, fArray, nullptr);
	this->fLength = -1;
	$set(this, fEntrySet, nullptr);
	$set(this, fNamespaces, $new($StringArray, {namespace$}));
	$set(this, fMaps, $new($SymbolHashArray, {map}));
	this->fNSNum = 1;
}

void XSNamedMapImpl::init$($StringArray* namespaces, $SymbolHashArray* maps, int32_t num) {
	$AbstractMap::init$();
	$set(this, fArray, nullptr);
	this->fLength = -1;
	$set(this, fEntrySet, nullptr);
	$set(this, fNamespaces, namespaces);
	$set(this, fMaps, maps);
	this->fNSNum = num;
}

void XSNamedMapImpl::init$($XSObjectArray* array, int32_t length) {
	$AbstractMap::init$();
	$set(this, fArray, nullptr);
	this->fLength = -1;
	$set(this, fEntrySet, nullptr);
	if (length == 0) {
		$set(this, fNamespaces, nullptr);
		$set(this, fMaps, nullptr);
		this->fNSNum = 0;
		$set(this, fArray, array);
		this->fLength = 0;
		return;
	}
	$set(this, fNamespaces, $new($StringArray, {$($nc($nc(array)->get(0))->getNamespace())}));
	$set(this, fMaps, nullptr);
	this->fNSNum = 1;
	$set(this, fArray, array);
	this->fLength = length;
}

int32_t XSNamedMapImpl::getLength() {
	$synchronized(this) {
		if (this->fLength == -1) {
			this->fLength = 0;
			for (int32_t i = 0; i < this->fNSNum; ++i) {
				this->fLength += $nc($nc(this->fMaps)->get(i))->getLength();
			}
		}
		return this->fLength;
	}
}

$XSObject* XSNamedMapImpl::itemByName($String* namespace$, $String* localName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fNSNum; ++i) {
		if (isEqual(namespace$, $nc(this->fNamespaces)->get(i))) {
			if (this->fMaps != nullptr) {
				return $cast($XSObject, $nc($nc(this->fMaps)->get(i))->get(localName));
			}
			$var($XSObject, ret, nullptr);
			for (int32_t j = 0; j < this->fLength; ++j) {
				$assign(ret, $nc(this->fArray)->get(j));
				if ($nc($($nc(ret)->getName()))->equals(localName)) {
					return ret;
				}
			}
			return nullptr;
		}
	}
	return nullptr;
}

$XSObject* XSNamedMapImpl::item(int32_t index) {
	$synchronized(this) {
		if (this->fArray == nullptr) {
			getLength();
			$set(this, fArray, $new($XSObjectArray, this->fLength));
			int32_t pos = 0;
			for (int32_t i = 0; i < this->fNSNum; ++i) {
				pos += $nc($nc(this->fMaps)->get(i))->getValues(this->fArray, pos);
			}
		}
		if (index < 0 || index >= this->fLength) {
			return nullptr;
		}
		return $nc(this->fArray)->get(index);
	}
}

bool XSNamedMapImpl::isEqual($String* one, $String* two) {
	$init(XSNamedMapImpl);
	return (one != nullptr) ? $nc(one)->equals(two) : (two == nullptr);
}

bool XSNamedMapImpl::containsKey(Object$* key) {
	return ($cast($XSObject, get(key)) != nullptr);
}

$Object* XSNamedMapImpl::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($QName, key)) {
		$var($QName, name, $cast($QName, key));
		$var($String, namespaceURI, $nc(name)->getNamespaceURI());
		$init($XMLConstants);
		if ($nc($XMLConstants::NULL_NS_URI)->equals(namespaceURI)) {
			$assign(namespaceURI, nullptr);
		}
		$var($String, localPart, name->getLocalPart());
		return $of(itemByName(namespaceURI, localPart));
	}
	return $of(nullptr);
}

int32_t XSNamedMapImpl::size() {
	return getLength();
}

$Set* XSNamedMapImpl::entrySet() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fEntrySet == nullptr) {
			int32_t length = getLength();
			$var($XSNamedMapImpl$XSNamedMapEntryArray, entries, $new($XSNamedMapImpl$XSNamedMapEntryArray, length));
			for (int32_t i = 0; i < length; ++i) {
				$var($XSObject, xso, item(i));
				$var($String, var$0, $nc(xso)->getNamespace());
				entries->set(i, $$new($XSNamedMapImpl$XSNamedMapEntry, $$new($QName, var$0, $(xso->getName())), xso));
			}
			$set(this, fEntrySet, $new($XSNamedMapImpl$1, this, length, entries));
		}
		return this->fEntrySet;
	}
}

void clinit$XSNamedMapImpl($Class* class$) {
	$assignStatic(XSNamedMapImpl::EMPTY_MAP, $new(XSNamedMapImpl, $$new($XSObjectArray, 0), 0));
}

XSNamedMapImpl::XSNamedMapImpl() {
}

$Class* XSNamedMapImpl::load$($String* name, bool initialize) {
	$loadClass(XSNamedMapImpl, name, initialize, &_XSNamedMapImpl_ClassInfo_, clinit$XSNamedMapImpl, allocate$XSNamedMapImpl);
	return class$;
}

$Class* XSNamedMapImpl::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com