#include <com/sun/org/apache/xerces/internal/impl/dv/xs/QNameDV$XQName.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/QNameDV.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $1QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$MethodInfo _QNameDV$XQName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QNameDV$XQName, init$, void, $String*, $String*, $String*, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(QNameDV$XQName, equals, bool, Object$*)},
	{"getJAXPQName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(QNameDV$XQName, getJAXPQName, $QName*)},
	{"getXNIQName", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(QNameDV$XQName, getXNIQName, $1QName*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(QNameDV$XQName, toString, $String*)},
	{}
};

$InnerClassInfo _QNameDV$XQName_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName", "com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV", "XQName", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _QNameDV$XQName_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName",
	"com.sun.org.apache.xerces.internal.xni.QName",
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSQName",
	nullptr,
	_QNameDV$XQName_MethodInfo_,
	nullptr,
	nullptr,
	_QNameDV$XQName_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV"
};

$Object* allocate$QNameDV$XQName($Class* clazz) {
	return $of($alloc(QNameDV$XQName));
}

$Object* QNameDV$XQName::clone() {
	 return this->$1QName::clone();
}

int32_t QNameDV$XQName::hashCode() {
	 return this->$1QName::hashCode();
}

void QNameDV$XQName::finalize() {
	this->$1QName::finalize();
}

void QNameDV$XQName::init$($String* prefix, $String* localpart, $String* rawname, $String* uri) {
	$1QName::init$();
	setValues(prefix, localpart, rawname, uri);
}

bool QNameDV$XQName::equals(Object$* object) {
	if ($instanceOf($1QName, object)) {
		$var($1QName, qname, $cast($1QName, object));
		return this->uri == $nc(qname)->uri && this->localpart == qname->localpart;
	}
	return false;
}

$String* QNameDV$XQName::toString() {
	$synchronized(this) {
		return this->rawname;
	}
}

$QName* QNameDV$XQName::getJAXPQName() {
	return $new($QName, this->uri, this->localpart, this->prefix);
}

$1QName* QNameDV$XQName::getXNIQName() {
	return this;
}

QNameDV$XQName::QNameDV$XQName() {
}

$Class* QNameDV$XQName::load$($String* name, bool initialize) {
	$loadClass(QNameDV$XQName, name, initialize, &_QNameDV$XQName_ClassInfo_, allocate$QNameDV$XQName);
	return class$;
}

$Class* QNameDV$XQName::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com