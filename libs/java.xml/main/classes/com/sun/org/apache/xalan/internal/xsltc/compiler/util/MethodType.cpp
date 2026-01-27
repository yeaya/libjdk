#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>

#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MAX_VALUE

using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _MethodType_FieldInfo_[] = {
	{"_resultType", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE | $FINAL, $field(MethodType, _resultType)},
	{"_argsType", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;>;", $PRIVATE | $FINAL, $field(MethodType, _argsType)},
	{}
};

$MethodInfo _MethodType_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $method(MethodType, init$, void, $Type*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $method(MethodType, init$, void, $Type*, $Type*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $method(MethodType, init$, void, $Type*, $Type*, $Type*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $method(MethodType, init$, void, $Type*, $Type*, $Type*, $Type*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;>;)V", $PUBLIC, $method(MethodType, init$, void, $Type*, $List*)},
	{"argsCount", "()I", nullptr, $PUBLIC, $method(MethodType, argsCount, int32_t)},
	{"argsType", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;>;", $PUBLIC, $method(MethodType, argsType, $List*)},
	{"distanceTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)I", nullptr, $PUBLIC, $virtualMethod(MethodType, distanceTo, int32_t, $Type*)},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC, $virtualMethod(MethodType, identicalTo, bool, $Type*)},
	{"resultType", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $method(MethodType, resultType, $Type*)},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(MethodType, toJCType, $1Type*)},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodType, toSignature, $String*)},
	{"toSignature", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(MethodType, toSignature, $String*, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodType, toString, $String*)},
	{}
};

$ClassInfo _MethodType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	_MethodType_FieldInfo_,
	_MethodType_MethodInfo_
};

$Object* allocate$MethodType($Class* clazz) {
	return $of($alloc(MethodType));
}

void MethodType::init$($Type* resultType) {
	$Type::init$();
	$set(this, _argsType, nullptr);
	$set(this, _resultType, resultType);
}

void MethodType::init$($Type* resultType, $Type* arg1) {
	$Type::init$();
	$init($Type);
	if (arg1 != $Type::Void) {
		$set(this, _argsType, $new($ArrayList));
		$nc(this->_argsType)->add(arg1);
	} else {
		$set(this, _argsType, nullptr);
	}
	$set(this, _resultType, resultType);
}

void MethodType::init$($Type* resultType, $Type* arg1, $Type* arg2) {
	$Type::init$();
	$set(this, _argsType, $new($ArrayList, 2));
	$nc(this->_argsType)->add(arg1);
	$nc(this->_argsType)->add(arg2);
	$set(this, _resultType, resultType);
}

void MethodType::init$($Type* resultType, $Type* arg1, $Type* arg2, $Type* arg3) {
	$Type::init$();
	$set(this, _argsType, $new($ArrayList, 3));
	$nc(this->_argsType)->add(arg1);
	$nc(this->_argsType)->add(arg2);
	$nc(this->_argsType)->add(arg3);
	$set(this, _resultType, resultType);
}

void MethodType::init$($Type* resultType, $List* argsType) {
	$Type::init$();
	$set(this, _resultType, resultType);
	$set(this, _argsType, $nc(argsType)->size() > 0 ? argsType : ($List*)nullptr);
}

$String* MethodType::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, result, $new($StringBuffer, "method{"_s));
	if (this->_argsType != nullptr) {
		int32_t count = $nc(this->_argsType)->size();
		for (int32_t i = 0; i < count; ++i) {
			result->append($($nc(this->_argsType)->get(i)));
			if (i != (count - 1)) {
				result->append(u',');
			}
		}
	} else {
		result->append("void"_s);
	}
	result->append(u'}');
	return result->toString();
}

$String* MethodType::toSignature() {
	return toSignature(""_s);
}

$String* MethodType::toSignature($String* lastArgSig) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buffer, $new($StringBuffer));
	buffer->append(u'(');
	if (this->_argsType != nullptr) {
		int32_t n = $nc(this->_argsType)->size();
		for (int32_t i = 0; i < n; ++i) {
			buffer->append($($nc(($cast($Type, $($nc(this->_argsType)->get(i)))))->toSignature()));
		}
	}
	return buffer->append(lastArgSig)->append(u')')->append($($nc(this->_resultType)->toSignature()))->toString();
}

$1Type* MethodType::toJCType() {
	return nullptr;
}

bool MethodType::identicalTo($Type* other) {
	$useLocalCurrentObjectStackCache();
	bool result = false;
	if ($instanceOf(MethodType, other)) {
		$var(MethodType, temp, $cast(MethodType, other));
		if ($nc(this->_resultType)->identicalTo($nc(temp)->_resultType)) {
			int32_t len = argsCount();
			result = len == $nc(temp)->argsCount();
			for (int32_t i = 0; i < len && result; ++i) {
				$var($Type, arg1, $cast($Type, $nc(this->_argsType)->get(i)));
				$var($Type, arg2, $cast($Type, $nc(temp->_argsType)->get(i)));
				result = $nc(arg1)->identicalTo(arg2);
			}
		}
	}
	return result;
}

int32_t MethodType::distanceTo($Type* other) {
	$useLocalCurrentObjectStackCache();
	int32_t result = $Integer::MAX_VALUE;
	if ($instanceOf(MethodType, other)) {
		$var(MethodType, mtype, $cast(MethodType, other));
		if (this->_argsType != nullptr) {
			int32_t len = $nc(this->_argsType)->size();
			if (len == $nc($nc(mtype)->_argsType)->size()) {
				result = 0;
				for (int32_t i = 0; i < len; ++i) {
					$var($Type, arg1, $cast($Type, $nc(this->_argsType)->get(i)));
					$var($Type, arg2, $cast($Type, $nc(mtype->_argsType)->get(i)));
					int32_t temp = $nc(arg1)->distanceTo(arg2);
					if (temp == $Integer::MAX_VALUE) {
						result = temp;
						break;
					} else {
						result += arg1->distanceTo(arg2);
					}
				}
			}
		} else if ($nc(mtype)->_argsType == nullptr) {
			result = 0;
		}
	}
	return result;
}

$Type* MethodType::resultType() {
	return this->_resultType;
}

$List* MethodType::argsType() {
	return this->_argsType;
}

int32_t MethodType::argsCount() {
	return this->_argsType == nullptr ? 0 : $nc(this->_argsType)->size();
}

MethodType::MethodType() {
}

$Class* MethodType::load$($String* name, bool initialize) {
	$loadClass(MethodType, name, initialize, &_MethodType_ClassInfo_, allocate$MethodType);
	return class$;
}

$Class* MethodType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com