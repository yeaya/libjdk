#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMap4Types.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

using $SymbolHashArray = $Array<::com::sun::org::apache::xerces::internal::util::SymbolHash>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $XSNamedMapImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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
								namespace util {

$FieldInfo _XSNamedMap4Types_FieldInfo_[] = {
	{"fType", "S", nullptr, $PRIVATE | $FINAL, $field(XSNamedMap4Types, fType)},
	{}
};

$MethodInfo _XSNamedMap4Types_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/SymbolHash;S)V", nullptr, $PUBLIC, $method(XSNamedMap4Types, init$, void, $String*, $SymbolHash*, int16_t)},
	{"<init>", "([Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/util/SymbolHash;IS)V", nullptr, $PUBLIC, $method(XSNamedMap4Types, init$, void, $StringArray*, $SymbolHashArray*, int32_t, int16_t)},
	{"getLength", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSNamedMap4Types, getLength, int32_t)},
	{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSNamedMap4Types, item, $XSObject*, int32_t)},
	{"itemByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSNamedMap4Types, itemByName, $XSObject*, $String*, $String*)},
	{}
};

$ClassInfo _XSNamedMap4Types_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMap4Types",
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl",
	nullptr,
	_XSNamedMap4Types_FieldInfo_,
	_XSNamedMap4Types_MethodInfo_
};

$Object* allocate$XSNamedMap4Types($Class* clazz) {
	return $of($alloc(XSNamedMap4Types));
}

void XSNamedMap4Types::init$($String* namespace$, $SymbolHash* map, int16_t type) {
	$XSNamedMapImpl::init$(namespace$, map);
	this->fType = type;
}

void XSNamedMap4Types::init$($StringArray* namespaces, $SymbolHashArray* maps, int32_t num, int16_t type) {
	$XSNamedMapImpl::init$(namespaces, maps, num);
	this->fType = type;
}

int32_t XSNamedMap4Types::getLength() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->fLength == -1) {
			int32_t length = 0;
			for (int32_t i = 0; i < this->fNSNum; ++i) {
				length += $nc($nc(this->fMaps)->get(i))->getLength();
			}
			int32_t pos = 0;
			$var($XSObjectArray, array, $new($XSObjectArray, length));
			for (int32_t i = 0; i < this->fNSNum; ++i) {
				pos += $nc($nc(this->fMaps)->get(i))->getValues(array, pos);
			}
			this->fLength = 0;
			$set(this, fArray, $new($XSObjectArray, length));
			$var($XSTypeDefinition, type, nullptr);
			for (int32_t i = 0; i < length; ++i) {
				$assign(type, $cast($XSTypeDefinition, array->get(i)));
				if ($nc(type)->getTypeCategory() == this->fType) {
					$nc(this->fArray)->set(this->fLength++, type);
				}
			}
		}
		return this->fLength;
	}
}

$XSObject* XSNamedMap4Types::itemByName($String* namespace$, $String* localName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fNSNum; ++i) {
		if (isEqual(namespace$, $nc(this->fNamespaces)->get(i))) {
			$var($XSTypeDefinition, type, $cast($XSTypeDefinition, $nc($nc(this->fMaps)->get(i))->get(localName)));
			if (type != nullptr && type->getTypeCategory() == this->fType) {
				return type;
			}
			return nullptr;
		}
	}
	return nullptr;
}

$XSObject* XSNamedMap4Types::item(int32_t index) {
	$synchronized(this) {
		if (this->fArray == nullptr) {
			getLength();
		}
		if (index < 0 || index >= this->fLength) {
			return nullptr;
		}
		return $nc(this->fArray)->get(index);
	}
}

XSNamedMap4Types::XSNamedMap4Types() {
}

$Class* XSNamedMap4Types::load$($String* name, bool initialize) {
	$loadClass(XSNamedMap4Types, name, initialize, &_XSNamedMap4Types_ClassInfo_, allocate$XSNamedMap4Types);
	return class$;
}

$Class* XSNamedMap4Types::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com