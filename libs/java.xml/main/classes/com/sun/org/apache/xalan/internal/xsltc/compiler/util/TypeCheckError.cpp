#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <jcpp.h>

#undef TYPE_CHECK_ERR
#undef TYPE_CHECK_UNK_LOC_ERR

using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
								namespace util {

$FieldInfo _TypeCheckError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TypeCheckError, serialVersionUID)},
	{"_error", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;", nullptr, 0, $field(TypeCheckError, _error)},
	{"_node", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;", nullptr, 0, $field(TypeCheckError, _node)},
	{}
};

$MethodInfo _TypeCheckError_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(TypeCheckError, init$, void, $SyntaxTreeNode*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;)V", nullptr, $PUBLIC, $method(TypeCheckError, init$, void, $ErrorMsg*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TypeCheckError, init$, void, $String*, Object$*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(TypeCheckError, init$, void, $String*, Object$*, Object$*)},
	{"getErrorMsg", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg;", nullptr, $PUBLIC, $virtualMethod(TypeCheckError, getErrorMsg, $ErrorMsg*)},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeCheckError, getMessage, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeCheckError, toString, $String*)},
	{}
};

$ClassInfo _TypeCheckError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError",
	"java.lang.Exception",
	nullptr,
	_TypeCheckError_FieldInfo_,
	_TypeCheckError_MethodInfo_
};

$Object* allocate$TypeCheckError($Class* clazz) {
	return $of($alloc(TypeCheckError));
}

void TypeCheckError::init$($SyntaxTreeNode* node) {
	$Exception::init$();
	$set(this, _error, nullptr);
	$set(this, _node, nullptr);
	$set(this, _node, node);
}

void TypeCheckError::init$($ErrorMsg* error) {
	$Exception::init$();
	$set(this, _error, nullptr);
	$set(this, _node, nullptr);
	$set(this, _error, error);
}

void TypeCheckError::init$($String* code, Object$* param) {
	$Exception::init$();
	$set(this, _error, nullptr);
	$set(this, _node, nullptr);
	$set(this, _error, $new($ErrorMsg, code, param));
}

void TypeCheckError::init$($String* code, Object$* param1, Object$* param2) {
	$Exception::init$();
	$set(this, _error, nullptr);
	$set(this, _node, nullptr);
	$set(this, _error, $new($ErrorMsg, code, param1, param2));
}

$ErrorMsg* TypeCheckError::getErrorMsg() {
	return this->_error;
}

$String* TypeCheckError::getMessage() {
	return toString();
}

$String* TypeCheckError::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, result, nullptr);
	if (this->_error == nullptr) {
		if (this->_node != nullptr) {
			$init($ErrorMsg);
			$set(this, _error, $new($ErrorMsg, $ErrorMsg::TYPE_CHECK_ERR, $($of($nc($of(this->_node))->toString()))));
		} else {
			$init($ErrorMsg);
			$set(this, _error, $new($ErrorMsg, $ErrorMsg::TYPE_CHECK_UNK_LOC_ERR));
		}
	}
	return $nc(this->_error)->toString();
}

TypeCheckError::TypeCheckError() {
}

TypeCheckError::TypeCheckError(const TypeCheckError& e) : $Exception(e) {
}

void TypeCheckError::throw$() {
	throw *this;
}

$Class* TypeCheckError::load$($String* name, bool initialize) {
	$loadClass(TypeCheckError, name, initialize, &_TypeCheckError_ClassInfo_, allocate$TypeCheckError);
	return class$;
}

$Class* TypeCheckError::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com