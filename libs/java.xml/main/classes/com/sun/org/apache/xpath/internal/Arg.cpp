#include <com/sun/org/apache/xpath/internal/Arg.h>

#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _Arg_FieldInfo_[] = {
	{"m_qname", "Lcom/sun/org/apache/xml/internal/utils/QName;", nullptr, $PRIVATE, $field(Arg, m_qname)},
	{"m_val", "Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PRIVATE, $field(Arg, m_val)},
	{"m_expression", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Arg, m_expression)},
	{"m_isFromWithParam", "Z", nullptr, $PRIVATE, $field(Arg, m_isFromWithParam)},
	{"m_isVisible", "Z", nullptr, $PRIVATE, $field(Arg, m_isVisible)},
	{}
};

$MethodInfo _Arg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Arg, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/QName;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(Arg, init$, void, $QName*, $String*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/QName;Lcom/sun/org/apache/xpath/internal/objects/XObject;)V", nullptr, $PUBLIC, $method(Arg, init$, void, $QName*, $XObject*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/QName;Lcom/sun/org/apache/xpath/internal/objects/XObject;Z)V", nullptr, $PUBLIC, $method(Arg, init$, void, $QName*, $XObject*, bool)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(Arg, detach, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Arg, equals, bool, Object$*)},
	{"getExpression", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Arg, getExpression, $String*)},
	{"getQName", "()Lcom/sun/org/apache/xml/internal/utils/QName;", nullptr, $PUBLIC | $FINAL, $method(Arg, getQName, $QName*)},
	{"getVal", "()Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $FINAL, $method(Arg, getVal, $XObject*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Arg, hashCode, int32_t)},
	{"isFromWithParam", "()Z", nullptr, $PUBLIC, $virtualMethod(Arg, isFromWithParam, bool)},
	{"isVisible", "()Z", nullptr, $PUBLIC, $virtualMethod(Arg, isVisible, bool)},
	{"setExpression", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Arg, setExpression, void, $String*)},
	{"setIsVisible", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Arg, setIsVisible, void, bool)},
	{"setQName", "(Lcom/sun/org/apache/xml/internal/utils/QName;)V", nullptr, $PUBLIC | $FINAL, $method(Arg, setQName, void, $QName*)},
	{"setVal", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)V", nullptr, $PUBLIC | $FINAL, $method(Arg, setVal, void, $XObject*)},
	{}
};

$ClassInfo _Arg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.Arg",
	"java.lang.Object",
	nullptr,
	_Arg_FieldInfo_,
	_Arg_MethodInfo_
};

$Object* allocate$Arg($Class* clazz) {
	return $of($alloc(Arg));
}

$QName* Arg::getQName() {
	return this->m_qname;
}

void Arg::setQName($QName* name) {
	$set(this, m_qname, name);
}

$XObject* Arg::getVal() {
	return this->m_val;
}

void Arg::setVal($XObject* val) {
	$set(this, m_val, val);
}

void Arg::detach() {
	if (nullptr != this->m_val) {
		$nc(this->m_val)->allowDetachToRelease(true);
		$nc(this->m_val)->detach();
	}
}

$String* Arg::getExpression() {
	return this->m_expression;
}

void Arg::setExpression($String* expr) {
	$set(this, m_expression, expr);
}

bool Arg::isFromWithParam() {
	return this->m_isFromWithParam;
}

bool Arg::isVisible() {
	return this->m_isVisible;
}

void Arg::setIsVisible(bool b) {
	this->m_isVisible = b;
}

void Arg::init$() {
	$set(this, m_qname, $new($QName, ""_s));
	$set(this, m_val, nullptr);
	$set(this, m_expression, nullptr);
	this->m_isVisible = true;
	this->m_isFromWithParam = false;
}

void Arg::init$($QName* qname, $String* expression, bool isFromWithParam) {
	$set(this, m_qname, qname);
	$set(this, m_val, nullptr);
	$set(this, m_expression, expression);
	this->m_isFromWithParam = isFromWithParam;
	this->m_isVisible = !isFromWithParam;
}

void Arg::init$($QName* qname, $XObject* val) {
	$set(this, m_qname, qname);
	$set(this, m_val, val);
	this->m_isVisible = true;
	this->m_isFromWithParam = false;
	$set(this, m_expression, nullptr);
}

int32_t Arg::hashCode() {
	return $Objects::hashCode(this->m_qname);
}

bool Arg::equals(Object$* obj) {
	if ($instanceOf($QName, obj)) {
		return $nc(this->m_qname)->equals(obj);
	} else {
		return $Object::equals(obj);
	}
}

void Arg::init$($QName* qname, $XObject* val, bool isFromWithParam) {
	$set(this, m_qname, qname);
	$set(this, m_val, val);
	this->m_isFromWithParam = isFromWithParam;
	this->m_isVisible = !isFromWithParam;
	$set(this, m_expression, nullptr);
}

Arg::Arg() {
}

$Class* Arg::load$($String* name, bool initialize) {
	$loadClass(Arg, name, initialize, &_Arg_ClassInfo_, allocate$Arg);
	return class$;
}

$Class* Arg::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com