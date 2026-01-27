#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef ATTR_VAL_TEMPLATE_ERR
#undef DELIMITER
#undef DUP
#undef IN_EXPR
#undef IN_EXPR_DQUOTES
#undef IN_EXPR_SQUOTES
#undef OUT_EXPR
#undef STRING_BUFFER_CLASS
#undef STRING_BUFFER_SIG
#undef STRING_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _AttributeValueTemplate_FieldInfo_[] = {
	{"OUT_EXPR", "I", nullptr, $STATIC | $FINAL, $constField(AttributeValueTemplate, OUT_EXPR)},
	{"IN_EXPR", "I", nullptr, $STATIC | $FINAL, $constField(AttributeValueTemplate, IN_EXPR)},
	{"IN_EXPR_SQUOTES", "I", nullptr, $STATIC | $FINAL, $constField(AttributeValueTemplate, IN_EXPR_SQUOTES)},
	{"IN_EXPR_DQUOTES", "I", nullptr, $STATIC | $FINAL, $constField(AttributeValueTemplate, IN_EXPR_DQUOTES)},
	{"DELIMITER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AttributeValueTemplate, DELIMITER)},
	{}
};

$MethodInfo _AttributeValueTemplate_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(AttributeValueTemplate, init$, void, $String*, $Parser*, $SyntaxTreeNode*)},
	{"parseAVTemplate", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PRIVATE, $method(AttributeValueTemplate, parseAVTemplate, void, $String*, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeValueTemplate, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(AttributeValueTemplate, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(AttributeValueTemplate, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _AttributeValueTemplate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValueTemplate",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValue",
	nullptr,
	_AttributeValueTemplate_FieldInfo_,
	_AttributeValueTemplate_MethodInfo_
};

$Object* allocate$AttributeValueTemplate($Class* clazz) {
	return $of($alloc(AttributeValueTemplate));
}

$String* AttributeValueTemplate::DELIMITER = nullptr;

void AttributeValueTemplate::init$($String* value, $Parser* parser, $SyntaxTreeNode* parent) {
	$AttributeValue::init$();
	setParent(parent);
	setParser(parser);
	try {
		parseAVTemplate(value, parser);
	} catch ($NoSuchElementException& e) {
		$init($ErrorMsg);
		reportError(parent, parser, $ErrorMsg::ATTR_VAL_TEMPLATE_ERR, value);
	}
}

void AttributeValueTemplate::parseAVTemplate($String* text, $Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, text, "{}\"\'"_s, true));
	$var($String, t, nullptr);
	$var($String, lookahead, nullptr);
	$var($StringBuilder, buffer, $new($StringBuilder));
	int32_t state = AttributeValueTemplate::OUT_EXPR;
	while (tokenizer->hasMoreTokens()) {
		if (lookahead != nullptr) {
			$assign(t, lookahead);
			$assign(lookahead, nullptr);
		} else {
			$assign(t, tokenizer->nextToken());
		}
		if ($nc(t)->length() == 1) {
			switch (t->charAt(0)) {
			case u'{':
				{
					switch (state) {
					case AttributeValueTemplate::OUT_EXPR:
						{
							$assign(lookahead, tokenizer->nextToken());
							if ($nc(lookahead)->equals("{"_s)) {
								buffer->append(lookahead);
								$assign(lookahead, nullptr);
							} else {
								buffer->append(AttributeValueTemplate::DELIMITER);
								state = AttributeValueTemplate::IN_EXPR;
							}
							break;
						}
					case AttributeValueTemplate::IN_EXPR:
						{}
					case AttributeValueTemplate::IN_EXPR_SQUOTES:
						{}
					case AttributeValueTemplate::IN_EXPR_DQUOTES:
						{
							$init($ErrorMsg);
							reportError($(getParent()), parser, $ErrorMsg::ATTR_VAL_TEMPLATE_ERR, text);
							break;
						}
					}
					break;
				}
			case u'}':
				{
					switch (state) {
					case AttributeValueTemplate::OUT_EXPR:
						{
							$assign(lookahead, tokenizer->nextToken());
							if ($nc(lookahead)->equals("}"_s)) {
								buffer->append(lookahead);
								$assign(lookahead, nullptr);
							} else {
								$init($ErrorMsg);
								reportError($(getParent()), parser, $ErrorMsg::ATTR_VAL_TEMPLATE_ERR, text);
							}
							break;
						}
					case AttributeValueTemplate::IN_EXPR:
						{
							buffer->append(AttributeValueTemplate::DELIMITER);
							state = AttributeValueTemplate::OUT_EXPR;
							break;
						}
					case AttributeValueTemplate::IN_EXPR_SQUOTES:
						{}
					case AttributeValueTemplate::IN_EXPR_DQUOTES:
						{
							buffer->append(t);
							break;
						}
					}
					break;
				}
			case u'\'':
				{
					switch (state) {
					case AttributeValueTemplate::IN_EXPR:
						{
							state = AttributeValueTemplate::IN_EXPR_SQUOTES;
							break;
						}
					case AttributeValueTemplate::IN_EXPR_SQUOTES:
						{
							state = AttributeValueTemplate::IN_EXPR;
							break;
						}
					case AttributeValueTemplate::OUT_EXPR:
						{}
					case AttributeValueTemplate::IN_EXPR_DQUOTES:
						{
							break;
						}
					}
					buffer->append(t);
					break;
				}
			case u'\"':
				{
					switch (state) {
					case AttributeValueTemplate::IN_EXPR:
						{
							state = AttributeValueTemplate::IN_EXPR_DQUOTES;
							break;
						}
					case AttributeValueTemplate::IN_EXPR_DQUOTES:
						{
							state = AttributeValueTemplate::IN_EXPR;
							break;
						}
					case AttributeValueTemplate::OUT_EXPR:
						{}
					case AttributeValueTemplate::IN_EXPR_SQUOTES:
						{
							break;
						}
					}
					buffer->append(t);
					break;
				}
			default:
				{
					buffer->append(t);
					break;
				}
			}
		} else {
			buffer->append(t);
		}
	}
	if (state != AttributeValueTemplate::OUT_EXPR) {
		$init($ErrorMsg);
		reportError($(getParent()), parser, $ErrorMsg::ATTR_VAL_TEMPLATE_ERR, text);
	}
	$assign(tokenizer, $new($StringTokenizer, $(buffer->toString()), AttributeValueTemplate::DELIMITER, true));
	while (tokenizer->hasMoreTokens()) {
		$assign(t, tokenizer->nextToken());
		if ($nc(t)->equals(AttributeValueTemplate::DELIMITER)) {
			addElement($($nc(parser)->parseExpression(this, $(tokenizer->nextToken()))));
			tokenizer->nextToken();
		} else {
			addElement($$new($LiteralExpr, t));
		}
	}
}

$Type* AttributeValueTemplate::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($List, contents, getContents());
	int32_t n = $nc(contents)->size();
	for (int32_t i = 0; i < n; ++i) {
		$var($Expression, exp, $cast($Expression, contents->get(i)));
		$init($Type);
		if (!$nc($($nc(exp)->typeCheck(stable)))->identicalTo($Type::String)) {
			contents->set(i, $$new($CastExpr, exp, $Type::String));
		}
	}
	$init($Type);
	return $set(this, _type, $Type::String);
}

