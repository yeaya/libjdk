#include <com/sun/org/apache/xerces/internal/impl/dv/xs/QNameDV$XQName.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/QNameDV.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1QName = ::javax::xml::namespace$::QName;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$Object* QNameDV$XQName::clone() {
	 return this->$QName::clone();
}

int32_t QNameDV$XQName::hashCode() {
	 return this->$QName::hashCode();
}

void QNameDV$XQName::finalize() {
	this->$QName::finalize();
}

void QNameDV$XQName::init$($String* prefix, $String* localpart, $String* rawname, $String* uri) {
	$QName::init$();
	setValues(prefix, localpart, rawname, uri);
}

bool QNameDV$XQName::equals(Object$* object) {
	if ($instanceOf($QName, object)) {
		$var($QName, qname, $cast($QName, object));
		return this->uri == qname->uri && this->localpart == qname->localpart;
	}
	return false;
}

$String* QNameDV$XQName::toString() {
	$synchronized(this) {
		return this->rawname;
	}
}

$1QName* QNameDV$XQName::getJAXPQName() {
	return $new($1QName, this->uri, this->localpart, this->prefix);
}

$QName* QNameDV$XQName::getXNIQName() {
	return this;
}

QNameDV$XQName::QNameDV$XQName() {
}

$Class* QNameDV$XQName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QNameDV$XQName, init$, void, $String*, $String*, $String*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(QNameDV$XQName, equals, bool, Object$*)},
		{"getJAXPQName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(QNameDV$XQName, getJAXPQName, $1QName*)},
		{"getXNIQName", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(QNameDV$XQName, getXNIQName, $QName*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(QNameDV$XQName, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName", "com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV", "XQName", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName",
		"com.sun.org.apache.xerces.internal.xni.QName",
		"com.sun.org.apache.xerces.internal.xs.datatypes.XSQName",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV"
	};
	$loadClass(QNameDV$XQName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(QNameDV$XQName));
	});
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