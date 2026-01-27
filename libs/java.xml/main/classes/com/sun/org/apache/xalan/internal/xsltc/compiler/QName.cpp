#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <jcpp.h>

#undef EMPTYSTRING

using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _QName_FieldInfo_[] = {
	{"_localname", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(QName, _localname)},
	{"_prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(QName, _prefix)},
	{"_namespace", "Ljava/lang/String;", nullptr, $PRIVATE, $field(QName, _namespace)},
	{"_stringRep", "Ljava/lang/String;", nullptr, $PRIVATE, $field(QName, _stringRep)},
	{"_hashCode", "I", nullptr, $PRIVATE, $field(QName, _hashCode)},
	{}
};

$MethodInfo _QName_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*, $String*)},
	{"clearNamespace", "()V", nullptr, $PUBLIC, $method(QName, clearNamespace, void)},
	{"dump", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(QName, dump, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(QName, equals, bool, Object$*)},
	{"getLocalPart", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(QName, getLocalPart, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(QName, getNamespace, $String*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(QName, getPrefix, $String*)},
	{"getStringRep", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(QName, getStringRep, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(QName, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, toString, $String*)},
	{}
};

$ClassInfo _QName_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.QName",
	"java.lang.Object",
	nullptr,
	_QName_FieldInfo_,
	_QName_MethodInfo_
};

$Object* allocate$QName($Class* clazz) {
	return $of($alloc(QName));
}

void QName::init$($String* namespace$, $String* prefix, $String* localname) {
	$set(this, _namespace, namespace$);
	$set(this, _prefix, prefix);
	$set(this, _localname, localname);
	$init($Constants);
	$set(this, _stringRep, (namespace$ != nullptr && !namespace$->equals($Constants::EMPTYSTRING)) ? ($str({namespace$, $$str(u':'), localname})) : localname);
	this->_hashCode = $nc(this->_stringRep)->hashCode() + 19;
}

void QName::clearNamespace() {
	$init($Constants);
	$set(this, _namespace, $Constants::EMPTYSTRING);
}

$String* QName::toString() {
	return this->_stringRep;
}

$String* QName::getStringRep() {
	return this->_stringRep;
}

bool QName::equals(Object$* other) {
	return ($equals(this, other)) || ($instanceOf(QName, other) && $nc(this->_stringRep)->equals($($nc(($cast(QName, other)))->getStringRep())));
}

$String* QName::getLocalPart() {
	return this->_localname;
}

$String* QName::getNamespace() {
	return this->_namespace;
}

$String* QName::getPrefix() {
	return this->_prefix;
}

int32_t QName::hashCode() {
	return this->_hashCode;
}

$String* QName::dump() {
	return $str({"QName: "_s, this->_namespace, "("_s, this->_prefix, "):"_s, this->_localname});
}

QName::QName() {
}

$Class* QName::load$($String* name, bool initialize) {
	$loadClass(QName, name, initialize, &_QName_ClassInfo_, allocate$QName);
	return class$;
}

$Class* QName::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com