$String* AttributeValueTemplate::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buffer, $new($StringBuilder, "AVT:["_s));
	int32_t count = elementCount();
	for (int32_t i = 0; i < count; ++i) {
		buffer->append($($nc($of($(elementAt(i))))->toString()));
		if (i < count - 1) {
			buffer->append(u' ');
		}
	}
	return buffer->append(u']')->toString();
}

void AttributeValueTemplate::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	if (elementCount() == 1) {
		$var($Expression, exp, $cast($Expression, elementAt(0)));
		$nc(exp)->translate(classGen, methodGen);
	} else {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$init($Constants);
		int32_t initBuffer = $nc(cpg)->addMethodref($Constants::STRING_BUFFER_CLASS, "<init>"_s, "()V"_s);
		$var($Instruction, append, $new($INVOKEVIRTUAL, cpg->addMethodref($Constants::STRING_BUFFER_CLASS, "append"_s, $$str({"("_s, $Constants::STRING_SIG, ")"_s, $Constants::STRING_BUFFER_SIG}))));
		int32_t toString = cpg->addMethodref($Constants::STRING_BUFFER_CLASS, "toString"_s, $$str({"()"_s, $Constants::STRING_SIG}));
		$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::STRING_BUFFER_CLASS))));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, initBuffer)));
		$var($Iterator, elements, this->elements());
		while ($nc(elements)->hasNext()) {
			$var($Expression, exp, $cast($Expression, elements->next()));
			$nc(exp)->translate(classGen, methodGen);
			il->append(append);
		}
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, toString)));
	}
}

AttributeValueTemplate::AttributeValueTemplate() {
}

void clinit$AttributeValueTemplate($Class* class$) {
	$assignStatic(AttributeValueTemplate::DELIMITER, u"\ufffe"_s);
}

$Class* AttributeValueTemplate::load$($String* name, bool initialize) {
	$loadClass(AttributeValueTemplate, name, initialize, &_AttributeValueTemplate_ClassInfo_, clinit$AttributeValueTemplate, allocate$AttributeValueTemplate);
	return class$;
}

$Class* AttributeValueTemplate::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com