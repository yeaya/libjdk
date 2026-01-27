#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMAny.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <jcpp.h>

using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
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
							namespace dtd {
								namespace models {

$FieldInfo _CMAny_FieldInfo_[] = {
	{"fType", "I", nullptr, $PRIVATE, $field(CMAny, fType)},
	{"fURI", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CMAny, fURI)},
	{"fPosition", "I", nullptr, $PRIVATE, $field(CMAny, fPosition)},
	{}
};

$MethodInfo _CMAny_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;I)V", nullptr, $PUBLIC, $method(CMAny, init$, void, int32_t, $String*, int32_t)},
	{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(CMAny, calcFirstPos, void, $CMStateSet*)},
	{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(CMAny, calcLastPos, void, $CMStateSet*)},
	{"getPosition", "()I", nullptr, $FINAL, $method(CMAny, getPosition, int32_t)},
	{"getType", "()I", nullptr, $FINAL, $method(CMAny, getType, int32_t)},
	{"getURI", "()Ljava/lang/String;", nullptr, $FINAL, $method(CMAny, getURI, $String*)},
	{"isNullable", "()Z", nullptr, $PUBLIC, $virtualMethod(CMAny, isNullable, bool)},
	{"setPosition", "(I)V", nullptr, $FINAL, $method(CMAny, setPosition, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CMAny, toString, $String*)},
	{}
};

$ClassInfo _CMAny_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMAny",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
	nullptr,
	_CMAny_FieldInfo_,
	_CMAny_MethodInfo_
};

$Object* allocate$CMAny($Class* clazz) {
	return $of($alloc(CMAny));
}

void CMAny::init$(int32_t type, $String* uri, int32_t position) {
	$CMNode::init$(type);
	this->fPosition = -1;
	this->fType = type;
	$set(this, fURI, uri);
	this->fPosition = position;
}

int32_t CMAny::getType() {
	return this->fType;
}

$String* CMAny::getURI() {
	return this->fURI;
}

int32_t CMAny::getPosition() {
	return this->fPosition;
}

void CMAny::setPosition(int32_t newPosition) {
	this->fPosition = newPosition;
}

bool CMAny::isNullable() {
	return (this->fPosition == -1);
}

$String* CMAny::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, strRet, $new($StringBuilder));
	strRet->append("("_s);
	strRet->append("##any:uri="_s);
	strRet->append(this->fURI);
	strRet->append(u')');
	if (this->fPosition >= 0) {
		strRet->append($$str({" (Pos:"_s, $$str(this->fPosition), ")"_s}));
	}
	return strRet->toString();
}

void CMAny::calcFirstPos($CMStateSet* toSet) {
	if (this->fPosition == -1) {
		$nc(toSet)->zeroBits();
	} else {
		$nc(toSet)->setBit(this->fPosition);
	}
}

void CMAny::calcLastPos($CMStateSet* toSet) {
	if (this->fPosition == -1) {
		$nc(toSet)->zeroBits();
	} else {
		$nc(toSet)->setBit(this->fPosition);
	}
}

CMAny::CMAny() {
}

$Class* CMAny::load$($String* name, bool initialize) {
	$loadClass(CMAny, name, initialize, &_CMAny_ClassInfo_, allocate$CMAny);
	return class$;
}

$Class* CMAny::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com