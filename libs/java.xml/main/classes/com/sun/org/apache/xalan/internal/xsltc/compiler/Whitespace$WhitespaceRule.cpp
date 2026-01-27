#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace.h>
#include <jcpp.h>

#undef EMPTYSTRING

using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Whitespace$WhitespaceRule_FieldInfo_[] = {
	{"_action", "I", nullptr, $PRIVATE | $FINAL, $field(Whitespace$WhitespaceRule, _action)},
	{"_namespace", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Whitespace$WhitespaceRule, _namespace)},
	{"_element", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Whitespace$WhitespaceRule, _element)},
	{"_type", "I", nullptr, $PRIVATE, $field(Whitespace$WhitespaceRule, _type)},
	{"_priority", "I", nullptr, $PRIVATE, $field(Whitespace$WhitespaceRule, _priority)},
	{}
};

$MethodInfo _Whitespace$WhitespaceRule_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;I)V", nullptr, $PUBLIC, $method(Whitespace$WhitespaceRule, init$, void, int32_t, $String*, int32_t)},
	{"compareTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule;)I", nullptr, $PUBLIC, $method(Whitespace$WhitespaceRule, compareTo, int32_t, Whitespace$WhitespaceRule*)},
	{"getAction", "()I", nullptr, $PUBLIC, $method(Whitespace$WhitespaceRule, getAction, int32_t)},
	{"getElement", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Whitespace$WhitespaceRule, getElement, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Whitespace$WhitespaceRule, getNamespace, $String*)},
	{"getPriority", "()I", nullptr, $PUBLIC, $method(Whitespace$WhitespaceRule, getPriority, int32_t)},
	{"getStrength", "()I", nullptr, $PUBLIC, $method(Whitespace$WhitespaceRule, getStrength, int32_t)},
	{}
};

$InnerClassInfo _Whitespace$WhitespaceRule_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace$WhitespaceRule", "com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace", "WhitespaceRule", $STATIC | $FINAL},
	{}
};

$ClassInfo _Whitespace$WhitespaceRule_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace$WhitespaceRule",
	"java.lang.Object",
	nullptr,
	_Whitespace$WhitespaceRule_FieldInfo_,
	_Whitespace$WhitespaceRule_MethodInfo_,
	nullptr,
	nullptr,
	_Whitespace$WhitespaceRule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace"
};

$Object* allocate$Whitespace$WhitespaceRule($Class* clazz) {
	return $of($alloc(Whitespace$WhitespaceRule));
}

void Whitespace$WhitespaceRule::init$(int32_t action, $String* element, int32_t precedence) {
	this->_action = action;
	int32_t colon = $nc(element)->lastIndexOf((int32_t)u':');
	if (colon >= 0) {
		$set(this, _namespace, element->substring(0, colon));
		$set(this, _element, element->substring(colon + 1, element->length()));
	} else {
		$init($Constants);
		$set(this, _namespace, $Constants::EMPTYSTRING);
		$set(this, _element, element);
	}
	this->_priority = precedence << 2;
	if ($nc(this->_element)->equals("*"_s)) {
		$init($Constants);
		if (this->_namespace == $Constants::EMPTYSTRING) {
			this->_type = 3;
			this->_priority += 2;
		} else {
			this->_type = 2;
			this->_priority += 1;
		}
	} else {
		this->_type = 1;
	}
}

int32_t Whitespace$WhitespaceRule::compareTo(Whitespace$WhitespaceRule* other) {
	return this->_priority < $nc(other)->_priority ? -1 : this->_priority > $nc(other)->_priority ? 1 : 0;
}

int32_t Whitespace$WhitespaceRule::getAction() {
	return this->_action;
}

int32_t Whitespace$WhitespaceRule::getStrength() {
	return this->_type;
}

int32_t Whitespace$WhitespaceRule::getPriority() {
	return this->_priority;
}

$String* Whitespace$WhitespaceRule::getElement() {
	return this->_element;
}

$String* Whitespace$WhitespaceRule::getNamespace() {
	return this->_namespace;
}

Whitespace$WhitespaceRule::Whitespace$WhitespaceRule() {
}

$Class* Whitespace$WhitespaceRule::load$($String* name, bool initialize) {
	$loadClass(Whitespace$WhitespaceRule, name, initialize, &_Whitespace$WhitespaceRule_ClassInfo_, allocate$Whitespace$WhitespaceRule);
	return class$;
}

$Class* Whitespace$WhitespaceRule::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com