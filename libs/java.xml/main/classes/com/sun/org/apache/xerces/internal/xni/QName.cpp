#include <com/sun/org/apache/xerces/internal/xni/QName.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$FieldInfo _QName_FieldInfo_[] = {
	{"prefix", "Ljava/lang/String;", nullptr, $PUBLIC, $field(QName, prefix)},
	{"localpart", "Ljava/lang/String;", nullptr, $PUBLIC, $field(QName, localpart)},
	{"rawname", "Ljava/lang/String;", nullptr, $PUBLIC, $field(QName, rawname)},
	{"uri", "Ljava/lang/String;", nullptr, $PUBLIC, $field(QName, uri)},
	{}
};

$MethodInfo _QName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(QName, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $method(QName, init$, void, QName*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(QName, clear, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(QName, clone, $Object*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(QName, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(QName, hashCode, int32_t)},
	{"setValues", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $virtualMethod(QName, setValues, void, QName*)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(QName, setValues, void, $String*, $String*, $String*, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, toString, $String*)},
	{}
};

$ClassInfo _QName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xni.QName",
	"java.lang.Object",
	"java.lang.Cloneable",
	_QName_FieldInfo_,
	_QName_MethodInfo_
};

$Object* allocate$QName($Class* clazz) {
	return $of($alloc(QName));
}

void QName::init$() {
	clear();
}

void QName::init$($String* prefix, $String* localpart, $String* rawname, $String* uri) {
	setValues(prefix, localpart, rawname, uri);
}

void QName::init$(QName* qname) {
	setValues(qname);
}

void QName::setValues(QName* qname) {
	$set(this, prefix, $nc(qname)->prefix);
	$set(this, localpart, qname->localpart);
	$set(this, rawname, qname->rawname);
	$set(this, uri, qname->uri);
}

void QName::setValues($String* prefix, $String* localpart, $String* rawname, $String* uri) {
	$set(this, prefix, prefix);
	$set(this, localpart, localpart);
	$set(this, rawname, rawname);
	$set(this, uri, uri);
}

void QName::clear() {
	$set(this, prefix, nullptr);
	$set(this, localpart, nullptr);
	$set(this, rawname, nullptr);
	$set(this, uri, nullptr);
}

$Object* QName::clone() {
	return $of($new(QName, this));
}

int32_t QName::hashCode() {
	if (this->uri != nullptr) {
		int32_t var$0 = $nc(this->uri)->hashCode();
		return var$0 + ((this->localpart != nullptr) ? $nc(this->localpart)->hashCode() : 0);
	}
	return (this->rawname != nullptr) ? $nc(this->rawname)->hashCode() : 0;
}

bool QName::equals(Object$* object) {
	if ($equals(object, this)) {
		return true;
	}
	if (object != nullptr && $instanceOf(QName, object)) {
		$var(QName, qname, $cast(QName, object));
		if (qname->uri != nullptr) {
			bool var$0 = $nc(qname->localpart)->equals(this->localpart);
			return var$0 && $nc(qname->uri)->equals(this->uri);
		} else if (this->uri == nullptr) {
			return $nc(this->rawname)->equals(qname->rawname);
		}
	}
	return false;
}

$String* QName::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, str, $new($StringBuffer));
	bool comma = false;
	if (this->prefix != nullptr) {
		str->append($$str({"prefix=\""_s, this->prefix, $$str(u'\"')}));
		comma = true;
	}
	if (this->localpart != nullptr) {
		if (comma) {
			str->append(u',');
		}
		str->append($$str({"localpart=\""_s, this->localpart, $$str(u'\"')}));
		comma = true;
	}
	if (this->rawname != nullptr) {
		if (comma) {
			str->append(u',');
		}
		str->append($$str({"rawname=\""_s, this->rawname, $$str(u'\"')}));
		comma = true;
	}
	if (this->uri != nullptr) {
		if (comma) {
			str->append(u',');
		}
		str->append($$str({"uri=\""_s, this->uri, $$str(u'\"')}));
	}
	return str->toString();
}

QName::QName() {
}

$Class* QName::load$($String* name, bool initialize) {
	$loadClass(QName, name, initialize, &_QName_ClassInfo_, allocate$QName);
	return class$;
}

$Class* QName::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com