#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SimpleAttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <jcpp.h>

using $AttributeValueTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SimpleAttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SimpleAttributeValue;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _AttributeValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AttributeValue, init$, void)},
	{"create", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(AttributeValue, create, AttributeValue*, $SyntaxTreeNode*, $String*, $Parser*)},
	{}
};

$ClassInfo _AttributeValue_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValue",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	nullptr,
	_AttributeValue_MethodInfo_
};

$Object* allocate$AttributeValue($Class* clazz) {
	return $of($alloc(AttributeValue));
}

void AttributeValue::init$() {
	$Expression::init$();
}

AttributeValue* AttributeValue::create($SyntaxTreeNode* parent, $String* text, $Parser* parser) {
	$init(AttributeValue);
	$var(AttributeValue, result, nullptr);
	if ($nc(text)->indexOf((int32_t)u'{') != -1) {
		$assign(result, $new($AttributeValueTemplate, text, parser, parent));
	} else if (text->indexOf((int32_t)u'}') != -1) {
		$assign(result, $new($AttributeValueTemplate, text, parser, parent));
	} else {
		$assign(result, $new($SimpleAttributeValue, text));
		result->setParser(parser);
		result->setParent(parent);
	}
	return result;
}

AttributeValue::AttributeValue() {
}

$Class* AttributeValue::load$($String* name, bool initialize) {
	$loadClass(AttributeValue, name, initialize, &_AttributeValue_ClassInfo_, allocate$AttributeValue);
	return class$;
}

$Class* AttributeValue::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com